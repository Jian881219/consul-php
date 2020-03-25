namespace Consulate;

class QueryMeta extends Model {
    protected lastIndex = 0 {
        get, set
    };

    protected lastContact = 0 {
        get, set
    };

    protected knownLeader = false {
        get, set
    };

    protected requestTime = 0 {
        get, set
    };

    protected addressTranslationEnabled = false {
        get, set
    };

    protected requestUri = "" {
        get, set
    };

    public function __construct(array data = []) {
        var k, v;
        for k, v in data {
            let this->{k} = v;
        }
    }
}
