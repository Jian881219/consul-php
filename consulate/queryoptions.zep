namespace Consulate;

class QueryOptions extends Model {
    protected datacenter = "" {
        get, set
    };

    // AllowStale allows any Consul server (non-leader) to service
	// a read. This allows for lower latency and higher throughput
    protected allowStale = false {
        get, set
    };

    protected requireConsistent = false {
        get, set   
    };

    // unsigned long
    // WaitIndex is used to enable a blocking query. Waits
	// until the timeout or the next index is reached
    protected waitIndex = 0 {
        get, set
    };

    // WaitTime is used to bound the duration of a wait.
	// Defaults to that of the Config, but can be overridden.
    protected waitTime = 0 {
        get, set
    };

    // Token is used to provide a per-request ACL token
	// which overrides the agent's default token.
    protected token = "" {
        get, set
    };

    // Near is used to provide a node name that will sort the results
	// in ascending order based on the estimated round trip time from
	// that node. Setting this to "_agent" will use the agent's node
	// for the sort.
    protected near = "" {
        get, set
    };

    // NodeMeta is used to filter results by nodes with the given
	// metadata key/value pairs. Currently, only one key/value pair can
	// be provided for filtering.
    protected nodeMeta = [] {
        get, set
    };

    protected relayFactor = 0 {
        get, set
    };

    protected pretty = false {
        get, set
    };
}
