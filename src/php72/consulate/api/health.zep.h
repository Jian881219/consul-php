
extern zend_class_entry *consulate_api_health_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Health);

PHP_METHOD(Consulate_Api_Health, node);
PHP_METHOD(Consulate_Api_Health, checks);
PHP_METHOD(Consulate_Api_Health, service);
PHP_METHOD(Consulate_Api_Health, state);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_node, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, node, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, node)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_checks, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, service)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_service, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, service)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, tag)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, passingOnly, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, passingOnly)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_state, 0, 0, 2)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, state, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, state)
#endif
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_health_method_entry) {
	PHP_ME(Consulate_Api_Health, node, arginfo_consulate_api_health_node, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health, checks, arginfo_consulate_api_health_checks, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health, service, arginfo_consulate_api_health_service, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health, state, arginfo_consulate_api_health_state, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
