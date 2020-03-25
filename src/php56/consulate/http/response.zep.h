
extern zend_class_entry *consulate_http_response_ce;

ZEPHIR_INIT_CLASS(Consulate_Http_Response);

PHP_METHOD(Consulate_Http_Response, getHeaders);
PHP_METHOD(Consulate_Http_Response, getBody);
PHP_METHOD(Consulate_Http_Response, getMetadata);
PHP_METHOD(Consulate_Http_Response, getStatusCode);
PHP_METHOD(Consulate_Http_Response, __construct);
PHP_METHOD(Consulate_Http_Response, parseCode);
PHP_METHOD(Consulate_Http_Response, parseHeaders);
PHP_METHOD(Consulate_Http_Response, __toString);
zend_object_value zephir_init_properties_Consulate_Http_Response(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_response___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, body)
	ZEND_ARG_INFO(0, headers)
	ZEND_ARG_INFO(0, metadata)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_response_parsecode, 0, 0, 1)
	ZEND_ARG_INFO(0, headers)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_response_parseheaders, 0, 0, 1)
	ZEND_ARG_INFO(0, headers)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_http_response_method_entry) {
	PHP_ME(Consulate_Http_Response, getHeaders, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Response, getBody, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Response, getMetadata, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Response, getStatusCode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Response, __construct, arginfo_consulate_http_response___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Http_Response, parseCode, arginfo_consulate_http_response_parsecode, ZEND_ACC_PRIVATE)
	PHP_ME(Consulate_Http_Response, parseHeaders, arginfo_consulate_http_response_parseheaders, ZEND_ACC_PRIVATE)
	PHP_ME(Consulate_Http_Response, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
