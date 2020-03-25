namespace Consulate\Http;

class Response {
    private rawHeaders;

    protected headers = [] {
        get
    };

    protected body {
        get
    };

    protected metadata {
        get
    };

    protected statusCode {
        get
    };

    public function __construct(body, string headers, metadata = null) {
        let this->body = body;
        let this->rawHeaders = headers;
        let this->metadata = metadata;

        if !empty(metadata) && !empty(metadata["http_code"]) {
            let this->statusCode = (int) metadata["http_code"];
        } else {
            this->parseCode(headers);
        }

        this->parseHeaders(headers);
    }

    private function parseCode(string headers) {
        var pos, info;
        let pos = strpos(headers, "\r\n");

        if (pos === false) {
            let pos = strlen(headers);
        }

        let info = explode(" ", substr(headers, 0, pos));

        if (count(info) < 2 || !is_numeric(info[1])) {
            throw new Exception("Unable to parse response code from HTTP response due to malformed response");
        }
        let this->statusCode = (int)info[1];
    }

    private function parseHeaders(string headers) {
        var rawHeaders, header, headerInfo,
            key, value;

        let rawHeaders = preg_split("/(\r|\n)+/", headers, -1, PREG_SPLIT_NO_EMPTY);
        let this->headers = [];

        for header in rawHeaders {
            let headerInfo = explode(":", header, 2);
            if (count(headerInfo) == 2) {
                let key = trim(headerInfo[0]);
                let value = trim(headerInfo[1]);

                if (array_key_exists(key, this->headers)) {
                    let this->headers[key] .= "," . value;
                } else {
                    let this->headers[key] = value;
                }
            }
        }
    }

    public function __toString() -> string {
        return (string) this->body;
    }
}
