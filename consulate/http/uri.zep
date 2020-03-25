namespace Consulate\Http;

//  see https://tools.ietf.org/html/rfc3986
//  foo://example.com:8042/over/there?name=ferret#nose
//  \_/   \______________/\_________/ \_________/ \__/
//   |           |            |            |        |
// scheme     authority       path        query   fragment
//   |   _____________________|__
//  / \ /                        \
//  urn:example:animal:ferret:nose 

// psr 7
class Uri {
    // Retrieve the scheme component of the URI.
    // 
    // If no scheme is present, this method MUST return an empty string.
    // 
    // The value returned MUST be normalized to lowercase, per RFC 3986
    // Section 3.1.
    // 
    // The trailing ":" character is not part of the scheme and MUST NOT be
    // added.
    // 
    // @see https://tools.ietf.org/html/rfc3986#section-3.1
    // @return string The URI scheme.
    protected scheme {
        get
    };

    // Retrieve the authority component of the URI.
    // 
    // If no authority information is present, this method MUST return an empty
    // string.
    // 
    // The authority syntax of the URI is:
    // 
    // <pre>
    // [user-info@]host[:port]
    // </pre>
    // 
    // If the port component is not set or is the standard port for the current
    // scheme, it SHOULD NOT be included.
    // 
    // @see https://tools.ietf.org/html/rfc3986#section-3.2
    // @return string The URI authority, in "[user-info@]host[:port]" format.
    protected authority;

    protected userInfo;

    protected host {
        get
    };

    protected port {
        get
    };

    protected path {
        get
    };

    protected query {
        get
    };

    protected fragment {
        get
    };

    private auth;

    protected static valid_schemes = [
        "http",
        "https"
    ];

    public function __construct(string scheme, string address, string path = "/", string query = "", string fragment = "", <Auth> auth = null) {
        let this->scheme = this->filterScheme(scheme);

        //host & port
        this->filterAddress(address);
        
        let this->path = empty path ? "/" : this->filterPath(path);
        let this->query = this->filterQuery(query);
        let this->fragment = this->filterQuery(fragment);

        if auth == null {
            let auth = new Auth;
        }
        let this->auth = auth;
    }

    protected function filterScheme(string scheme) -> string {
        let scheme = str_replace("://", "", scheme->lower());

        if empty scheme {
            let scheme = "http";
        }

        if (!in_array(scheme, self::valid_schemes)) {
            throw new Exception("Uri scheme must be one of: 'https', 'http'");
        }

        return scheme;
    }

    // host / port
    protected function filterAddress(string address) -> void {
        var host, port;

        var addressInfo;
        let addressInfo = explode(":", address);

        let host = (string) addressInfo[0];
        let this->host = strtolower(host);

        if fetch port, addressInfo[1] {
            let port = (int) port;
            if (is_integer(port) && (port >=1 && port <= 65535)) {
                let this->port = (int) port;
            }
        }
    }

    protected function filterPath(string path) -> string {
        return preg_replace_callback(
            "/(?:[^a-zA-Z0-9_\-\.~:@&=\+\$,\/;%]+|%(?![A-Fa-f0-9]{2}))/",
            function (match) {
                return rawurlencode(match[0]);
            },
            path
        );
    }

    protected function filterQuery(string query) -> string {
        return preg_replace_callback(
             "/(?:[^a-zA-Z0-9_\-\.~!\$&\'\(\)\*\+,;=%:@\/\?]+|%(?![A-Fa-f0-9]{2}))/",
            function (match) {
                return rawurlencode(match[0]);
            },
            query
        );
    }

    public function getUserInfo() -> string {
        return (string) this->auth;
    }

    public function getUsername() -> string! {
        return this->auth->getUsername();
    }

    public function getPassword() -> string! {
        return this->auth->getPassword();
    }

    public function getAuthority() -> string {
        var host, port;
	    var str = "";

        let host = this->host;
        let port = this->port;

        if !empty this->getUserInfo() {
            let str .= this->getUserInfo() . "@";
        }

        let str .= host;

        if !empty port {
            let str .= ":". port;
        }

        return str;
    }

    public function __toString() -> string {
        var str;

        let str = sprintf("%s://%s/%s",
                this->scheme,
                this->getAuthority(),
                ltrim(this->path, "/")
        );

        if !empty this->query {
            let str = sprintf("%s?%s",
                    str,
                    this->query
            );
        }

        if !empty this->fragment {
            let str = sprintf("%s#%s",
                    str,
                    this->fragment
            );
        }

        return str;
    }

    public function getBaseUrl() -> string {
        return sprintf("%s://%s", 
            this->scheme,
            this->getAuthority()
        );
    }
}
