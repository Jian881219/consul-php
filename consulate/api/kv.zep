namespace Consulate\Api;

class Kv extends Endpoint {

    // Get is used to lookup a single key. The returned pointer
    // to the KVPair will be nil if the key does not exist.
    public function get(string key, <\Consulate\QueryOptions> q = null) {
        var r, response, qm, data, idx, entry;
        array entries = [];

        let r = this->getItem(key, [], q);
        
        let response = r[0], qm = r[1];

        if response == null {
            return [null, qm];
        }

        let data = this->decodeBody(response);

        for idx, entry in data {
            let entries[idx] = new Kv\Pair(entry, true);
        }

        if count(entries) > 0 {
            return [entries[0], qm];
        }

        return [null, qm];
    }

    // List is used to lookup all keys under a prefix
    public function list(string prefix, <\Consulate\QueryOptions> q = null) {
        var r, response, qm, data, idx, entry;
        array entries = [];

        let r = this->getItem(prefix, ["recurse":""], q);

        let response = r[0], qm = r[1];

        if response == null {
            return [null, qm];
        }

        let data = this->decodeBody(response);

        for idx, entry in data {
            let entries[idx] = new Kv\Pair(entry, true);
        }

        return [entries, qm];
    }

    // Keys is used to list all the keys under a prefix. Optionally,
    // a separator can be used to limit the responses.
    public function keys(string prefix = "", string separator = "", <\Consulate\QueryOptions> q = null) {
        var params, r, response, qm, data, idx, entry;
        array entries = [];
        let params = [
            "keys" : ""
        ];

        if separator != "" {
            let params["separator"] = "";
        }

        let r = this->getItem(prefix, params, q);

        let response = r[0], qm = r[1];

        if response == null {
            return [null, qm];
        }

        let data = this->decodeBody(response);

        for idx, entry in data {
            let entries[idx] = entry;
        }

        return [entries, qm];
    }

    private function getItem(string key, array params = [], <\Consulate\QueryOptions> q = null) {
        var r, k, v, qm,
            data, response, rtt, statusCode;

        let r = this->newRequest("GET", "v1/kv/" . key);

        r->setQueryOptions(q);

        for k, v in params {
            r->params->set(k, v);
        }

        let data = this->doRequest(r);
        
        let rtt = data[0];
        let response = data[1];

        let qm = new \Consulate\QueryMeta([]);
        let qm = this->parseQueryMeta(response, qm);
        qm->setRequestTime(rtt);

        let statusCode = response->getStatusCode();
        if statusCode == 404 {
            return [null, qm];
        } elseif statusCode != 200 {
            return [null, null];
        }

        return [response, qm];
    }

    // Put is used to write a new value. Only the
    // Key, Flags and Value is respected.
    //
    // @link https://www.consul.io/api/kv.html#create-update-key
    public function put(<\Consulate\Api\Kv\Pair> pair, <\Consulate\WriteOptions> q) {
        var params = [], data;
        if pair->getFlags() != 0 {
            let params["flags"] = (string) pair->getFlags();
        }

        let data = this->updateItem(pair->getKey(), params, pair->getValue(), q);

        return [data[1]];
    }

    // CAS is used for a Check-And-Set operation. The Key,
    // ModifyIndex, Flags and Value are respected. Returns true
    // on success or false on failures.
    public function cas(<\Consulate\Api\Kv\Pair> pair, <\Consulate\WriteOptions> q) {
        var params = [];
        if pair->getFlags() != 0 {
            let params["flags"] = (string) pair->getFlags();
        }

        let params["cas"] = (string) pair->getModifyIndex();

        return this->updateItem(pair->getKey(), params, pair->getValue(), q);
    }

    public function acquire(<\Consulate\Api\Kv\Pair> pair, <\Consulate\WriteOptions> q) {
        var params = [];
        if pair->getFlags() != 0 {
            let params["flags"] = (string) pair->getFlags();
        }

        let params["acquire"] = pair->getSession();

        return this->updateItem(pair->getKey(), params, pair->getValue(), q);
    }

    public function release(<\Consulate\Api\Kv\Pair> pair, <\Consulate\WriteOptions> q) {
        var params = [];
        if pair->getFlags() != 0 {
            let params["flags"] = (string) pair->getFlags();
        }
        let params["release"] = pair->getSession();

        return this->updateItem(pair->getKey(), params, pair->getValue(), q);
    }

    // create / update a item by key
    private function updateItem(string key, array params = [], value = null, <\Consulate\WriteOptions> q) {
        if key->length() > 0 && substr(key, 0, 1) == "/" {
            throw new Kv\Exception(sprintf("Invalid key. Key must not begin with a '/': %s", key));
        }

        var r, data, k, v, response, rtt, qm;

        let r = this->newRequest("PUT", "v1/kv/" . key, value);
        r->setWriteOptions(q);

        for k, v in params {
            r->params->set(k, v);
        }

        let data = this->requireOK(this->doRequest(r));

        let rtt = data[0], response = data[1];

        let qm = new \Consulate\WriteMeta([
            "requestTime" : rtt
        ]);

        return [response->getBody() == "true", qm];
    }

    public function delete(string key, <\Consulate\WriteOptions> q) {
        var data;

        let data = this->deleteItem(key, [], q);

        return [data[1]];
    }

    public function deleteCAS(<\Consulate\Api\Kv\Pair> pair, <\Consulate\WriteOptions> q) {
        array params = [];
        let params["cas"] = (string)pair->getModifyIndex();

        return this->deleteItem(pair->getKey(), [], q);
    }

    public function deleteTree(string prefix, <\Consulate\WriteMeta> q) {
        var data;

        let data = this->deleteItem(prefix, ["recurse" : ""], q);
    }

    private function deleteItem(string key, array params, <\Consulate\WriteMeta> q) {
        var r, k, v, data, rtt, response, qm;

        let r = this->newRequest("DELETE", "v1/kv/" . trim(key, "/"), params);
        r->setWriteOptions(q);

        for k, v in params {
            r->params->set(k, v);
        }

        let data = this->requireOK(this->doRequest(r));
        let rtt = data[0], response = data[1];

        let qm = new \Consulate\WriteMeta([
            "requestTime" : rtt
        ]);

        return [response->getBody() == "true", qm];
    }
}
