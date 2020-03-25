namespace Consulate;

use Consulate\Http\Auth as HttpAuth;

class Config {
    // Address is the address of the Consul server
    protected address = "" { 
        get, set
    };

    // Scheme is the URI scheme for the Consul server
    protected scheme = "" {
        get, set
    };

    // Datacenter to use. If not provided, the default agent datacenter is used.
    protected datacenter = "" { 
        get, set
    };

    // HTTP authentication, if used
    protected httpAuth = null { 
        get
    };

    // Time to wait on certain blockable endpoints
    protected waitTime = 0 {
        get, set
    };

    // ACL token to use by default
    protected token = "" {
        get, set
    };

    // Optional path to CA certificate
    protected CAFile = "" {
        get, set
    };

    // Optional path to certificate.  If set, KeyFile must also be set
    protected certFile = "" {
        get, set
    };

    // Optional path to private key.  If set, CertFile must also be set
    protected keyFile = "" {
        get, set
    };

    // Whether to skip SSL validation.  This does nothing unless you use it within your HttpClient of choice
    protected insecureSkipVerify = false {
        get, set
    };

    //Whether to use Consul 0.7.0-style X-Consul-Token header or the older query-param style for passing ACL tokens
    //@var bool
    protected tokenInHeader = false {
        get, set
    };

    public function __construct(array! config = []) {
        var method, k, v;

        let config = config + static::getDefaultConfig();

        for k, v in config {
            let method = sprintf("set%s", ucfirst(k));
            this->{method}(v);
        }

        if empty this->httpAuth {
            let this->httpAuth = new HttpAuth;
        }
    }

    public static function newDefaultConfig() -> <\Consulate\Config> {
        return new static(self::getDefaultConfig());
    }

    public function setHttpAuth(auth) {
        if is_string(auth) {
            string username, password;
            var pos;

            let pos = auth->index(":");
            if (pos === false) {
                let username = auth;
            } else {
                let username = substr(auth, 0, pos);
                let password = substr(auth, pos + 1);
            }

            let this->httpAuth = new HttpAuth(username, password);
            return this;
        }

        if auth instanceof HttpAuth {
            let this->httpAuth = auth;
            return this;
        }

        throw new \Exception(sprintf(
            "%s::setHttpAuth - Value is expected to be string of \"username:password\" or instance of \"\\Consulate\\Http\\Auth\", %s seen.",
            get_class(this),
            is_string(auth) ? auth : gettype(auth)
        ));
    }

    public function durToMsec(int dur) -> string {
        var ms;

        let ms = dur / 1000000;

        if dur > 0 && ms == 0 {
            let ms = 1;
        }

        return sprintf("%dms", ms);
    }

    private static function getValueFromEnvironment(key) {
        var v;
        if fetch v, _ENV[key] {
            return v;
        }

        let v = getenv(key);
        if v !== false {
            return v;
        }

        if fetch v, _SERVER[key] {
            return v;
        }

        return "";
    }

    private static function getDefaultConfig() -> array {
        var config, addr, token, auth, CAFile, certFile, keyFile, v;

        let config = [
            "address" : "127.0.0.1:8500",
            "scheme"  : "http"
        ];

        let addr = static::getValueFromEnvironment(Client::HTTP_ADDR_ENV_NAME);
        if addr != "" {
            let config["address"] = addr;
        }

        let token = static::getValueFromEnvironment(Client::HTTP_TOKEN_ENV_NAME);
        if token != "" {
            let config["token"] = token;
        }

        let auth = static::getValueFromEnvironment(Client::HTTP_AUTH_ENV_NAME);
        if auth != "" {
            let config["httpAuth"] = auth;
        }

        let CAFile = static::getValueFromEnvironment(Client::HTTP_CAFILE_ENV_NAME);
        if CAFile != "" {
            let config["CAFile"] = CAFile;
        }

        let certFile = static::getValueFromEnvironment(Client::HTTP_CLIENT_CERT_ENV_NAME);
        if certFile != "" {
            let config["certFile"] = certFile;
        }

        let keyFile = static::getValueFromEnvironment(Client::HTTP_CLIENT_KEY_ENV_NAME);
        if keyFile != "" {
            let config["keyFile"] = keyFile;
        }

        let v = static::getValueFromEnvironment(Client::HTTP_SSL_ENV_NAME);
        if (bool)v {
            let config["scheme"] = "https";
        }

        let v = static::getValueFromEnvironment(Client::HTTP_SSL_VERIFY);
        if (bool)v {
            let config["insecureSkipVerify"] = true;
        }

        let v = static::getValueFromEnvironment(Client::HTTP_TLS_SERVER_NAME);
        if v != "" {
            let config["address"] = v;
        }

        return config;
    }
}
