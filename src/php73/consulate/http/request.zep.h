
extern zend_class_entry *consulate_http_request_ce;

ZEPHIR_INIT_CLASS(Consulate_Http_Request);

PHP_METHOD(Consulate_Http_Request, getHeaders);
PHP_METHOD(Consulate_Http_Request, getParams);
PHP_METHOD(Consulate_Http_Request, getPath);
PHP_METHOD(Consulate_Http_Request, getMethod);
PHP_METHOD(Consulate_Http_Request, getBody);
PHP_METHOD(Consulate_Http_Request, __construct);
PHP_METHOD(Consulate_Http_Request, __destruct);
PHP_METHOD(Consulate_Http_Request, setQueryOptions);
PHP_METHOD(Consulate_Http_Request, setWriteOptions);
PHP_METHOD(Consulate_Http_Request, getUri);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_request___construct, 0, 0, 3)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, method)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, path)
#endif
	ZEND_ARG_OBJ_INFO(0, config, Consulate\\Config, 0)
	ZEND_ARG_INFO(0, body)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_request_setqueryoptions, 0, 0, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryOptions, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_request_setwriteoptions, 0, 0, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\WriteOptions, 1)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_consulate_http_request_geturi, 0, 0, Consulate\\Http\\Uri, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_request_geturi, 0, 0, IS_OBJECT, "Consulate\\Http\\Uri", 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_http_request_method_entry) {
	PHP_ME(Consulate_Http_Request, getHeaders, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Request, getParams, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Request, getPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Request, getMethod, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Request, getBody, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Request, __construct, arginfo_consulate_http_request___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Http_Request, __destruct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_DTOR)
	PHP_ME(Consulate_Http_Request, setQueryOptions, arginfo_consulate_http_request_setqueryoptions, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Request, setWriteOptions, arginfo_consulate_http_request_setwriteoptions, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Request, getUri, arginfo_consulate_http_request_geturi, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
