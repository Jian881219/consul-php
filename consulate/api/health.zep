namespace Consulate\Api;

// They are provided separately from the /catalog endpoints since users may prefer not to use the optional health checking mechanisms. Additionally, some of the query results from the health endpoints are filtered while the catalog endpoints provide the raw entries.
// @link https://www.consul.io/api/health.html
class Health extends Endpoint {
    const HEALTH_ANY      = "any";
    const HEALTH_PASSING  = "passing";
    const HEALTH_WARNING  = "warning";
    const HEALTH_CRITICAL = "critical";
    const HEALTH_MAINT    = "maintenance";

    // check node
    // @link https://www.consul.io/api/health.html#list-checks-for-node
    // [HealthChecks, qm]
    public function node(string node, <\Consulate\QueryOptions> q = null) {
        var r, response, data, qm, idx, item, output = [];
        
        let r = this->newRequest("GET", "/v1/health/node/" . node);
        r->setQueryOptions(q);

        let data = this->requireOK(this->doRequest(r));

        let qm = new \Consulate\QueryMeta([]);
        let qm = this->parseQueryMeta(data[1], qm);
        qm->setRequestTime(data[0]);

        let response = this->decodeBody(data[1]);

        for idx, item in response {
            let output[idx] = new Health\Check(item);
        }

        return [output, qm];
    }

    // @link https://www.consul.io/api/health.html#list-checks-for-service
    public function checks(string service, <\Consulate\QueryOptions> q = null) {
        var r, response, data, qm, idx, item, output = [];

        let r = this->newRequest("GET", "/v1/health/checks/" . service);
        r->setQueryOptions(q);

        let data = this->requireOK(this->doRequest(r));

        let qm = new \Consulate\QueryMeta([]);
        let qm = this->parseQueryMeta(data[1], qm);
        qm->setRequestTime(data[0]);

        let response = this->decodeBody(data[1]);

        for idx, item in response {
            let output[idx] = new Health\Check(item);
        }

        return [output, qm];
    }

    // @link https://www.consul.io/api/health.html#list-nodes-for-service
    public function service(string service, string tag = "", bool passingOnly = false, <\Consulate\QueryOptions> q = null) {
        var r, response, data, qm, idx, item, output = [];

        let r = this->newRequest("GET", "/v1/health/service/" . service);
        r->setQueryOptions(q);

        if !empty tag {
            r->params->set("tag", tag);
        }

        if passingOnly {
            r->params->set(self::HEALTH_PASSING, "1");
        }

        let data = this->requireOK(this->doRequest(r));

        let qm = new \Consulate\QueryMeta([]);
        let qm = this->parseQueryMeta(data[1], qm);
        qm->setRequestTime(data[0]);

        let response = this->decodeBody(data[1]);

        for idx, item in response {
            let output[idx] = new Health\Service(item);
        }

        return [output, qm];
    }

    // @link https://www.consul.io/api/health.html#list-checks-in-state
    public function state(string state, <\Consulate\QueryOptions> q) {
        var r, response, data, qm, idx, item, output = [];
        var states = [
            self::HEALTH_PASSING,
            self::HEALTH_ANY,
            self::HEALTH_MAINT,
            self::HEALTH_WARNING,
            self::HEALTH_CRITICAL
        ];

        if (!in_array(state, states, true)) {
            throw new \Consulate\Api\Health\Exception(sprintf("Health: Unspported state: %s", state));
        }

        let r = this->newRequest("GET", "/v1/health/state/" . state);
        r->setQueryOptions(q);
        
        let data = this->requireOK(this->doRequest(r));

        let qm = new \Consulate\QueryMeta([]);
        let qm = this->parseQueryMeta(data[1], qm);
        qm->setRequestTime(data[0]);

        let response = this->decodeBody(data[1]);

        for idx, item in response {
            let output[idx] = new Health\Check(item);
        }

        return [output, qm];
    }
}
