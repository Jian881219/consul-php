
extern zend_class_entry *consulate_client_ce;

ZEPHIR_INIT_CLASS(Consulate_Client);

PHP_METHOD(Consulate_Client, __construct);
PHP_METHOD(Consulate_Client, acl);
PHP_METHOD(Consulate_Client, agent);
PHP_METHOD(Consulate_Client, catalog);
PHP_METHOD(Consulate_Client, coordinate);
PHP_METHOD(Consulate_Client, event);
PHP_METHOD(Consulate_Client, health);
PHP_METHOD(Consulate_Client, kv);
PHP_METHOD(Consulate_Client, lock);
PHP_METHOD(Consulate_Client, operator);
PHP_METHOD(Consulate_Client, session);
PHP_METHOD(Consulate_Client, status);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_client___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO(0, config, Consulate\\Config, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_client_method_entry) {
	PHP_ME(Consulate_Client, __construct, arginfo_consulate_client___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Client, acl, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, agent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, catalog, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, coordinate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, event, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, health, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, kv, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, lock, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, operator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, session, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Client, status, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
