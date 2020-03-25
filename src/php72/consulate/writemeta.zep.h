
extern zend_class_entry *consulate_writemeta_ce;

ZEPHIR_INIT_CLASS(Consulate_WriteMeta);

PHP_METHOD(Consulate_WriteMeta, getRequestTime);
PHP_METHOD(Consulate_WriteMeta, setRequestTime);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_writemeta_setrequesttime, 0, 0, 1)
	ZEND_ARG_INFO(0, requestTime)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_writemeta_method_entry) {
	PHP_ME(Consulate_WriteMeta, getRequestTime, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_WriteMeta, setRequestTime, arginfo_consulate_writemeta_setrequesttime, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
