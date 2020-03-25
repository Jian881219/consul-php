
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

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_self, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_self, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_api_agent_metrics, 0, 0, Consulate\\Api\\Agent\\MetricsInfo, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_metrics, 0, 0, IS_OBJECT, "Consulate\\Api\\Agent\\MetricsInfo", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_nodename, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_nodename, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_members, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_members, 0, 0, IS_ARRAY, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, wan, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, wan)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, segment, IS_STRING, 1)
#else
	ZEND_ARG_INFO(0, segment)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_maintenance, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_maintenance, 0, 0, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, enable)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, reason, IS_STRING, 1)
#else
	ZEND_ARG_INFO(0, reason)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_monitor, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, loglevel, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, loglevel)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_join, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_join, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, address)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, wan, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, wan)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_leave, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_leave, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_forceleave, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_forceleave, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, node, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, node)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_api_agent_updateacltoken, 0, 2, Consulate\\WriteMeta, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_updateacltoken, 0, 2, IS_OBJECT, "Consulate\\WriteMeta", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, token, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, token)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_api_agent_updateaclagenttoken, 0, 2, Consulate\\WriteMeta, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_updateaclagenttoken, 0, 2, IS_OBJECT, "Consulate\\WriteMeta", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, token, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, token)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_api_agent_updateaclagentmastertoken, 0, 2, Consulate\\WriteMeta, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_updateaclagentmastertoken, 0, 2, IS_OBJECT, "Consulate\\WriteMeta", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, token, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, token)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_api_agent_updateaclreplicationtoken, 0, 2, Consulate\\WriteMeta, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_updateaclreplicationtoken, 0, 2, IS_OBJECT, "Consulate\\WriteMeta", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, token, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, token)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_api_agent_updatetoken, 0, 3, Consulate\\WriteMeta, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_updatetoken, 0, 3, IS_OBJECT, "Consulate\\WriteMeta", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, target, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, target)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, token, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, token)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_services, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_services, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_serviceregister, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_serviceregister, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, service, Consulate\\Api\\Agent\\ServiceRegistration, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_servicederegister, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_servicederegister, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, serviceId, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, serviceId)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_checks, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_checks, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_passttl, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_passttl, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, checkId, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, checkId)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, note, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, note)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_warnttl, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_warnttl, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, checkId, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, checkId)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, note, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, note)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_failttl, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_failttl, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, checkId, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, checkId)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, note, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, note)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent__updatettl, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent__updatettl, 0, 2, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, checkId, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, checkId)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, note, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, note)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, status, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, status)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_updatettl, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_updatettl, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, checkId, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, checkId)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, output, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, output)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, status, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, status)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_checkregister, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_checkregister, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, check, Consulate\\Api\\Agent\\CheckRegistration, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_checkderegister, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_api_agent_checkderegister, 0, 1, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, checkId, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, checkId)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_method_entry) {
	PHP_ME(Consulate_Api_Agent, self, arginfo_consulate_api_agent_self, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, metrics, arginfo_consulate_api_agent_metrics, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, reload, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, nodeName, arginfo_consulate_api_agent_nodename, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, members, arginfo_consulate_api_agent_members, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, maintenance, arginfo_consulate_api_agent_maintenance, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, monitor, arginfo_consulate_api_agent_monitor, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, join, arginfo_consulate_api_agent_join, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, leave, arginfo_consulate_api_agent_leave, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, forceLeave, arginfo_consulate_api_agent_forceleave, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateACLToken, arginfo_consulate_api_agent_updateacltoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateACLAgentToken, arginfo_consulate_api_agent_updateaclagenttoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateACLAgentMasterToken, arginfo_consulate_api_agent_updateaclagentmastertoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateACLReplicationToken, arginfo_consulate_api_agent_updateaclreplicationtoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, updateToken, arginfo_consulate_api_agent_updatetoken, ZEND_ACC_PRIVATE)
	PHP_ME(Consulate_Api_Agent, services, arginfo_consulate_api_agent_services, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, serviceRegister, arginfo_consulate_api_agent_serviceregister, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, serviceDeregister, arginfo_consulate_api_agent_servicederegister, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, checks, arginfo_consulate_api_agent_checks, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, passTTL, arginfo_consulate_api_agent_passttl, ZEND_ACC_DEPRECATED|ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, warnTTL, arginfo_consulate_api_agent_warnttl, ZEND_ACC_DEPRECATED|ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, failTTL, arginfo_consulate_api_agent_failttl, ZEND_ACC_DEPRECATED|ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, _updateTTL, arginfo_consulate_api_agent__updatettl, ZEND_ACC_PRIVATE)
	PHP_ME(Consulate_Api_Agent, updateTTL, arginfo_consulate_api_agent_updatettl, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, checkRegister, arginfo_consulate_api_agent_checkregister, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent, checkDeregister, arginfo_consulate_api_agent_checkderegister, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
