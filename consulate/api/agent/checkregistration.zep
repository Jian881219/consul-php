namespace Consulate\Api\Agent;

class CheckRegistration extends ServiceCheck {
    protected id = "" {
        get, set
    };

    protected name = "" {
        get, set
    };

    protected notes = "" {
        get, set
    };

    protected serviceId = "" {
        get, set
    };

    public function jsonSerialize() {
        var out = [];
        
        if !empty this->id {
            let out["ID"] = this->id;
        }

        if !empty this->name {
            let out["Name"] = this->name;
        }

        if !empty this->notes {
            let out["Notes"] = this->notes;
        }

        if !empty this->serviceId {
            let out["ServiceID"] = this->serviceId;
        }

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
