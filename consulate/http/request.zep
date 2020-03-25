namespace Consulate\Http;

use Consulate\Config;
use Consulate\QueryOptions;
use Consulate\WriteOptions;
use Consulate\Http\Headers;
use Consulate\Http\Params;
use Consulate\Http\Uri;

class Request {
    protected headers {
        get
    };

    protected params {
        get
    };

    protected config;

    protected path {
        get   
    };

    protected uri;

    protected method {
        get
    };

    protected body {
        get
    };

    public function __construct(string method, string path, <Config> config, body = null) {
        let this->config = config;

        let this->method = method->upper();
        let this->path = path;

        let this->headers = new Headers();
        let this->params = new Params();

        if (config->getDatacenter() !== "") {
            this->params->set("dc", config->getDatacenter());
        }

        if (config->getWaitTime() !== 0) {
            this->params->set("wait", config->durToMsec(config->getWaitTime()));
        }

        if (config->getToken() !== "") {
            if (config->getTokenInHeader()) {
                this->headers->set("X-Consul-Token", config->getToken());
            } else {
                this->params->set("token", config->getToken());
            }
        }

        if (body !== null) {
            var str = "";

            switch typeof body {
                case "object":
                case "array":
                    let str = json_encode(body);
                    break;

                case "integer":
                case "double" :
                case "float":
                    let str = strval(body);
                    break;
                
                case "string":
                    let str = body;
                    break;

                case "boolean" :
                    let str = body ? "true" : "false";
                    break;
            }

            let this->body = fopen("php://memory", "w+");
            fwrite(this->body, str);
        }
    }

    public function __destruct() {
        if isset this->body && typeof this->body === "resource" {
            fclose(this->body);
        }
    }

    public function setQueryOptions(<QueryOptions> q = null) -> void {
        var k, v;

        if q == null {
            return;
        }

        if (q->getDatacenter() != "") {
            this->params->set("dc", q->getDatacenter());
        }

        if (q->getAllowStale()) {
            this->params->set("stale", "");
        }

        if (q->getRequireConsistent()) {
            this->params->set("consistent", "");
        }

        if (q->getWaitIndex() != 0) {
            this->params->set("index", (string) q->getWaitIndex());
        }

        if (q->getWaitTime() != 0) {
            this->params->set("wait", this->config->durToMsec(q->getWaitTime()));
        }

        if (q->getToken() != "") {
            if (this->config->getTokenInHeader()) {
                this->headers->set("X-Consul-Token", q->getToken());
            } else {
                this->params->set("token", q->getToken());
            }
        }

        if (q->getNear() != "") {
            this->params->set("near", q->getNear());
        }

        if count(q->getNodeMeta()) > 0 {
            for k, v in q->getNodeMeta() {
                this->params->add("node-meta",  k.":".v);
            }
        }

        if (q->getRelayFactor() != 0) {
            this->params->set("relay-factor", (string)q->getRelayFactor());
        }

        if q->getPretty() {
            this->params->set("pretty", "");
        }

        let this->uri = null;
    }

    public function setWriteOptions(<WriteOptions> q = null) -> void {
        if q == null {
            return;
        }

        if (q->getDatacenter() != "") {
            this->params->set("dc", q->getDatacenter());
        }

        if (q->getToken() != "") {
            if (this->config->getTokenInHeader()) {
                this->headers->set("X-Consul-Token", q->getToken());
            } else {
                this->params->set("token", q->getToken());
            }
        }

        if (q->getRelayFactor() != 0) {
            this->params->set("relay-factor", (string)q->getRelayFactor());
        }

        let this->uri = null;
    }

    public function getUri() -> <\Consulate\Http\Uri> {
        var uri;
        if empty this->uri {
            let uri = new Uri(this->config->getScheme(), 
                    this->config->getAddress(),
                    this->getPath(),
                    (string) this->params,
                    ""
                );

            let this->uri = uri;
        }

        return this->uri;
    }
}
