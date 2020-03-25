
extern zend_class_entry *consulate_api_agent_servicecheck_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_ServiceCheck);

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getArgs);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setArgs);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getScript);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setScript);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getDockerContainerId);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setDockerContainerId);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getShell);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setShell);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getInterval);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setInterval);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTimeout);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTimeout);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTtl);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTtl);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getHttp);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setHttp);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getHeader);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setHeader);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getMethod);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setMethod);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTcp);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTcp);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getStatus);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setStatus);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getNotes);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setNotes);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTLSSkipVerify);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTLSSkipVerify);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getDeregisterCriticalServiceAfter);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setDeregisterCriticalServiceAfter);
PHP_METHOD(Consulate_Api_Agent_ServiceCheck, jsonSerialize);
zend_object *zephir_init_properties_Consulate_Api_Agent_ServiceCheck(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setargs, 0, 0, 1)
	ZEND_ARG_INFO(0, args)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setscript, 0, 0, 1)
	ZEND_ARG_INFO(0, script)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setdockercontainerid, 0, 0, 1)
	ZEND_ARG_INFO(0, dockerContainerId)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setshell, 0, 0, 1)
	ZEND_ARG_INFO(0, shell)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setinterval, 0, 0, 1)
	ZEND_ARG_INFO(0, interval)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_settimeout, 0, 0, 1)
	ZEND_ARG_INFO(0, timeout)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setttl, 0, 0, 1)
	ZEND_ARG_INFO(0, ttl)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_sethttp, 0, 0, 1)
	ZEND_ARG_INFO(0, http)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setheader, 0, 0, 1)
	ZEND_ARG_INFO(0, header)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setmethod, 0, 0, 1)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_settcp, 0, 0, 1)
	ZEND_ARG_INFO(0, tcp)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setstatus, 0, 0, 1)
	ZEND_ARG_INFO(0, status)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setnotes, 0, 0, 1)
	ZEND_ARG_INFO(0, notes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_settlsskipverify, 0, 0, 1)
	ZEND_ARG_INFO(0, TLSSkipVerify)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_servicecheck_setderegistercriticalserviceafter, 0, 0, 1)
	ZEND_ARG_INFO(0, deregisterCriticalServiceAfter)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_servicecheck_method_entry) {
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getArgs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setArgs, arginfo_consulate_api_agent_servicecheck_setargs, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getScript, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setScript, arginfo_consulate_api_agent_servicecheck_setscript, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getDockerContainerId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setDockerContainerId, arginfo_consulate_api_agent_servicecheck_setdockercontainerid, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getShell, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setShell, arginfo_consulate_api_agent_servicecheck_setshell, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getInterval, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setInterval, arginfo_consulate_api_agent_servicecheck_setinterval, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getTimeout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setTimeout, arginfo_consulate_api_agent_servicecheck_settimeout, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getTtl, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setTtl, arginfo_consulate_api_agent_servicecheck_setttl, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getHttp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setHttp, arginfo_consulate_api_agent_servicecheck_sethttp, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getHeader, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setHeader, arginfo_consulate_api_agent_servicecheck_setheader, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getMethod, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setMethod, arginfo_consulate_api_agent_servicecheck_setmethod, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getTcp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setTcp, arginfo_consulate_api_agent_servicecheck_settcp, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getStatus, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setStatus, arginfo_consulate_api_agent_servicecheck_setstatus, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getNotes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setNotes, arginfo_consulate_api_agent_servicecheck_setnotes, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getTLSSkipVerify, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setTLSSkipVerify, arginfo_consulate_api_agent_servicecheck_settlsskipverify, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, getDeregisterCriticalServiceAfter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, setDeregisterCriticalServiceAfter, arginfo_consulate_api_agent_servicecheck_setderegistercriticalserviceafter, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_ServiceCheck, jsonSerialize, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
