namespace Consulate\Api\Health;

class Check extends \Consulate\Model {
    protected node = "" {
        get, set
    };

    protected checkID = "" {
        get, set
    };

    protected name = "" {
        get, set
    };

    protected status = "" {
        get, set
    };

    protected notes = "" {
        get, set
    };

    protected output = "" {
        get, set
    };

    protected serviceID = "" {
        get, set
    };

    protected serviceName = "" {
        get, set
    };

    protected serviceTags = [] {
        get, set
    };

    protected createIndex = 0 {
        get, set
    };

    protected modifyIndex = 0 {
        get, set
    };
}
