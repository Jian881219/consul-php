
extern zend_class_entry *consulate_config_ce;

ZEPHIR_INIT_CLASS(Consulate_Config);

PHP_METHOD(Consulate_Config, getAddress);
PHP_METHOD(Consulate_Config, setAddress);
PHP_METHOD(Consulate_Config, getScheme);
PHP_METHOD(Consulate_Config, setScheme);
PHP_METHOD(Consulate_Config, getDatacenter);
PHP_METHOD(Consulate_Config, setDatacenter);
PHP_METHOD(Consulate_Config, getHttpAuth);
PHP_METHOD(Consulate_Config, getWaitTime);
PHP_METHOD(Consulate_Config, setWaitTime);
PHP_METHOD(Consulate_Config, getToken);
PHP_METHOD(Consulate_Config, setToken);
PHP_METHOD(Consulate_Config, getCAFile);
PHP_METHOD(Consulate_Config, setCAFile);
PHP_METHOD(Consulate_Config, getCertFile);
PHP_METHOD(Consulate_Config, setCertFile);
PHP_METHOD(Consulate_Config, getKeyFile);
PHP_METHOD(Consulate_Config, setKeyFile);
PHP_METHOD(Consulate_Config, getInsecureSkipVerify);
PHP_METHOD(Consulate_Config, setInsecureSkipVerify);
PHP_METHOD(Consulate_Config, getTokenInHeader);
PHP_METHOD(Consulate_Config, setTokenInHeader);
PHP_METHOD(Consulate_Config, __construct);
PHP_METHOD(Consulate_Config, newDefaultConfig);
PHP_METHOD(Consulate_Config, setHttpAuth);
PHP_METHOD(Consulate_Config, durToMsec);
PHP_METHOD(Consulate_Config, getValueFromEnvironment);
PHP_METHOD(Consulate_Config, getDefaultConfig);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_setaddress, 0, 0, 1)
	ZEND_ARG_INFO(0, address)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_setscheme, 0, 0, 1)
	ZEND_ARG_INFO(0, scheme)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_setdatacenter, 0, 0, 1)
	ZEND_ARG_INFO(0, datacenter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_setwaittime, 0, 0, 1)
	ZEND_ARG_INFO(0, waitTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_settoken, 0, 0, 1)
	ZEND_ARG_INFO(0, token)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_setcafile, 0, 0, 1)
	ZEND_ARG_INFO(0, CAFile)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_setcertfile, 0, 0, 1)
	ZEND_ARG_INFO(0, certFile)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_setkeyfile, 0, 0, 1)
	ZEND_ARG_INFO(0, keyFile)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_setinsecureskipverify, 0, 0, 1)
	ZEND_ARG_INFO(0, insecureSkipVerify)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_settokeninheader, 0, 0, 1)
	ZEND_ARG_INFO(0, tokenInHeader)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_sethttpauth, 0, 0, 1)
	ZEND_ARG_INFO(0, auth)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_durtomsec, 0, 0, 1)
	ZEND_ARG_INFO(0, dur)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_config_getvaluefromenvironment, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_config_method_entry) {
	PHP_ME(Consulate_Config, getAddress, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setAddress, arginfo_consulate_config_setaddress, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getScheme, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setScheme, arginfo_consulate_config_setscheme, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getDatacenter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setDatacenter, arginfo_consulate_config_setdatacenter, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getHttpAuth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getWaitTime, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setWaitTime, arginfo_consulate_config_setwaittime, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getToken, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setToken, arginfo_consulate_config_settoken, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getCAFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setCAFile, arginfo_consulate_config_setcafile, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getCertFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setCertFile, arginfo_consulate_config_setcertfile, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getKeyFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setKeyFile, arginfo_consulate_config_setkeyfile, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getInsecureSkipVerify, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setInsecureSkipVerify, arginfo_consulate_config_setinsecureskipverify, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getTokenInHeader, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, setTokenInHeader, arginfo_consulate_config_settokeninheader, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, __construct, arginfo_consulate_config___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Config, newDefaultConfig, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Consulate_Config, setHttpAuth, arginfo_consulate_config_sethttpauth, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, durToMsec, arginfo_consulate_config_durtomsec, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Config, getValueFromEnvironment, arginfo_consulate_config_getvaluefromenvironment, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Consulate_Config, getDefaultConfig, NULL, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
