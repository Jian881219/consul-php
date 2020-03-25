
extern zend_class_entry *consulate_api_kv_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Kv);

PHP_METHOD(Consulate_Api_Kv, get);
PHP_METHOD(Consulate_Api_Kv, list);
PHP_METHOD(Consulate_Api_Kv, keys);
PHP_METHOD(Consulate_Api_Kv, getItem);
PHP_METHOD(Consulate_Api_Kv, put);
PHP_METHOD(Consulate_Api_Kv, cas);
PHP_METHOD(Consulate_Api_Kv, acquire);
PHP_METHOD(Consulate_Api_Kv, release);
PHP_METHOD(Consulate_Api_Kv, updateItem);
PHP_METHOD(Consulate_Api_Kv, delete);
PHP_METHOD(Consulate_Api_Kv, deleteCAS);
PHP_METHOD(Consulate_Api_Kv, deleteTree);
PHP_METHOD(Consulate_Api_Kv, deleteItem);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_get, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_list, 0, 0, 1)
	ZEND_ARG_INFO(0, prefix)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_keys, 0, 0, 0)
	ZEND_ARG_INFO(0, prefix)
	ZEND_ARG_INFO(0, separator)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_getitem, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_ARRAY_INFO(0, params, 1)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_put, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, pair, Consulate\\Api\\Kv\\Pair, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_cas, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, pair, Consulate\\Api\\Kv\\Pair, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_acquire, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, pair, Consulate\\Api\\Kv\\Pair, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_release, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, pair, Consulate\\Api\\Kv\\Pair, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_updateitem, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_ARRAY_INFO(0, params, 1)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_deletecas, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, pair, Consulate\\Api\\Kv\\Pair, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_deletetree, 0, 0, 2)
	ZEND_ARG_INFO(0, prefix)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteMeta, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_kv_deleteitem, 0, 0, 3)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_ARRAY_INFO(0, params, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteMeta, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_kv_method_entry) {
	PHP_ME(Consulate_Api_Kv, get, arginfo_consulate_api_kv_get, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, list, arginfo_consulate_api_kv_list, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, keys, arginfo_consulate_api_kv_keys, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, getItem, arginfo_consulate_api_kv_getitem, ZEND_ACC_PRIVATE)
	PHP_ME(Consulate_Api_Kv, put, arginfo_consulate_api_kv_put, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, cas, arginfo_consulate_api_kv_cas, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, acquire, arginfo_consulate_api_kv_acquire, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, release, arginfo_consulate_api_kv_release, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, updateItem, arginfo_consulate_api_kv_updateitem, ZEND_ACC_PRIVATE)
	PHP_ME(Consulate_Api_Kv, delete, arginfo_consulate_api_kv_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, deleteCAS, arginfo_consulate_api_kv_deletecas, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, deleteTree, arginfo_consulate_api_kv_deletetree, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Kv, deleteItem, arginfo_consulate_api_kv_deleteitem, ZEND_ACC_PRIVATE)
	PHP_FE_END
};
