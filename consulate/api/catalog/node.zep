namespace Consulate\Api\Catalog;

class Node extends \Consulate\Model {
    protected iD = "" {
        get, set
    };

    protected node = "" {
        get, set
    };

    protected address = "" {
        get, set
    };

    protected datacenter = "" {
        get, set
    };

    protected taggedAddresses = [] {
        get, set
    };

    protected meta = [] {
        get, set
    };

    protected createIndex {
        get, set
    };

    protected modifyIndex {
        get, set
    };
}
