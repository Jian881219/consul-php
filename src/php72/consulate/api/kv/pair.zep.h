
extern zend_class_entry *consulate_api_kv_pair_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Kv_Pair);

PHP_METHOD(Consulate_Api_Kv_Pair, getKey);
PHP_METHOD(Consulate_Api_Kv_Pair, setKey);
PHP_METHOD(Consulate_Api_Kv_Pair, getCreateIndex);
PHP_METHOD(Consulate_Api_Kv_Pair, setCreateIndex);
PHP_METHOD(Consulate_Api_Kv_Pair, getModifyIndex);
PHP_METHOD(Consulate_Api_Kv_Pair, setModifyIndex);
PHP_METHOD(Consulate_Api_Kv_Pair, getLockIndex);
PHP_METHOD(Consulate_Api_Kv_Pair, setLockIndex);
PHP_METHOD(Consulate_Api_Kv_Pair, getFlags);
PHP_METHOD(Consulate_Api_Kv_Pair, setFlags);
PHP_METHOD(Consulate_Api_Kv_Pair, getValue);
PHP_METHOD(Consulate_Api_Kv_Pair, setValue);
PHP_METHOD(Consulate_Api_Kv_Pair, getSession);
PHP_METHOD(Consulate_Api_Kv_Pair, setSession);
PHP_METHOD(Consulate_Api_Kv_Pair, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_pair_setkey, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_pair_setcreateindex, 0, 0, 1)
	ZEND_ARG_INFO(0, createIndex)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_pair_setmodifyindex, 0, 0, 1)
	ZEND_ARG_INFO(0, modifyIndex)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_pair_setlockindex, 0, 0, 1)
	ZEND_ARG_INFO(0, lockIndex)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_pair_setflags, 0, 0, 1)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_pair_setvalue, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_pair_setsession, 0, 0, 1)
	ZEND_ARG_INFO(0, session)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_pair___construct, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, decodeValue, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, decodeValue)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_kv_pair_method_entry) {
	PHP_ME(Consulate_Api_Kv_Pair, getKey, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, setKey, arginfo_consulate_api_kv_pair_setkey, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, getCreateIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, setCreateIndex, arginfo_consulate_api_kv_pair_setcreateindex, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, getModifyIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, setModifyIndex, arginfo_consulate_api_kv_pair_setmodifyindex, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, getLockIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, setLockIndex, arginfo_consulate_api_kv_pair_setlockindex, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, getFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, setFlags, arginfo_consulate_api_kv_pair_setflags, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, getValue, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, setValue, arginfo_consulate_api_kv_pair_setvalue, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, getSession, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, setSession, arginfo_consulate_api_kv_pair_setsession, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv_Pair, __construct, arginfo_consulate_api_kv_pair___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
