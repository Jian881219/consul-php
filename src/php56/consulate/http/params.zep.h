
extern zend_class_entry *consulate_http_params_ce;

ZEPHIR_INIT_CLASS(Consulate_Http_Params);

PHP_METHOD(Consulate_Http_Params, encode);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_params_encode, 0, 0, 1)
	ZEND_ARG_INFO(0, v)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_http_params_method_entry) {
	PHP_ME(Consulate_Http_Params, encode, arginfo_consulate_http_params_encode, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
