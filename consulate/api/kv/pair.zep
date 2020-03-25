namespace Consulate\Api\Kv;

class Pair extends \Consulate\Model {
    protected key = "" {
        get, set
    };

    protected createIndex = 0 {
        get, set
    };

    protected modifyIndex = 0 {
        get, set
    };

    protected lockIndex = 0 {
        get, set
    };

    protected flags = 0 {
        get, set
    };

    // Value is the value for the key. This can be any value, but it will be
	// base64 encoded upon transport.
    protected value = null {
        get, set
    };

    protected session = "" {
        get, set
    };

    public function __construct(array data, bool decodeValue = false) {
        parent::__construct(data);

        if decodeValue && isset this->value {
            let this->value = base64_decode(this->value);
        }
    }
}
