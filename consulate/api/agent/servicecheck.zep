namespace Consulate\Api\Agent;

class ServiceCheck extends \Consulate\Model {
    protected args = [] {
        get, set
    };

    protected script = "" {
        get, set
    };

    protected dockerContainerId = "" {
        get, set
    };

    protected shell = "" {
        get, set
    };

    protected interval = "" {
        get, set
    };

    protected timeout = "" {
        get, set
    };

    protected ttl = "" {
        get, set
    };

    protected http = "" {
        get, set
    };

    protected header = [] {
        get, set
    };

    protected method = "" {
        get, set
    };

    protected tcp = "" {
        get, set
    };

    protected status = "" {
        get, set
    };

    protected notes = "" {
        get, set
    };

    protected TLSSkipVerify = false {
        get, set
    };

    // In Consul 0.7 and later, checks that are associated with a service
	// may also contain this optional DeregisterCriticalServiceAfter field,
	// which is a timeout in the same Go time format as Interval and TTL. If
	// a check is in the critical state for more than this configured value,
	// then its associated service (and all of its associated checks) will
	// automatically be deregistered.
    protected deregisterCriticalServiceAfter = "" {
        get, set
    };

    public function jsonSerialize() {
        var out = [];
        if !empty this->args {
            let out["Args"] = this->args;
        }
        if !empty this->script {
            let out["Script"] = this->script;
        }
        if !empty this->dockerContainerId {
            let out["DockerContainerID"] = this->dockerContainerId;
        }
        if !empty this->shell {
            let out["Shell"] = this->shell;
        }
        if !empty this->interval {
            let out["Interval"] = this->interval;
        }
        if !empty this->timeout {
            let out["Timeout"] = this->timeout;
        }
        if !empty this->ttl {
            let out["TTL"] = this->ttl;
        }
        if !empty this->http {
            let out["HTTP"] = this->http;
        }
        if !empty this->header {
            let out["Header"] = this->header;
        }
        if !empty this->method {
            let out["Method"] = this->method;
        }
        if !empty this->tcp {
            let out["TCP"] = this->tcp;
        }
        if !empty this->status {
            let out["Status"] = this->status;
        }
        if !empty this->notes {
            let out["Notes"] = this->notes;
        }
        if this->TLSSkipVerify == true {
            let out["TLSSkipVerify"] = this->TLSSkipVerify;
        }
        if !empty this->deregisterCriticalServiceAfter {
            let out["DeregisterCriticalServiceAfter"] = this->deregisterCriticalServiceAfter;
        }

        return out;
    }
}
