
extern zend_class_entry *consulate_api_agent_serviceregistration_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_ServiceRegistration);

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getId);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setId);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getName);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setName);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getTags);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setTags);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getPort);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setPort);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getAddress);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setAddress);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getEnableTagOverride);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setEnableTagOverride);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getCheck);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getChecks);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, __construct);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setCheck);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setChecks);
PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, jsonSerialize);
zend_object *zephir_init_properties_Consulate_Api_Agent_ServiceRegistration(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setid, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_serviceregistration_settags, 0, 0, 1)
	ZEND_ARG_INFO(0, tags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setport, 0, 0, 1)
	ZEND_ARG_INFO(0, port)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setaddress, 0, 0, 1)
	ZEND_ARG_INFO(0, address)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setenabletagoverride, 0, 0, 1)
	ZEND_ARG_INFO(0, enableTagOverride)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_serviceregistration___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setcheck, 0, 1, Consulate\\Api\\Agent\\ServiceRegistration, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setcheck, 0, 1, IS_OBJECT, "Consulate\\Api\\Agent\\ServiceRegistration", 0)
#endif
	ZEND_ARG_OBJ_INFO(0, check, Consulate\\Api\\Agent\\ServiceCheck, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setchecks, 0, 1, Consulate\\Api\\Agent\\ServiceRegistration, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_serviceregistration_setchecks, 0, 1, IS_OBJECT, "Consulate\\Api\\Agent\\ServiceRegistration", 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, checks, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_serviceregistration_method_entry) {
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, getId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, setId, arginfo_consulate_api_agent_serviceregistration_setid, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, setName, arginfo_consulate_api_agent_serviceregistration_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, getTags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, setTags, arginfo_consulate_api_agent_serviceregistration_settags, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, getPort, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, setPort, arginfo_consulate_api_agent_serviceregistration_setport, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, getAddress, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, setAddress, arginfo_consulate_api_agent_serviceregistration_setaddress, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, getEnableTagOverride, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, setEnableTagOverride, arginfo_consulate_api_agent_serviceregistration_setenabletagoverride, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, getCheck, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, getChecks, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, __construct, arginfo_consulate_api_agent_serviceregistration___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, setCheck, arginfo_consulate_api_agent_serviceregistration_setcheck, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, setChecks, arginfo_consulate_api_agent_serviceregistration_setchecks, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceRegistration, jsonSerialize, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
