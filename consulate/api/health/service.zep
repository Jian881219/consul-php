namespace Consulate\Api\Health;

class Service extends \Consulate\Model {
    protected node = null {
        get
    };

    protected service = null {
        get
    };

    protected checks = null {
        get
    };

    public function __construct(array data = []) {
        parent::__construct(data);

        var idx, item;

        if (this->node != null) {
            let this->node = new \Consulate\Api\Catalog\Node(this->node);
        }

        if (this->service != null) {
            let this->service = new \Consulate\Api\Agent\Service(this->service);
        }

        let this->checks = array_filter(this->checks);
        if (count(this->checks) > 0) {
            for idx, item in this->checks {
                let this->checks[idx] = new \Consulate\Api\Health\Check(item);
            }
        }
    }
}
