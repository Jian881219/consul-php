namespace Consulate\Http\Client;

use Consulate\Http\Response;

class Curl {
    const METHOD_GET        = "GET";

    const METHOD_POST       = "POST";

    const METHOD_PUT        = "PUT";

    const METHOD_HEAD       = "HEAD";

    const METHOD_DELETE     = "DELETE";

    const METHOD_PATCH      = "PATCH";

    const METHOD_OPTIONS    = "OPTIONS";

    const METHOD_TRACE      = "TRACE";

    private _handler;

    private version;

    public function __construct() {
        let this->_handler = curl_init();
        let this->version = curl_version();

        curl_setopt_array(this->_handler, [
                CURLOPT_RETURNTRANSFER  : true,
                CURLOPT_AUTOREFERER     : true,
                CURLOPT_FOLLOWLOCATION  : true,
                CURLOPT_MAXREDIRS       : 20,
                CURLOPT_PROTOCOLS       : CURLPROTO_HTTP | CURLPROTO_HTTPS,
                CURLOPT_REDIR_PROTOCOLS : CURLPROTO_HTTP | CURLPROTO_HTTPS,
                CURLOPT_HEADER          : true,
                CURLOPT_CONNECTTIMEOUT  : 30,
                CURLOPT_TIMEOUT         : 30
        ]);
    }

    public function setUrl(string url) -> <\Consulate\Http\Client\Curl> {
        return this->setup(CURLOPT_URL, url);
    }

    public function setMethod(string method) -> <\Consulate\Http\Client\Curl> {
        let method = method->upper();

        this->setup(CURLOPT_CUSTOMREQUEST, method);

        if (method == self::METHOD_HEAD) {
            this->setup(CURLOPT_NOBODY, true);
        }

        return this;
    }

    public function __destruct() {
        curl_close(this->_handler);
    }

    public function setup(name, value) -> <\Consulate\Http\Client\Curl> {
        curl_setopt(this->_handler, name, value);
        return this;
    }

    public function setBasicAuth(string username = "", string password = "") -> <\Consulate\Http\Client\Curl> {
        this->setup(CURLOPT_HTTPAUTH, CURLAUTH_BASIC);
        this->setup(CURLOPT_USERPWD, sprintf("%s:%s", username, password));

        return this;
    }

    public function setHeaders(array fields) -> <\Consulate\Http\Client\Curl> {
        if fields->count() > 0 {
            var headers = [], field, value;

            for field, value in fields {
                let headers[] = sprintf("%s:%s", field, join(",", value));
            }
            let headers = array_unique(headers, SORT_STRING);
            this->setup(CURLOPT_HTTPHEADER, headers);
        }
        return this;
    }

    public function setBody(body) -> <\Consulate\Http\Client\Curl> {
        var context;
        if typeof body == "resource" {
            fseek(body, 0);//rewind
            let context = stream_get_contents(body);
        } elseif typeof body == "object" {
            let context = (array)body;
        } else {
            let context = body;
        }
        
        this->setup(CURLOPT_POSTFIELDS, context);
        return this;
    }

    public function send() -> <\Consulate\Http\Response> {
        var result, info, response, body, headers;

        let result = curl_exec(this->_handler);

        if result === false {
            throw new Exception(sprintf("Unable connect: %s (Code: %s)", curl_error(this->_handler), curl_errno(this->_handler)));
        }

        let info = curl_getinfo(this->_handler);

        let response = explode("\r\n\r\n", result, 2 + info["redirect_count"]);

        let body = array_pop(response);
        let headers = array_pop(response);

        return new Response(body, headers, info);
    }
}
