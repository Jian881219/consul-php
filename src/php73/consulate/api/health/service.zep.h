
extern zend_class_entry *consulate_api_health_service_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Health_Service);

PHP_METHOD(Consulate_Api_Health_Service, getNode);
PHP_METHOD(Consulate_Api_Health_Service, getService);
PHP_METHOD(Consulate_Api_Health_Service, getChecks);
PHP_METHOD(Consulate_Api_Health_Service, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_health_service___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_health_service_method_entry) {
	PHP_ME(Consulate_Api_Health_Service, getNode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health_Service, getService, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health_Service, getChecks, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Health_Service, __construct, arginfo_consulate_api_health_service___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
