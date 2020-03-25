
extern zend_class_entry *consulate_api_endpoint_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Endpoint);

PHP_METHOD(Consulate_Api_Endpoint, getConfig);
PHP_METHOD(Consulate_Api_Endpoint, __construct);
PHP_METHOD(Consulate_Api_Endpoint, newRequest);
PHP_METHOD(Consulate_Api_Endpoint, doRequest);
PHP_METHOD(Consulate_Api_Endpoint, query);
PHP_METHOD(Consulate_Api_Endpoint, write);
PHP_METHOD(Consulate_Api_Endpoint, requireOK);
PHP_METHOD(Consulate_Api_Endpoint, parseQueryMeta);
PHP_METHOD(Consulate_Api_Endpoint, decodeBody);
PHP_METHOD(Consulate_Api_Endpoint, removeBom);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_endpoint___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, config, Consulate\\Config, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_endpoint_newrequest, 0, 0, 2)
	ZEND_ARG_INFO(0, method)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, body)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_endpoint_dorequest, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, r, Consulate\\Http\\Request, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_endpoint_requireok, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_endpoint_parsequerymeta, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, response, Consulate\\Http\\Response, 0)
	ZEND_ARG_OBJ_INFO(0, q, Consulate\\QueryMeta, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_endpoint_decodebody, 0, 0, 1)
	ZEND_ARG_INFO(0, resp)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_endpoint_removebom, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_endpoint_method_entry) {
	PHP_ME(Consulate_Api_Endpoint, getConfig, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Endpoint, __construct, arginfo_consulate_api_endpoint___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Api_Endpoint, newRequest, arginfo_consulate_api_endpoint_newrequest, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Endpoint, doRequest, arginfo_consulate_api_endpoint_dorequest, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Endpoint, query, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Endpoint, write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Endpoint, requireOK, arginfo_consulate_api_endpoint_requireok, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Endpoint, parseQueryMeta, arginfo_consulate_api_endpoint_parsequerymeta, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Endpoint, decodeBody, arginfo_consulate_api_endpoint_decodebody, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Endpoint, removeBom, arginfo_consulate_api_endpoint_removebom, ZEND_ACC_PRIVATE)
	PHP_FE_END
};
