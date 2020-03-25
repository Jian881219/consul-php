namespace Consulate\Api\Agent;

use Consulate\Model;

class MetricsInfo extends Model {
    protected timestamp = "" {
        get, set
    };

    protected gauges = [] {
        get, set
    };

    protected points = [] {
        get, set
    };

    protected counters = [] {
        get, set
    };

    protected samples = [] {
        get, set
    };

    public function __construct(array data) {
        var idx, value;

        parent::__construct(data);

        let this->gauges = array_filter(this->gauges);
        if count(this->gauges) > 0 {
            for idx, value in this->gauges {
                if !(value instanceof GaugeValue) {
                    let this->gauges[idx] = new GaugeValue(value);
                }
            }
        }

        let this->points = array_filter(this->points);
        if count(this->points) > 0 {
            for idx, value in this->points {
                if !(value instanceof PointValue) {
                    let this->points[idx] = new PointValue(value);
                }
            }
        }

        let this->counters = array_filter(this->counters);
        if count(this->counters) > 0 {
            for idx, value in this->counters {
                if !(value instanceof SampledValue) {
                    let this->counters[idx] = new SampledValue(value);
                }
            }
        }

        let this->samples = array_filter(this->samples);
        if count(this->samples) > 0 {
            for idx, value in this->samples {
                if !(value instanceof SampledValue) {
                    let this->samples[idx] = new SampledValue(value);
                }
            }
        }
    }
}
