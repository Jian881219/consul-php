namespace Consulate\Api\Agent;

class ServiceRegistration extends \Consulate\Model {
    protected id = "" {
        get, set
    };

    protected name = "" {
        get, set
    };

    protected tags = [] {
        get, set
    };

    protected port = 0 {
        get, set
    };

    protected address = "" {
        get, set
    };

    protected enableTagOverride = false {
        get, set
    };

    protected check {
        get
    };

    protected checks = [] {
        get
    };

    public function __construct(array data = []) {
        var idx, item;
        parent::__construct(data);

        if (this->check != null && !(this->check instanceof ServiceCheck)) {
            let this->check = new ServiceCheck(this->check);
        }

        let this->checks = array_filter(this->checks);
        if (count(this->checks) > 0) {
            for idx, item in this->checks {
                if !(item instanceof ServiceCheck) {
                    let this->checks[idx] = new ServiceCheck(item);
                }
            }
        }
    }

    public function setCheck(<\Consulate\Api\Agent\ServiceCheck> check) -> <\Consulate\Api\Agent\ServiceRegistration> {
        let this->check = check;
        return this;
    }

    public function setChecks(array checks) -> <\Consulate\Api\Agent\ServiceRegistration> {
        var check;
        if checks->count() > 0 {
            for check in checks {
                if check instanceof ServiceCheck {
                    let this->checks[] = check;
                }
            }
        }

        return this;
    }

    public function jsonSerialize() {
        var out = [];
        if !empty this->id {
            let out["ID"] = this->id;
        }
        if !empty this->name {
            let out["Name"] = this->name;
        }
        if !empty this->tags {
            let out["Tags"] = this->tags;
        }
        if this->port > 0 {
            let out["Port"] = this->port;
        }
        if !empty this->address {
            let out["Address"] = this->address;
        }
        if this->enableTagOverride == true {
            let out["EnableTagOverride"] = this->enableTagOverride;
        }
        if !empty this->check {
            let out["Check"] = this->check;
        }
        if !empty this->checks {
            let out["Checks"] = this->checks;
        }
        return out;
    }
}
