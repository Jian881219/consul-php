namespace Consulate\Api\Agent;

class Member extends \Consulate\Model {
    protected name        = "" {
        get, set
    };

    protected addr        = "" {
        get, set
    };

    protected port        = 0 {
        get, set
    };

    protected tags        = [] {
        get, set
    };

    protected status      = 0 {
        get, set
    };

    protected protocolMin = 0 {
        get, set
    };

    protected protocolMax = 0 {
        get, set
    };

    protected protocolCur = 0 {
        get, set 
    };

    protected delegateMin = 0 {
        get, set
    };

    protected delegateMax = 0 {
        get, set
    };

    protected delegateCur = 0 {
        get, set
    };
}
