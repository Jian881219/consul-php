
extern zend_class_entry *consulate_model_ce;

ZEPHIR_INIT_CLASS(Consulate_Model);

PHP_METHOD(Consulate_Model, __construct);
PHP_METHOD(Consulate_Model, jsonSerialize);
PHP_METHOD(Consulate_Model, __toString);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_model___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_model_method_entry) {
	PHP_ME(Consulate_Model, __construct, arginfo_consulate_model___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Model, jsonSerialize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Model, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
