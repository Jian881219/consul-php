namespace Consulate;


//init new client
class Client {
    // HTTPAddrEnvName defines an environment variable name which sets
	// the HTTP address if there is no -http-addr specified.
    const HTTP_ADDR_ENV_NAME = "CONSUL_HTTP_ADDR";

    // HTTPTokenEnvName defines an environment variable name which sets
	// the HTTP token.
    const HTTP_TOKEN_ENV_NAME = "CONSUL_HTTP_TOKEN";

    // HTTPAuthEnvName defines an environment variable name which sets
	// the HTTP authentication header.
    const HTTP_AUTH_ENV_NAME = "CONSUL_HTTP_AUTH";

    // HTTPSSLEnvName defines an environment variable name which sets
	// whether or not to use HTTPS.
    const HTTP_SSL_ENV_NAME = "CONSUL_HTTP_SSL";

    // HTTPCAFile defines an environment variable name which sets the
	// CA file to use for talking to Consul over TLS.
    const HTTP_CAFILE_ENV_NAME = "CONSUL_CACERT";

    // HTTPClientCert defines an environment variable name which sets the
	// client cert file to use for talking to Consul over TLS.
    const HTTP_CLIENT_CERT_ENV_NAME = "CONSUL_CLIENT_CERT";

    // HTTPClientKey defines an environment variable name which sets the
	// client key file to use for talking to Consul over TLS.
    const HTTP_CLIENT_KEY_ENV_NAME = "CONSUL_CLIENT_KEY";

    // HTTPTLSServerName defines an environment variable name which sets the
	// server name to use as the SNI host when connecting via TLS
	const HTTP_TLS_SERVER_NAME = "CONSUL_TLS_SERVER_NAME";

    // HTTPSSLVerifyEnvName defines an environment variable name which sets
	// whether or not to disable certificate checking.
    const HTTP_SSL_VERIFY = "CONSUL_HTTP_SSL_VERIFY";

    protected config;

    public function __construct(<Config> config = null) {
        var defConfig;
        let defConfig = Config::newDefaultConfig();

        if config == null {
            let config = defConfig;
        } else {
            if config->getAddress() == "" {
                config->setAddress(defConfig->getAddress());
            }

            if config->getScheme() == "" {
                config->setScheme(defConfig->getScheme());
            }
        }

        let this->config = config;
    }

    public function acl() {

    }

    public function agent() -> <\Consulate\Api\Agent> {
        return new Api\Agent(this->config);
    }

    public function catalog() {

    }

    public function coordinate() {

    }

    public function event() {

    }

    public function health() -> <\Consulate\Api\Health> {
        return new Api\Health(this->config);
    }

    public function kv() -> <\Consulate\Api\Kv> {
        return new Api\Kv(this->config);
    }

    public function lock() {

    }

    public function operator() {

    }

    public function session() {

    }

    public function status() -> <\Consulate\Api\Status> {
        return new Api\Status(this->config);
    }
}
