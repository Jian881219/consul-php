
extern zend_class_entry *consulate_http_client_curl_ce;

ZEPHIR_INIT_CLASS(Consulate_Http_Client_Curl);

PHP_METHOD(Consulate_Http_Client_Curl, __construct);
PHP_METHOD(Consulate_Http_Client_Curl, setUrl);
PHP_METHOD(Consulate_Http_Client_Curl, setMethod);
PHP_METHOD(Consulate_Http_Client_Curl, __destruct);
PHP_METHOD(Consulate_Http_Client_Curl, setup);
PHP_METHOD(Consulate_Http_Client_Curl, setBasicAuth);
PHP_METHOD(Consulate_Http_Client_Curl, setHeaders);
PHP_METHOD(Consulate_Http_Client_Curl, setBody);
PHP_METHOD(Consulate_Http_Client_Curl, send);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_client_curl_seturl, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_client_curl_setmethod, 0, 0, 1)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_client_curl_setup, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_client_curl_setbasicauth, 0, 0, 0)
	ZEND_ARG_INFO(0, username)
	ZEND_ARG_INFO(0, password)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_client_curl_setheaders, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, fields, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_client_curl_setbody, 0, 0, 1)
	ZEND_ARG_INFO(0, body)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_http_client_curl_method_entry) {
	PHP_ME(Consulate_Http_Client_Curl, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Http_Client_Curl, setUrl, arginfo_consulate_http_client_curl_seturl, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Client_Curl, setMethod, arginfo_consulate_http_client_curl_setmethod, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Client_Curl, __destruct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_DTOR)
	PHP_ME(Consulate_Http_Client_Curl, setup, arginfo_consulate_http_client_curl_setup, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Client_Curl, setBasicAuth, arginfo_consulate_http_client_curl_setbasicauth, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Client_Curl, setHeaders, arginfo_consulate_http_client_curl_setheaders, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Client_Curl, setBody, arginfo_consulate_http_client_curl_setbody, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Client_Curl, send, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
