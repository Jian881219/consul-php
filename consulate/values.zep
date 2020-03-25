namespace Consulate;

class Values implements \JsonSerializable, \Countable {
    protected values = [];

    public function get(string key) -> string {
        var values;
        if fetch values, this->values[key] {
            return values[0];
        }

        return "";
    }

    public function getAll(string key) -> array {
        var values;
        if fetch values, this->values[key] {
            return values;
        }

        return [];
    }

    public function set(string key, value) -> void {
        if (settype(value, "string")) {
            let this->values[key] = [value];
        } else {
            throw new Exception(sprintf("$value must be castable to string, saw \"%s\".", gettype(value)));
        }
    }

    public function add(string key, value) -> void {
        if (settype(value, "string")) {
            if isset this->values[key] {
                let this->values[key][] = value;
            } else {
                let this->values[key] = [value];
            }
        } else {
            throw new Exception(sprintf("$value must be castable to string, saw \"%s\".", gettype(value)));
        }
    }

    public function delete(string key) -> void {
        unset(this->values[key]);
    }

    public function count() -> int {
        return count(this->values);
    }

    public function jsonSerialize() -> array {
        return this->values;
    }

    public function toArray() -> array {
        return this->values;
    }

    public function __toString() -> string {
        var k, v, vs;

        string str;
        let str = ""; 

        for k, vs in this->values {
            for v in vs {
                if ("" !== str) {
                    let str .= "&";
                }
                if ("" === v) {
                    let str .= k;
                } else {
                    let str .= sprintf("%s=%s", k, this->encode($v));
                }
            }
        }
        return str;
    }

    public function encode(v) -> string {
        return v;
    }
}
