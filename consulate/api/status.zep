namespace Consulate\Api;

class Status extends Endpoint {
    public function leader() {
        var r, response;

        let r = this->newRequest("GET", "v1/status/leader");

        let response = this->requireOK(this->doRequest(r));

        return this->decodeBody(response[1]);
    }

    public function peers() {
        var r, response;

        let r = this->newRequest("GET", "v1/status/peers");

        let response = this->requireOK(this->doRequest(r));

        return this->decodeBody(response[1]);
    }
}
