
extern zend_class_entry *consulate_writeoptions_ce;

ZEPHIR_INIT_CLASS(Consulate_WriteOptions);

PHP_METHOD(Consulate_WriteOptions, getDatacenter);
PHP_METHOD(Consulate_WriteOptions, setDatacenter);
PHP_METHOD(Consulate_WriteOptions, getToken);
PHP_METHOD(Consulate_WriteOptions, setToken);
PHP_METHOD(Consulate_WriteOptions, getRelayFactor);
PHP_METHOD(Consulate_WriteOptions, setRelayFactor);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_writeoptions_setdatacenter, 0, 0, 1)
	ZEND_ARG_INFO(0, datacenter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_writeoptions_settoken, 0, 0, 1)
	ZEND_ARG_INFO(0, token)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_writeoptions_setrelayfactor, 0, 0, 1)
	ZEND_ARG_INFO(0, relayFactor)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_writeoptions_method_entry) {
	PHP_ME(Consulate_WriteOptions, getDatacenter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_WriteOptions, setDatacenter, arginfo_consulate_writeoptions_setdatacenter, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_WriteOptions, getToken, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_WriteOptions, setToken, arginfo_consulate_writeoptions_settoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_WriteOptions, getRelayFactor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_WriteOptions, setRelayFactor, arginfo_consulate_writeoptions_setrelayfactor, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
