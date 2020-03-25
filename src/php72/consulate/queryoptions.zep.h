
extern zend_class_entry *consulate_queryoptions_ce;

ZEPHIR_INIT_CLASS(Consulate_QueryOptions);

PHP_METHOD(Consulate_QueryOptions, getDatacenter);
PHP_METHOD(Consulate_QueryOptions, setDatacenter);
PHP_METHOD(Consulate_QueryOptions, getAllowStale);
PHP_METHOD(Consulate_QueryOptions, setAllowStale);
PHP_METHOD(Consulate_QueryOptions, getRequireConsistent);
PHP_METHOD(Consulate_QueryOptions, setRequireConsistent);
PHP_METHOD(Consulate_QueryOptions, getWaitIndex);
PHP_METHOD(Consulate_QueryOptions, setWaitIndex);
PHP_METHOD(Consulate_QueryOptions, getWaitTime);
PHP_METHOD(Consulate_QueryOptions, setWaitTime);
PHP_METHOD(Consulate_QueryOptions, getToken);
PHP_METHOD(Consulate_QueryOptions, setToken);
PHP_METHOD(Consulate_QueryOptions, getNear);
PHP_METHOD(Consulate_QueryOptions, setNear);
PHP_METHOD(Consulate_QueryOptions, getNodeMeta);
PHP_METHOD(Consulate_QueryOptions, setNodeMeta);
PHP_METHOD(Consulate_QueryOptions, getRelayFactor);
PHP_METHOD(Consulate_QueryOptions, setRelayFactor);
PHP_METHOD(Consulate_QueryOptions, getPretty);
PHP_METHOD(Consulate_QueryOptions, setPretty);
zend_object *zephir_init_properties_Consulate_QueryOptions(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setdatacenter, 0, 0, 1)
	ZEND_ARG_INFO(0, datacenter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setallowstale, 0, 0, 1)
	ZEND_ARG_INFO(0, allowStale)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setrequireconsistent, 0, 0, 1)
	ZEND_ARG_INFO(0, requireConsistent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setwaitindex, 0, 0, 1)
	ZEND_ARG_INFO(0, waitIndex)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setwaittime, 0, 0, 1)
	ZEND_ARG_INFO(0, waitTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_settoken, 0, 0, 1)
	ZEND_ARG_INFO(0, token)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setnear, 0, 0, 1)
	ZEND_ARG_INFO(0, near)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setnodemeta, 0, 0, 1)
	ZEND_ARG_INFO(0, nodeMeta)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setrelayfactor, 0, 0, 1)
	ZEND_ARG_INFO(0, relayFactor)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_queryoptions_setpretty, 0, 0, 1)
	ZEND_ARG_INFO(0, pretty)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_queryoptions_method_entry) {
	PHP_ME(Consulate_QueryOptions, getDatacenter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setDatacenter, arginfo_consulate_queryoptions_setdatacenter, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getAllowStale, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setAllowStale, arginfo_consulate_queryoptions_setallowstale, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getRequireConsistent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setRequireConsistent, arginfo_consulate_queryoptions_setrequireconsistent, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getWaitIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setWaitIndex, arginfo_consulate_queryoptions_setwaitindex, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getWaitTime, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setWaitTime, arginfo_consulate_queryoptions_setwaittime, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getToken, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setToken, arginfo_consulate_queryoptions_settoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getNear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setNear, arginfo_consulate_queryoptions_setnear, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getNodeMeta, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setNodeMeta, arginfo_consulate_queryoptions_setnodemeta, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getRelayFactor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setRelayFactor, arginfo_consulate_queryoptions_setrelayfactor, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, getPretty, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryOptions, setPretty, arginfo_consulate_queryoptions_setpretty, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
