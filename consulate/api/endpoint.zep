namespace Consulate\Api;

use Consulate\Config;
use Consulate\Http\Request;
use Consulate\Http\Client\Curl as CurlClient;

abstract class Endpoint {
    protected config {
        get
    };

    public function __construct(<Config> config) {
        let this->config = config;
    }

    // create a new request
    public function newRequest(string method, string path, body = null) -> <\Consulate\Http\Request> {
        return new Request(method, path, this->config, body);
    }

    // doRequest runs a request with our client
    public function doRequest(<Request> r) {
        var start, diff, 
            uri, response, httpAuth, httpClient;

        //start send a request time
        let start = microtime(true);

        let uri = r->getUri();

        let httpClient = new CurlClient();
        let httpClient = httpClient->setUrl((string)uri)->setMethod(r->getMethod());

        //init tls

        //init headers
        httpClient->setHeaders(r->getHeaders());

        //set http Client
        let httpAuth = this->config->getHttpAuth();
        if !empty (string)httpAuth {
            httpClient->setBasicAuth(httpAuth->getUsername(), httpAuth->getPassword());
        }

        httpClient->setBody(r->getBody());

        let response = httpClient->send();

        let diff = (microtime(true) - start) * 1000000;
        return [diff, response];
    }

    // Query is used to do a GET request against an endpoint
    // and deserialize the response into an interface using
    // standard Consul conventions.
    public function query() {

    }

    // write is used to do a PUT request against an endpoint
    // and serialize/deserialized using the standard Consul conventions.
    public function write() {

    }

    public function requireOK(array result) {
        var response;

        if fetch response, result[1] {
            if (response instanceof \Consulate\Http\Response) {
                if (response->getStatusCode() != 200) {
                    throw new Exception(sprintf("%s - Non 200 status code response. Status Code: %s", get_called_class(), response->getStatusCode()));
                }
            } else {
                throw new Exception(sprintf("%s Expected response to be instance of Consulate\\Http\\Response.", is_object(response) ? get_class(response) : gettype(response)));

            }
        }

        return result;
    }

    public function parseQueryMeta(<\Consulate\Http\Response> response, <\Consulate\QueryMeta> q) -> <\Consulate\QueryMeta> {
        var header;

        let header = response->getHeaders();

        if isset header["X-Consul-Index"] {
            q->setLastIndex((int) header["X-Consul-Index"]);
        }

        if isset header["X-Consul-Lastcontact"] {
            q->setLastContact((int) header["X-Consul-Lastcontact"]);
        }

        if isset header["X-Consul-Knownleader"] && header["X-Consul-Knownleader"] == "true" {
            q->setKnownLeader(true);
        } else {
            q->setKnownLeader(false);
        }

        if isset header["X-Consul-Translate-Address"] && header["X-Consul-Translate-Address"] == "true" {
            q->setAddressTranslationEnabled(true);
        } else {
            q->setAddressTranslationEnabled(false);
        }

        return q;
    }

    public function decodeBody(resp) -> array {
        var data, json_string;

        let json_string = this->removeBom(resp->getBody());

        let data = json_decode(json_string, true);
        if (json_last_error() != JSON_ERROR_NONE && (data == null || data == false)) {
            throw new Exception(sprintf("%s - Unable to parse response as a json. Error message: %s, raw data: %s", get_called_class(), json_last_error_msg(), resp));
        }

        return data;
    }

    private function removeBom(str) -> string {
        var bom;
        let bom = pack("H*","EFBBBF");

        return preg_replace("/^" . bom . "/", "", str);
    }
}
