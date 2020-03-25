namespace Consulate\Http;

class Auth implements \JsonSerializable {
    //string
    protected username = "" { get, set };

    //string
    protected password = "" { get, set };

    public function __construct(string username = "", string password = ""){
        let this->username = username;
        let this->password = password;
    }

    public function compileAuthString() -> string {
        return (string) this;
    }

    public function __toString() -> string {
        return trim(sprintf("%s:%s", this->username, this->password), ":");
    }

    public function jsonSerialize() -> array {
        return [
            "username" : this->username, 
            "password" : this->password
        ];
    }
}
