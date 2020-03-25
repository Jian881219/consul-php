
extern zend_class_entry *consulate_api_agent_member_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_Member);

PHP_METHOD(Consulate_Api_Agent_Member, getName);
PHP_METHOD(Consulate_Api_Agent_Member, setName);
PHP_METHOD(Consulate_Api_Agent_Member, getAddr);
PHP_METHOD(Consulate_Api_Agent_Member, setAddr);
PHP_METHOD(Consulate_Api_Agent_Member, getPort);
PHP_METHOD(Consulate_Api_Agent_Member, setPort);
PHP_METHOD(Consulate_Api_Agent_Member, getTags);
PHP_METHOD(Consulate_Api_Agent_Member, setTags);
PHP_METHOD(Consulate_Api_Agent_Member, getStatus);
PHP_METHOD(Consulate_Api_Agent_Member, setStatus);
PHP_METHOD(Consulate_Api_Agent_Member, getProtocolMin);
PHP_METHOD(Consulate_Api_Agent_Member, setProtocolMin);
PHP_METHOD(Consulate_Api_Agent_Member, getProtocolMax);
PHP_METHOD(Consulate_Api_Agent_Member, setProtocolMax);
PHP_METHOD(Consulate_Api_Agent_Member, getProtocolCur);
PHP_METHOD(Consulate_Api_Agent_Member, setProtocolCur);
PHP_METHOD(Consulate_Api_Agent_Member, getDelegateMin);
PHP_METHOD(Consulate_Api_Agent_Member, setDelegateMin);
PHP_METHOD(Consulate_Api_Agent_Member, getDelegateMax);
PHP_METHOD(Consulate_Api_Agent_Member, setDelegateMax);
PHP_METHOD(Consulate_Api_Agent_Member, getDelegateCur);
PHP_METHOD(Consulate_Api_Agent_Member, setDelegateCur);
zend_object *zephir_init_properties_Consulate_Api_Agent_Member(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setaddr, 0, 0, 1)
	ZEND_ARG_INFO(0, addr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setport, 0, 0, 1)
	ZEND_ARG_INFO(0, port)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_settags, 0, 0, 1)
	ZEND_ARG_INFO(0, tags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setstatus, 0, 0, 1)
	ZEND_ARG_INFO(0, status)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setprotocolmin, 0, 0, 1)
	ZEND_ARG_INFO(0, protocolMin)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setprotocolmax, 0, 0, 1)
	ZEND_ARG_INFO(0, protocolMax)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setprotocolcur, 0, 0, 1)
	ZEND_ARG_INFO(0, protocolCur)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setdelegatemin, 0, 0, 1)
	ZEND_ARG_INFO(0, delegateMin)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setdelegatemax, 0, 0, 1)
	ZEND_ARG_INFO(0, delegateMax)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_member_setdelegatecur, 0, 0, 1)
	ZEND_ARG_INFO(0, delegateCur)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_member_method_entry) {
	PHP_ME(Consulate_Api_Agent_Member, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setName, arginfo_consulate_api_agent_member_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getAddr, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setAddr, arginfo_consulate_api_agent_member_setaddr, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getPort, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setPort, arginfo_consulate_api_agent_member_setport, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getTags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setTags, arginfo_consulate_api_agent_member_settags, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getStatus, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setStatus, arginfo_consulate_api_agent_member_setstatus, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getProtocolMin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setProtocolMin, arginfo_consulate_api_agent_member_setprotocolmin, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getProtocolMax, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setProtocolMax, arginfo_consulate_api_agent_member_setprotocolmax, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getProtocolCur, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setProtocolCur, arginfo_consulate_api_agent_member_setprotocolcur, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getDelegateMin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setDelegateMin, arginfo_consulate_api_agent_member_setdelegatemin, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getDelegateMax, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setDelegateMax, arginfo_consulate_api_agent_member_setdelegatemax, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, getDelegateCur, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Member, setDelegateCur, arginfo_consulate_api_agent_member_setdelegatecur, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
