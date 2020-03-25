namespace Consulate\Api\Agent;

use Consulate\Model;

class Service extends Model {
    protected iD = "" {
        get, set
    };

    protected service = "" {
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

    protected createIndex = 0 {
        get, set
    };

    protected modifyIndex = 0 {
        get, set
    };

}
