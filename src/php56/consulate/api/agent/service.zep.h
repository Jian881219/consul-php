
extern zend_class_entry *consulate_api_agent_service_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_Service);

PHP_METHOD(Consulate_Api_Agent_Service, getID);
PHP_METHOD(Consulate_Api_Agent_Service, setID);
PHP_METHOD(Consulate_Api_Agent_Service, getService);
PHP_METHOD(Consulate_Api_Agent_Service, setService);
PHP_METHOD(Consulate_Api_Agent_Service, getTags);
PHP_METHOD(Consulate_Api_Agent_Service, setTags);
PHP_METHOD(Consulate_Api_Agent_Service, getPort);
PHP_METHOD(Consulate_Api_Agent_Service, setPort);
PHP_METHOD(Consulate_Api_Agent_Service, getAddress);
PHP_METHOD(Consulate_Api_Agent_Service, setAddress);
PHP_METHOD(Consulate_Api_Agent_Service, getEnableTagOverride);
PHP_METHOD(Consulate_Api_Agent_Service, setEnableTagOverride);
PHP_METHOD(Consulate_Api_Agent_Service, getCreateIndex);
PHP_METHOD(Consulate_Api_Agent_Service, setCreateIndex);
PHP_METHOD(Consulate_Api_Agent_Service, getModifyIndex);
PHP_METHOD(Consulate_Api_Agent_Service, setModifyIndex);
zend_object_value zephir_init_properties_Consulate_Api_Agent_Service(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_service_setid, 0, 0, 1)
	ZEND_ARG_INFO(0, iD)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_service_setservice, 0, 0, 1)
	ZEND_ARG_INFO(0, service)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_service_settags, 0, 0, 1)
	ZEND_ARG_INFO(0, tags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_service_setport, 0, 0, 1)
	ZEND_ARG_INFO(0, port)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_service_setaddress, 0, 0, 1)
	ZEND_ARG_INFO(0, address)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_service_setenabletagoverride, 0, 0, 1)
	ZEND_ARG_INFO(0, enableTagOverride)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_service_setcreateindex, 0, 0, 1)
	ZEND_ARG_INFO(0, createIndex)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_service_setmodifyindex, 0, 0, 1)
	ZEND_ARG_INFO(0, modifyIndex)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_service_method_entry) {
	PHP_ME(Consulate_Api_Agent_Service, getID, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, setID, arginfo_consulate_api_agent_service_setid, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, getService, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, setService, arginfo_consulate_api_agent_service_setservice, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, getTags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, setTags, arginfo_consulate_api_agent_service_settags, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, getPort, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, setPort, arginfo_consulate_api_agent_service_setport, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, getAddress, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, setAddress, arginfo_consulate_api_agent_service_setaddress, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, getEnableTagOverride, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, setEnableTagOverride, arginfo_consulate_api_agent_service_setenabletagoverride, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, getCreateIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, setCreateIndex, arginfo_consulate_api_agent_service_setcreateindex, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, getModifyIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Service, setModifyIndex, arginfo_consulate_api_agent_service_setmodifyindex, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
