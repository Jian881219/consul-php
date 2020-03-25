
extern zend_class_entry *consulate_api_agent_checkregistration_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_CheckRegistration);

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getId);
PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setId);
PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getName);
PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setName);
PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getNotes);
PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setNotes);
PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getServiceId);
PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setServiceId);
PHP_METHOD(Consulate_Api_Agent_CheckRegistration, jsonSerialize);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_checkregistration_setid, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_checkregistration_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_checkregistration_setnotes, 0, 0, 1)
	ZEND_ARG_INFO(0, notes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_checkregistration_setserviceid, 0, 0, 1)
	ZEND_ARG_INFO(0, serviceId)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_checkregistration_method_entry) {
	PHP_ME(Consulate_Api_Agent_CheckRegistration, getId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_CheckRegistration, setId, arginfo_consulate_api_agent_checkregistration_setid, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_CheckRegistration, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_CheckRegistration, setName, arginfo_consulate_api_agent_checkregistration_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_CheckRegistration, getNotes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_CheckRegistration, setNotes, arginfo_consulate_api_agent_checkregistration_setnotes, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_CheckRegistration, getServiceId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_CheckRegistration, setServiceId, arginfo_consulate_api_agent_checkregistration_setserviceid, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_CheckRegistration, jsonSerialize, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
