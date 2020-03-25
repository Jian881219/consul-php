
extern zend_class_entry *consulate_querymeta_ce;

ZEPHIR_INIT_CLASS(Consulate_QueryMeta);

PHP_METHOD(Consulate_QueryMeta, getLastIndex);
PHP_METHOD(Consulate_QueryMeta, setLastIndex);
PHP_METHOD(Consulate_QueryMeta, getLastContact);
PHP_METHOD(Consulate_QueryMeta, setLastContact);
PHP_METHOD(Consulate_QueryMeta, getKnownLeader);
PHP_METHOD(Consulate_QueryMeta, setKnownLeader);
PHP_METHOD(Consulate_QueryMeta, getRequestTime);
PHP_METHOD(Consulate_QueryMeta, setRequestTime);
PHP_METHOD(Consulate_QueryMeta, getAddressTranslationEnabled);
PHP_METHOD(Consulate_QueryMeta, setAddressTranslationEnabled);
PHP_METHOD(Consulate_QueryMeta, getRequestUri);
PHP_METHOD(Consulate_QueryMeta, setRequestUri);
PHP_METHOD(Consulate_QueryMeta, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_querymeta_setlastindex, 0, 0, 1)
	ZEND_ARG_INFO(0, lastIndex)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_querymeta_setlastcontact, 0, 0, 1)
	ZEND_ARG_INFO(0, lastContact)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_querymeta_setknownleader, 0, 0, 1)
	ZEND_ARG_INFO(0, knownLeader)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_querymeta_setrequesttime, 0, 0, 1)
	ZEND_ARG_INFO(0, requestTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_querymeta_setaddresstranslationenabled, 0, 0, 1)
	ZEND_ARG_INFO(0, addressTranslationEnabled)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_querymeta_setrequesturi, 0, 0, 1)
	ZEND_ARG_INFO(0, requestUri)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_querymeta___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_querymeta_method_entry) {
	PHP_ME(Consulate_QueryMeta, getLastIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, setLastIndex, arginfo_consulate_querymeta_setlastindex, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, getLastContact, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, setLastContact, arginfo_consulate_querymeta_setlastcontact, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, getKnownLeader, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, setKnownLeader, arginfo_consulate_querymeta_setknownleader, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, getRequestTime, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, setRequestTime, arginfo_consulate_querymeta_setrequesttime, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, getAddressTranslationEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, setAddressTranslationEnabled, arginfo_consulate_querymeta_setaddresstranslationenabled, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, getRequestUri, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, setRequestUri, arginfo_consulate_querymeta_setrequesturi, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_QueryMeta, __construct, arginfo_consulate_querymeta___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
