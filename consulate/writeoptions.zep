namespace Consulate;

class WriteOptions extends Model {
    // Providing a datacenter overwrites the DC provided
	// by the Config
    protected datacenter = "" {
        get, set
    };

    protected token = "" {
        get, set
    };

    protected relayFactor = 0 {
        get, set
    };
}
