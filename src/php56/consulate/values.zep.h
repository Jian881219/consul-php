
extern zend_class_entry *consulate_values_ce;

ZEPHIR_INIT_CLASS(Consulate_Values);

PHP_METHOD(Consulate_Values, get);
PHP_METHOD(Consulate_Values, getAll);
PHP_METHOD(Consulate_Values, set);
PHP_METHOD(Consulate_Values, add);
PHP_METHOD(Consulate_Values, delete);
PHP_METHOD(Consulate_Values, count);
PHP_METHOD(Consulate_Values, jsonSerialize);
PHP_METHOD(Consulate_Values, toArray);
PHP_METHOD(Consulate_Values, __toString);
PHP_METHOD(Consulate_Values, encode);
zend_object_value zephir_init_properties_Consulate_Values(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_values_get, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_values_getall, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_values_set, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_values_add, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_values_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_values_encode, 0, 0, 1)
	ZEND_ARG_INFO(0, v)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_values_method_entry) {
	PHP_ME(Consulate_Values, get, arginfo_consulate_values_get, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, getAll, arginfo_consulate_values_getall, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, set, arginfo_consulate_values_set, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, add, arginfo_consulate_values_add, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, delete, arginfo_consulate_values_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, count, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, jsonSerialize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, toArray, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Values, encode, arginfo_consulate_values_encode, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
