namespace Consulate\Api\Agent;

use Consulate\Model;

class SampledValue extends Model {
    protected name   = "" {
        get, set
    };

	protected count  = 0 {
        get, set
    };

	protected sum    = 0.0 {
        get, set
    };

	protected min    = 0.0 {
        get, set
    };

	protected max    = 0.0 {
        get, set
    };

	protected mean   = 0.0 {
        get, set
    };

	protected stddev = 0.0 {
        get, set
    };

	protected labels = [] {
        get, set
    };
}
