
extern zend_class_entry *consulate_api_status_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Status);

PHP_METHOD(Consulate_Api_Status, leader);
PHP_METHOD(Consulate_Api_Status, peers);

ZEPHIR_INIT_FUNCS(consulate_api_status_method_entry) {
	PHP_ME(Consulate_Api_Status, leader, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Status, peers, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
