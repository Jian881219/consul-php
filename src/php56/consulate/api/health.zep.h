
extern zend_class_entry *consulate_api_health_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Health);

PHP_METHOD(Consulate_Api_Health, node);
PHP_METHOD(Consulate_Api_Health, checks);
PHP_METHOD(Consulate_Api_Health, service);
PHP_METHOD(Consulate_Api_Health, state);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_node, 0, 0, 1)
	ZEND_ARG_INFO(0, node)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_checks, 0, 0, 1)
	ZEND_ARG_INFO(0, service)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_service, 0, 0, 1)
	ZEND_ARG_INFO(0, service)
	ZEND_ARG_INFO(0, tag)
	ZEND_ARG_INFO(0, passingOnly)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_state, 0, 0, 2)
	ZEND_ARG_INFO(0, state)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_health_method_entry) {
	PHP_ME(Consulate_Api_Health, node, arginfo_consulate_api_health_node, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health, checks, arginfo_consulate_api_health_checks, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health, service, arginfo_consulate_api_health_service, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health, state, arginfo_consulate_api_health_state, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
