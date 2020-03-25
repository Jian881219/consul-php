namespace Consulate\Api;

use Consulate\Api\Agent\MetricsInfo;

class Agent extends Endpoint {
    private _nodeName = "";

    
    // query the agent we are speaking to for information about self
    // @link https://www.consul.io/api/agent.html#read-configuration
    // @since 0.3.0
    public function self() -> array {
        var r, response, data;

        let r = this->newRequest("GET", "v1/agent/self");

        let response = this->requireOK(this->doRequest(r));

        let data = this->decodeBody(response[1]);

        return data;
    }

    // query the agent we are speaking to for its current internal metric data
    //
    // @link https://www.consul.io/api/agent.html#view-metrics
    // @since 0.9.1
    public function metrics() -> <\Consulate\Api\Agent\MetricsInfo> {
        var r, response, data;

        let r = this->newRequest("GET", "v1/agent/metrics");

        let response = this->requireOK(this->doRequest(r));

        let data = this->decodeBody(response[1]);

        return new MetricsInfo(data);
    }

     
    // trigger a configuration reload for the agent we are connected to.
    // 
    // @link https://www.consul.io/api/agent.html#reload-agent
    // @since 0.7.2
    public function reload() -> void {
        var r;

        let r = this->newRequest("PUT", "v1/agent/reload");

        this->requireOK(this->doRequest(r));
    }

    // get the node name of the agent
    public function nodeName() -> string {
        if this->_nodeName != "" {
            return this->_nodeName;
        }

        var info, name;

        let info = this->self();

        let name = (string) info["Config"]["NodeName"];
        
        let this->_nodeName = name;

        return name;
    }

    // Members returns the known gossip members. The WAN flag can be used to query a server for WAN members.
    // @param wan bool - Specifies to list WAN members instead of the LAN members (which is the default). This is only eligible for agents running in server mode. This is specified as part of the URL as a query parameter.
    // @params segment string - (Enterprise-only) Specifies the segment to list members for. If left blank, this will query for the default segment when connecting to a server and the agent's own segment when connecting to a client (clients can only be part of one network segment). When querying a server, setting this to the special string _all will show members in all segments.

    // @link https://www.consul.io/api/agent.html#list-members
    public function members(bool wan = false, string! segment = null) -> array {
        var r, response, data, id, item, out = [];

        let r = this->newRequest("GET", "v1/agent/members");

        if wan {
            r->params->set("wan", "1");
        }

        if segment != null {
            r->params->set("segment", segment);
        }

        let response = this->requireOK(this->doRequest(r));

        let data = this->decodeBody(response[1]);

        for id, item in data {
            let out[id] = new Agent\Member(item);
        }

        return out;
    }

    public function maintenance(bool enable = false, string! reason = null) -> bool {
        var r;

        let r = this->newRequest("PUT", "v1/agent/service/maintenance");
        r->params->set("enable", enable);

        if reason != null {
            r->params->set("reason", reason);
        }

        this->requireOK(this->doRequest(r));

        // always return true if statusCode is 200
        return true;
    }

    //https://www.consul.io/api/agent.html#stream-logs
    //TODO
    public function monitor(string loglevel = "", <\Consulate\QueryOptions> q) {
        var r, response;
        let r = this->newRequest("PUT", "v1/agent/monitor");
        r->setQueryOptions(q);

        if !empty loglevel {
            r->params->set("loglevel", loglevel);
        }

        let response = this->requireOK(this->doRequest(r));

        return response;
    }

    // Join is used to instruct the agent to attempt a join to another cluster member
    // @link https://www.consul.io/api/agent.html#join-agent
    public function join(string address, bool wan = false) -> bool {
        var r;

        let r = this->newRequest("PUT", "v1/agent/join/" . address);
        if wan {
            r->params->set("wan", "1");
        }

        this->requireOK(this->doRequest(r));

        return true;
    }

    // Leave is used to have the agent gracefully leave the cluster and shutdown
    // @link https://www.consul.io/api/agent.html#graceful-leave-and-shutdown
    public function leave() -> bool {
        var r;

        let r = this->newRequest("PUT", "v1/agent/leave");

        this->requireOK(this->doRequest(r));

        return true;
    }

    // ForceLeave is used to have the agent eject a failed node
    // @link https://www.consul.io/api/agent.html#force-leave-and-shutdown
    public function forceLeave(string node) -> bool {
        var r;

        let r = this->newRequest("PUT", "v1/agent/force-leave/" . node);

        this->requireOK(this->doRequest(r));

        return true;
    }

    ///{{{ acl token
    public function updateACLToken(string token, <\Consulate\WriteOptions> q) -> <\Consulate\WriteMeta> {
        return this->updateToken("acl_token", token, q);
    }

    public function updateACLAgentToken(string token, <\Consulate\WriteOptions> q) -> <\Consulate\WriteMeta> {
        return this->updateToken("acl_agent_token", token, q);
    }

    public function updateACLAgentMasterToken(string token, <\Consulate\WriteOptions> q) -> <\Consulate\WriteMeta> {
        return this->updateToken("acl_agent_master_token", token, q);
    }

    public function updateACLReplicationToken(string token, <\Consulate\WriteOptions> q) -> <\Consulate\WriteMeta> {
        return this->updateToken("acl_replication_token", token, q);
    }

    private function updateToken(string target, string token, <\Consulate\WriteOptions> q) -> <\Consulate\WriteMeta> {
        var r, response;

        let r = this->newRequest("PUT", sprintf("v1/agent/token/%s", target, [
            "Token" : token
        ]));
        r->setWriteOptions(q);

        let response = this->requireOK(this->doRequest(r));

        return new \Consulate\WriteMeta([
            "requestTime" : response[0]
        ]);
    }
    ///}}}

    ///{{{ services
    // the locally registered services
    public function services() -> array {
        var r, response, data, id, item, out = [];

        let r = this->newRequest("GET", "v1/agent/services");

        let response = this->requireOK(this->doRequest(r));
        
        let data = this->decodeBody(response[1]);

        for id, item in data {
            let out[id] = new Agent\Service(item);
        }

        return out;
    }

    // ServiceRegister is used to register a new service with the local agent
    // @link https://www.consul.io/api/agent/service.html#register-service
    public function serviceRegister(<\Consulate\Api\Agent\ServiceRegistration> service) -> bool {
        var r;

        let r = this->newRequest("PUT", "v1/agent/service/register", service);

        this->requireOK(this->doRequest(r));

        // always return true if statusCode is 200
        return true;
    }

    // ServiceDeregister is used to deregister a service with
    // the local agent
    // @link https://www.consul.io/api/agent/service.html#deregister-service
    public function serviceDeregister(string serviceId) -> bool {
        var r;

        let r = this->newRequest("PUT", "v1/agent/service/deregister/" . serviceId);

        this->requireOK(this->doRequest(r));

        // always return true if statusCode is 200
        return true;
    }
    ///}}}

    ///{{{ checks
    // the locally registered checks
    public function checks() -> array {
        var r, response, data, id, item, out = [];

        let r = this->newRequest("GET", "v1/agent/checks");

        let response = this->requireOK(this->doRequest(r));

        let data = this->decodeBody(response[1]);

        for id, item in data {
            let out[id] = new Agent\Check(item);
        }

        return out;
    }

    // PassTTL is used to set a TTL check to the passing state.
    //
    // @deprecated
    // DEPRECATION NOTICE: This interface is deprecated in favor of UpdateTTL().
    // The client interface will be removed in 0.8 or changed to use
    // UpdateTTL()'s endpoint and the server endpoints will be removed in 0.9.
    // @link https://www.consul.io/api/agent/check.html#ttl-check-pass
    deprecated public function passTTL(string checkId, string note = "") -> bool {
        return this->_updateTTL(checkId, note, "pass");
    }

    // WarnTTL is used to set a TTL check to the warning state.
    //
    // @deprecated
    // DEPRECATION NOTICE: This interface is deprecated in favor of UpdateTTL().
    // The client interface will be removed in 0.8 or changed to use
    // UpdateTTL()'s endpoint and the server endpoints will be removed in 0.9.
    deprecated public function warnTTL(string checkId, string note = "") -> bool {
        return this->_updateTTL(checkId, note, "warn");
    }

    // FailTTL is used to set a TTL check to the failing state.
    //
    // @deprecated
    // DEPRECATION NOTICE: This interface is deprecated in favor of UpdateTTL().
    // The client interface will be removed in 0.8 or changed to use
    // UpdateTTL()'s endpoint and the server endpoints will be removed in 0.9.
    deprecated public function failTTL(string checkId, string note = "") -> bool {
        return this->_updateTTL(checkId, note, "fail");
    }

    // updateTTL is used to update the TTL of a check. This is the internal
    // method that uses the old API that's present in Consul versions prior to
    // 0.6.4. Since Consul didn't have an analogous "update" API before it seemed
    // ok to break this (former) UpdateTTL in favor of the new UpdateTTL below,
    // but keep the old Pass/Warn/Fail methods using the old API under the hood.
    //
    // @deprecated
    // DEPRECATION NOTICE: This interface is deprecated in favor of UpdateTTL().
    // The client interface will be removed in 0.8 and the server endpoints will
    // be removed in 0.9.
    private function _updateTTL(string checkId, string note = "", string status) -> bool {
        if !in_array(status, ["pass", "warn", "fail"]) {
            throw new \Consulate\Api\Agent\Exception(sprintf("Invalid status: %s", status));
        }

        var uri, r;
        let uri = sprintf("v1/agent/check/%s/%s", status, checkId);

        let r = this->newRequest("PUT", uri);

        r->params->set("note", note);

        this->requireOK(this->doRequest(r));

        // always return true if statusCode is 200
        return true;
    }

    // UpdateTTL is used to update the TTL of a check. This uses the newer API
    // that was introduced in Consul 0.6.4 and later. We translate the old status
    // strings for compatibility (though a newer version of Consul will still be
    // required to use this API).
    public function updateTTL(string checkId, string output = "", string status = "") -> bool {
        switch status {
            case "pass":
            case Health::HEALTH_PASSING:
                let status = Health::HEALTH_PASSING;
                break;
            case "warn":
            case Health::HEALTH_WARNING:
                let status = Health::HEALTH_WARNING;
                break;
            case "fail":
            case Health::HEALTH_CRITICAL:
                let status = Health::HEALTH_CRITICAL;
                break;
            default:
                throw new \Consulate\Api\Agent\Exception(sprintf("Invalid status: %s", status));
        }

        var uri, r;
        let uri = sprintf("v1/agent/check/update/%s", checkId);
        
        let r = this->newRequest("PUT", uri, [
            "Status" : status,
            "Output" : output
        ]);

        this->requireOK(this->doRequest(r));

        return true;
    }

    public function checkRegister(<\Consulate\Api\Agent\CheckRegistration> check) -> bool {
        var r;

        let r = this->newRequest("PUT", "v1/agent/check/register", check);

        this->requireOK(this->doRequest(r));

        // always return true if statusCode is 200
        return true;
    }

    public function checkDeregister(string checkId) -> bool {
        var r;

        let r = this->newRequest("PUT", "v1/agent/check/deregister/" . checkId);

        this->requireOK(this->doRequest(r));

        // always return true if statusCode is 200
        return true;
    }
    ///}}}
}
