
extern zend_class_entry *consulate_api_agent_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent);

PHP_METHOD(Consulate_Api_Agent, self);
PHP_METHOD(Consulate_Api_Agent, metrics);
PHP_METHOD(Consulate_Api_Agent, reload);
PHP_METHOD(Consulate_Api_Agent, nodeName);
PHP_METHOD(Consulate_Api_Agent, members);
PHP_METHOD(Consulate_Api_Agent, maintenance);
PHP_METHOD(Consulate_Api_Agent, monitor);
PHP_METHOD(Consulate_Api_Agent, join);
PHP_METHOD(Consulate_Api_Agent, leave);
PHP_METHOD(Consulate_Api_Agent, forceLeave);
PHP_METHOD(Consulate_Api_Agent, updateACLToken);
PHP_METHOD(Consulate_Api_Agent, updateACLAgentToken);
PHP_METHOD(Consulate_Api_Agent, updateACLAgentMasterToken);
PHP_METHOD(Consulate_Api_Agent, updateACLReplicationToken);
PHP_METHOD(Consulate_Api_Agent, updateToken);
PHP_METHOD(Consulate_Api_Agent, services);
PHP_METHOD(Consulate_Api_Agent, serviceRegister);
PHP_METHOD(Consulate_Api_Agent, serviceDeregister);
PHP_METHOD(Consulate_Api_Agent, checks);
PHP_METHOD(Consulate_Api_Agent, passTTL);
PHP_METHOD(Consulate_Api_Agent, warnTTL);
PHP_METHOD(Consulate_Api_Agent, failTTL);
PHP_METHOD(Consulate_Api_Agent, _updateTTL);
PHP_METHOD(Consulate_Api_Agent, updateTTL);
PHP_METHOD(Consulate_Api_Agent, checkRegister);
PHP_METHOD(Consulate_Api_Agent, checkDeregister);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_members, 0, 0, 0)
	ZEND_ARG_INFO(0, wan)
	ZEND_ARG_INFO(0, segment)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_maintenance, 0, 0, 0)
	ZEND_ARG_INFO(0, enable)
	ZEND_ARG_INFO(0, reason)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_monitor, 0, 0, 1)
	ZEND_ARG_INFO(0, loglevel)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_join, 0, 0, 1)
	ZEND_ARG_INFO(0, address)
	ZEND_ARG_INFO(0, wan)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_forceleave, 0, 0, 1)
	ZEND_ARG_INFO(0, node)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_updateacltoken, 0, 0, 2)
	ZEND_ARG_INFO(0, token)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_updateaclagenttoken, 0, 0, 2)
	ZEND_ARG_INFO(0, token)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_updateaclagentmastertoken, 0, 0, 2)
	ZEND_ARG_INFO(0, token)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_updateaclreplicationtoken, 0, 0, 2)
	ZEND_ARG_INFO(0, token)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_updatetoken, 0, 0, 3)
	ZEND_ARG_INFO(0, target)
	ZEND_ARG_INFO(0, token)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_serviceregister, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, service, Consulate\\Api\\Agent\\ServiceRegistration, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicederegister, 0, 0, 1)
	ZEND_ARG_INFO(0, serviceId)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_passttl, 0, 0, 1)
	ZEND_ARG_INFO(0, checkId)
	ZEND_ARG_INFO(0, note)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_warnttl, 0, 0, 1)
	ZEND_ARG_INFO(0, checkId)
	ZEND_ARG_INFO(0, note)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_failttl, 0, 0, 1)
	ZEND_ARG_INFO(0, checkId)
	ZEND_ARG_INFO(0, note)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent__updatettl, 0, 0, 2)
	ZEND_ARG_INFO(0, checkId)
	ZEND_ARG_INFO(0, note)
	ZEND_ARG_INFO(0, status)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_updatettl, 0, 0, 1)
	ZEND_ARG_INFO(0, checkId)
	ZEND_ARG_INFO(0, output)
	ZEND_ARG_INFO(0, status)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_checkregister, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, check, Consulate\\Api\\Agent\\CheckRegistration, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_checkderegister, 0, 0, 1)
	ZEND_ARG_INFO(0, checkId)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_method_entry) {
	PHP_ME(Consulate_Api_Agent, self, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, metrics, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, reload, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, nodeName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, members, arginfo_consulate_api_agent_members, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, maintenance, arginfo_consulate_api_agent_maintenance, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, monitor, arginfo_consulate_api_agent_monitor, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, join, arginfo_consulate_api_agent_join, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, leave, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, forceLeave, arginfo_consulate_api_agent_forceleave, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateACLToken, arginfo_consulate_api_agent_updateacltoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateACLAgentToken, arginfo_consulate_api_agent_updateaclagenttoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateACLAgentMasterToken, arginfo_consulate_api_agent_updateaclagentmastertoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateACLReplicationToken, arginfo_consulate_api_agent_updateaclreplicationtoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateToken, arginfo_consulate_api_agent_updatetoken, ZEND_ACC_PRIVATE)
	PHP_ME(Consulate_Api_Agent, services, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, serviceRegister, arginfo_consulate_api_agent_serviceregister, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, serviceDeregister, arginfo_consulate_api_agent_servicederegister, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, checks, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, passTTL, arginfo_consulate_api_agent_passttl, ZEND_ACC_DEPRECATED|ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, warnTTL, arginfo_consulate_api_agent_warnttl, ZEND_ACC_DEPRECATED|ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, failTTL, arginfo_consulate_api_agent_failttl, ZEND_ACC_DEPRECATED|ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, _updateTTL, arginfo_consulate_api_agent__updatettl, ZEND_ACC_PRIVATE)
	PHP_ME(Consulate_Api_Agent, updateTTL, arginfo_consulate_api_agent_updatettl, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, checkRegister, arginfo_consulate_api_agent_checkregister, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, checkDeregister, arginfo_consulate_api_agent_checkderegister, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
