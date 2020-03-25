namespace Consulate\Http;

class Params extends \Consulate\Values {
    public function encode(v) -> string {
        return urlencode(v);
    }
}
