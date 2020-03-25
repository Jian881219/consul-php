namespace Consulate;

abstract class Model implements \JsonSerializable {
    public function __construct(array data = []) {
        var k, v;
        for k, v in data {
            let k = lcfirst(k);
            let this->{k} = v;
        }
    }

    public function jsonSerialize() {
        return array_filter((array)this);
    }

    public function __toString() {
        return get_class(this);
    }
}
