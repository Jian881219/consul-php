
extern zend_class_entry *consulate_http_auth_ce;

ZEPHIR_INIT_CLASS(Consulate_Http_Auth);

PHP_METHOD(Consulate_Http_Auth, getUsername);
PHP_METHOD(Consulate_Http_Auth, setUsername);
PHP_METHOD(Consulate_Http_Auth, getPassword);
PHP_METHOD(Consulate_Http_Auth, setPassword);
PHP_METHOD(Consulate_Http_Auth, __construct);
PHP_METHOD(Consulate_Http_Auth, compileAuthString);
PHP_METHOD(Consulate_Http_Auth, __toString);
PHP_METHOD(Consulate_Http_Auth, jsonSerialize);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_auth_setusername, 0, 0, 1)
	ZEND_ARG_INFO(0, username)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_auth_setpassword, 0, 0, 1)
	ZEND_ARG_INFO(0, password)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_auth___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, username)
	ZEND_ARG_INFO(0, password)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_http_auth_method_entry) {
	PHP_ME(Consulate_Http_Auth, getUsername, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Auth, setUsername, arginfo_consulate_http_auth_setusername, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Auth, getPassword, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Auth, setPassword, arginfo_consulate_http_auth_setpassword, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Auth, __construct, arginfo_consulate_http_auth___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Http_Auth, compileAuthString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Auth, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Auth, jsonSerialize, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
