
extern zend_class_entry *consulate_api_agent_check_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_Check);

PHP_METHOD(Consulate_Api_Agent_Check, getNode);
PHP_METHOD(Consulate_Api_Agent_Check, setNode);
PHP_METHOD(Consulate_Api_Agent_Check, getCheckID);
PHP_METHOD(Consulate_Api_Agent_Check, setCheckID);
PHP_METHOD(Consulate_Api_Agent_Check, getName);
PHP_METHOD(Consulate_Api_Agent_Check, setName);
PHP_METHOD(Consulate_Api_Agent_Check, getStatus);
PHP_METHOD(Consulate_Api_Agent_Check, setStatus);
PHP_METHOD(Consulate_Api_Agent_Check, getNotes);
PHP_METHOD(Consulate_Api_Agent_Check, setNotes);
PHP_METHOD(Consulate_Api_Agent_Check, getOutput);
PHP_METHOD(Consulate_Api_Agent_Check, setOutput);
PHP_METHOD(Consulate_Api_Agent_Check, getServiceID);
PHP_METHOD(Consulate_Api_Agent_Check, setServiceID);
PHP_METHOD(Consulate_Api_Agent_Check, getServiceName);
PHP_METHOD(Consulate_Api_Agent_Check, setServiceName);
PHP_METHOD(Consulate_Api_Agent_Check, getServiceTags);
PHP_METHOD(Consulate_Api_Agent_Check, setServiceTags);
PHP_METHOD(Consulate_Api_Agent_Check, getCreateIndex);
PHP_METHOD(Consulate_Api_Agent_Check, setCreateIndex);
PHP_METHOD(Consulate_Api_Agent_Check, getModifyIndex);
PHP_METHOD(Consulate_Api_Agent_Check, setModifyIndex);
zend_object_value zephir_init_properties_Consulate_Api_Agent_Check(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setnode, 0, 0, 1)
	ZEND_ARG_INFO(0, node)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setcheckid, 0, 0, 1)
	ZEND_ARG_INFO(0, checkID)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setstatus, 0, 0, 1)
	ZEND_ARG_INFO(0, status)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setnotes, 0, 0, 1)
	ZEND_ARG_INFO(0, notes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setoutput, 0, 0, 1)
	ZEND_ARG_INFO(0, output)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setserviceid, 0, 0, 1)
	ZEND_ARG_INFO(0, serviceID)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setservicename, 0, 0, 1)
	ZEND_ARG_INFO(0, serviceName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setservicetags, 0, 0, 1)
	ZEND_ARG_INFO(0, serviceTags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setcreateindex, 0, 0, 1)
	ZEND_ARG_INFO(0, createIndex)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_check_setmodifyindex, 0, 0, 1)
	ZEND_ARG_INFO(0, modifyIndex)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_check_method_entry) {
	PHP_ME(Consulate_Api_Agent_Check, getNode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setNode, arginfo_consulate_api_agent_check_setnode, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getCheckID, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setCheckID, arginfo_consulate_api_agent_check_setcheckid, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setName, arginfo_consulate_api_agent_check_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getStatus, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setStatus, arginfo_consulate_api_agent_check_setstatus, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getNotes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setNotes, arginfo_consulate_api_agent_check_setnotes, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getOutput, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setOutput, arginfo_consulate_api_agent_check_setoutput, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getServiceID, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setServiceID, arginfo_consulate_api_agent_check_setserviceid, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getServiceName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setServiceName, arginfo_consulate_api_agent_check_setservicename, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getServiceTags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setServiceTags, arginfo_consulate_api_agent_check_setservicetags, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getCreateIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setCreateIndex, arginfo_consulate_api_agent_check_setcreateindex, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, getModifyIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_Check, setModifyIndex, arginfo_consulate_api_agent_check_setmodifyindex, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
