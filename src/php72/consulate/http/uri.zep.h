
extern zend_class_entry *consulate_http_uri_ce;

ZEPHIR_INIT_CLASS(Consulate_Http_Uri);

PHP_METHOD(Consulate_Http_Uri, getScheme);
PHP_METHOD(Consulate_Http_Uri, getHost);
PHP_METHOD(Consulate_Http_Uri, getPort);
PHP_METHOD(Consulate_Http_Uri, getPath);
PHP_METHOD(Consulate_Http_Uri, getQuery);
PHP_METHOD(Consulate_Http_Uri, getFragment);
PHP_METHOD(Consulate_Http_Uri, __construct);
PHP_METHOD(Consulate_Http_Uri, filterScheme);
PHP_METHOD(Consulate_Http_Uri, filterAddress);
PHP_METHOD(Consulate_Http_Uri, filterPath);
PHP_METHOD(Consulate_Http_Uri, filterQuery);
PHP_METHOD(Consulate_Http_Uri, getUserInfo);
PHP_METHOD(Consulate_Http_Uri, getUsername);
PHP_METHOD(Consulate_Http_Uri, getPassword);
PHP_METHOD(Consulate_Http_Uri, getAuthority);
PHP_METHOD(Consulate_Http_Uri, __toString);
PHP_METHOD(Consulate_Http_Uri, getBaseUrl);
void zephir_init_static_properties_Consulate_Http_Uri(TSRMLS_D);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_uri___construct, 0, 0, 2)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, scheme, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, scheme)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, address)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, path)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, query)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, fragment, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, fragment)
#endif
	ZEND_ARG_OBJ_INFO(0, auth, Consulate\\Http\\Auth, 1)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_filterscheme, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_filterscheme, 0, 1, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, scheme, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, scheme)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_http_uri_filteraddress, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, address)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_filterpath, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_filterpath, 0, 1, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, path)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_filterquery, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_filterquery, 0, 1, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, query)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getuserinfo, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getuserinfo, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getusername, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getusername, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getpassword, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getpassword, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getauthority, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getauthority, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri___tostring, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri___tostring, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getbaseurl, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_consulate_http_uri_getbaseurl, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_http_uri_method_entry) {
	PHP_ME(Consulate_Http_Uri, getScheme, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getHost, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getPort, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getQuery, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getFragment, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, __construct, arginfo_consulate_http_uri___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Consulate_Http_Uri, filterScheme, arginfo_consulate_http_uri_filterscheme, ZEND_ACC_PROTECTED)
	PHP_ME(Consulate_Http_Uri, filterAddress, arginfo_consulate_http_uri_filteraddress, ZEND_ACC_PROTECTED)
	PHP_ME(Consulate_Http_Uri, filterPath, arginfo_consulate_http_uri_filterpath, ZEND_ACC_PROTECTED)
	PHP_ME(Consulate_Http_Uri, filterQuery, arginfo_consulate_http_uri_filterquery, ZEND_ACC_PROTECTED)
	PHP_ME(Consulate_Http_Uri, getUserInfo, arginfo_consulate_http_uri_getuserinfo, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getUsername, arginfo_consulate_http_uri_getusername, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getPassword, arginfo_consulate_http_uri_getpassword, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getAuthority, arginfo_consulate_http_uri_getauthority, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, __toString, arginfo_consulate_http_uri___tostring, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Http_Uri, getBaseUrl, arginfo_consulate_http_uri_getbaseurl, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
