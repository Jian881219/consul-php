namespace Consulate\Api\Agent;

use Consulate\Model;

class GaugeValue extends Model {
    protected name = "" {
        get, set
    };

    protected value = 0.0 {
        get, set
    };

    protected labels = [] {
        get, set
    };
}
