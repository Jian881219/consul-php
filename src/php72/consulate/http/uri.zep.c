
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "kernel/string.h"
#include "kernel/array.h"
#include "kernel/exception.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Consulate_Http_Uri) {

	ZEPHIR_REGISTER_CLASS(Consulate\\Http, Uri, consulate, http_uri, consulate_http_uri_method_entry, 0);

	zend_declare_property_null(consulate_http_uri_ce, SL("scheme"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("authority"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("userInfo"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("host"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("port"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("path"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("query"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("fragment"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("auth"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(consulate_http_uri_ce, SL("valid_schemes"), ZEND_ACC_PROTECTED|ZEND_ACC_STATIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Http_Uri, getScheme) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "scheme");

}

PHP_METHOD(Consulate_Http_Uri, getHost) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "host");

}

PHP_METHOD(Consulate_Http_Uri, getPort) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "port");

}

PHP_METHOD(Consulate_Http_Uri, getPath) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "path");

}

PHP_METHOD(Consulate_Http_Uri, getQuery) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "query");

}

PHP_METHOD(Consulate_Http_Uri, getFragment) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "fragment");

}

PHP_METHOD(Consulate_Http_Uri, __construct) {

	zephir_fcall_cache_entry *_3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *scheme_param = NULL, *address_param = NULL, *path_param = NULL, *query_param = NULL, *fragment_param = NULL, *auth = NULL, auth_sub, __$null, _0, _1, _2, _4;
	zval scheme, address, path, query, fragment;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&scheme);
	ZVAL_UNDEF(&address);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&query);
	ZVAL_UNDEF(&fragment);
	ZVAL_UNDEF(&auth_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 4, &scheme_param, &address_param, &path_param, &query_param, &fragment_param, &auth);

	zephir_get_strval(&scheme, scheme_param);
	zephir_get_strval(&address, address_param);
	if (!path_param) {
		ZEPHIR_INIT_VAR(&path);
		ZVAL_STRING(&path, "/");
	} else {
		zephir_get_strval(&path, path_param);
	}
	if (!query_param) {
		ZEPHIR_INIT_VAR(&query);
		ZVAL_STRING(&query, "");
	} else {
		zephir_get_strval(&query, query_param);
	}
	if (!fragment_param) {
		ZEPHIR_INIT_VAR(&fragment);
		ZVAL_STRING(&fragment, "");
	} else {
		zephir_get_strval(&fragment, fragment_param);
	}
	if (!auth) {
		auth = &auth_sub;
		ZEPHIR_CPY_WRT(auth, &__$null);
	} else {
		ZEPHIR_SEPARATE_PARAM(auth);
	}


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "filterscheme", NULL, 0, &scheme);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("scheme"), &_0);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "filteraddress", NULL, 0, &address);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_1);
	if (ZEPHIR_IS_EMPTY(&path)) {
		ZEPHIR_INIT_NVAR(&_1);
		ZVAL_STRING(&_1, "/");
	} else {
		ZEPHIR_CALL_METHOD(&_1, this_ptr, "filterpath", NULL, 0, &path);
		zephir_check_call_status();
	}
	zephir_update_property_zval(this_ptr, SL("path"), &_1);
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "filterquery", &_3, 0, &query);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("query"), &_2);
	ZEPHIR_CALL_METHOD(&_4, this_ptr, "filterquery", &_3, 0, &fragment);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("fragment"), &_4);
	if (Z_TYPE_P(auth) == IS_NULL) {
		ZEPHIR_INIT_NVAR(auth);
		object_init_ex(auth, consulate_http_auth_ce);
		ZEPHIR_CALL_METHOD(NULL, auth, "__construct", NULL, 33);
		zephir_check_call_status();
	}
	zephir_update_property_zval(this_ptr, SL("auth"), auth);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Uri, filterScheme) {

	zval *scheme_param = NULL, _0, _1, _2, _3, _4;
	zval scheme;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&scheme);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &scheme_param);

	zephir_get_strval(&scheme, scheme_param);


	ZEPHIR_INIT_VAR(&_1);
	zephir_fast_strtolower(&_1, &scheme);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "://");
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "");
	ZEPHIR_INIT_NVAR(&scheme);
	zephir_fast_str_replace(&scheme, &_2, &_3, &_1 TSRMLS_CC);
	if (ZEPHIR_IS_EMPTY(&scheme)) {
		ZEPHIR_INIT_NVAR(&scheme);
		ZVAL_STRING(&scheme, "http");
	}
	zephir_read_static_property_ce(&_4, consulate_http_uri_ce, SL("valid_schemes"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_fast_in_array(&scheme, &_4 TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(consulate_http_exception_ce, "Uri scheme must be one of: 'https', 'http'", "consulate/http/uri.zep", 101);
		return;
	}
	RETURN_CTOR(&scheme);

}

PHP_METHOD(Consulate_Http_Uri, filterAddress) {

	zend_bool _5$$3, _6$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS, _3$$3;
	zval *address_param = NULL, host, port, addressInfo, _0, _2, _4$$3, _7$$4;
	zval address, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&address);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&host);
	ZVAL_UNDEF(&port);
	ZVAL_UNDEF(&addressInfo);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_7$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &address_param);

	zephir_get_strval(&address, address_param);


	ZEPHIR_INIT_VAR(&addressInfo);
	zephir_fast_explode_str(&addressInfo, SL(":"), &address, LONG_MAX TSRMLS_CC);
	ZEPHIR_OBS_VAR(&_0);
	zephir_array_fetch_long(&_0, &addressInfo, 0, PH_NOISY, "consulate/http/uri.zep", 114 TSRMLS_CC);
	zephir_get_strval(&_1, &_0);
	ZEPHIR_CPY_WRT(&host, &_1);
	ZEPHIR_INIT_VAR(&_2);
	zephir_fast_strtolower(&_2, &host);
	zephir_update_property_zval(this_ptr, SL("host"), &_2);
	ZEPHIR_OBS_VAR(&port);
	if (zephir_array_isset_long_fetch(&port, &addressInfo, 1, 0 TSRMLS_CC)) {
		_3$$3 = zephir_get_intval(&port);
		ZEPHIR_INIT_NVAR(&port);
		ZVAL_LONG(&port, _3$$3);
		ZEPHIR_CALL_FUNCTION(&_4$$3, "is_integer", NULL, 58, &port);
		zephir_check_call_status();
		_5$$3 = zephir_is_true(&_4$$3);
		if (_5$$3) {
			_6$$3 = ZEPHIR_GE_LONG(&port, 1);
			if (_6$$3) {
				_6$$3 = ZEPHIR_LE_LONG(&port, 65535);
			}
			_5$$3 = _6$$3;
		}
		if (_5$$3) {
			ZEPHIR_INIT_ZVAL_NREF(_7$$4);
			ZVAL_LONG(&_7$$4, zephir_get_intval(&port));
			zephir_update_property_zval(this_ptr, SL("port"), &_7$$4);
		}
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Uri, filterPath) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, _0, _1;
	zval path;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &path_param);

	zephir_get_strval(&path, path_param);


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_NVAR(&_0);
	zephir_create_closure_ex(&_0, NULL, consulate_0__closure_ce, SL("__invoke"));
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "/(?:[^a-zA-Z0-9_\\-\\.~:@&=\\+\\$,\\/;%]+|%(?![A-Fa-f0-9]{2}))/");
	ZEPHIR_RETURN_CALL_FUNCTION("preg_replace_callback", NULL, 59, &_1, &_0, &path);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Http_Uri, filterQuery) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *query_param = NULL, _0, _1;
	zval query;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&query);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &query_param);

	zephir_get_strval(&query, query_param);


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_NVAR(&_0);
	zephir_create_closure_ex(&_0, NULL, consulate_1__closure_ce, SL("__invoke"));
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "/(?:[^a-zA-Z0-9_\\-\\.~!\\$&\\'\\(\\)\\*\\+,;=%:@\\/\\?]+|%(?![A-Fa-f0-9]{2}))/");
	ZEPHIR_RETURN_CALL_FUNCTION("preg_replace_callback", NULL, 59, &_1, &_0, &query);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Http_Uri, getUserInfo) {

	zval _1;
	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_OBS_VAR(&_0);
	zephir_read_property(&_0, this_ptr, SL("auth"), PH_NOISY_CC);
	zephir_get_strval(&_1, &_0);
	RETURN_CTOR(&_1);

}

PHP_METHOD(Consulate_Http_Uri, getUsername) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("auth"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "getusername", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Http_Uri, getPassword) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("auth"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "getpassword", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Http_Uri, getAuthority) {

	zval host, port, str, _0, _1, _3$$3, _4$$3, _5$$4;
	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&host);
	ZVAL_UNDEF(&port);
	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$4);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&str);
	ZVAL_STRING(&str, "");
	zephir_read_property(&_0, this_ptr, SL("host"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CPY_WRT(&host, &_0);
	zephir_read_property(&_0, this_ptr, SL("port"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CPY_WRT(&port, &_0);
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getuserinfo", &_2, 0);
	zephir_check_call_status();
	if (!(ZEPHIR_IS_EMPTY(&_1))) {
		ZEPHIR_CALL_METHOD(&_3$$3, this_ptr, "getuserinfo", &_2, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_4$$3);
		ZEPHIR_CONCAT_VS(&_4$$3, &_3$$3, "@");
		zephir_concat_self(&str, &_4$$3 TSRMLS_CC);
	}
	zephir_concat_self(&str, &host TSRMLS_CC);
	if (!(ZEPHIR_IS_EMPTY(&port))) {
		ZEPHIR_INIT_VAR(&_5$$4);
		ZEPHIR_CONCAT_SV(&_5$$4, ":", &port);
		zephir_concat_self(&str, &_5$$4 TSRMLS_CC);
	}
	RETURN_CCTOR(&str);

}

PHP_METHOD(Consulate_Http_Uri, __toString) {

	zval str, _0, _1, _2, _3, _4, _5, _7, _11, _8$$3, _9$$3, _10$$3, _12$$4, _13$$4, _14$$4;
	zephir_fcall_cache_entry *_6 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_12$$4);
	ZVAL_UNDEF(&_13$$4);
	ZVAL_UNDEF(&_14$$4);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("scheme"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getauthority", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	zephir_read_property(&_3, this_ptr, SL("path"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_4);
	ZVAL_STRING(&_4, "/");
	zephir_fast_trim(&_2, &_3, &_4, ZEPHIR_TRIM_LEFT TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_5);
	ZVAL_STRING(&_5, "%s://%s/%s");
	ZEPHIR_CALL_FUNCTION(&str, "sprintf", &_6, 10, &_5, &_0, &_1, &_2);
	zephir_check_call_status();
	zephir_read_property(&_7, this_ptr, SL("query"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_7))) {
		zephir_read_property(&_8$$3, this_ptr, SL("query"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_9$$3);
		ZVAL_STRING(&_9$$3, "%s?%s");
		ZEPHIR_CALL_FUNCTION(&_10$$3, "sprintf", &_6, 10, &_9$$3, &str, &_8$$3);
		zephir_check_call_status();
		ZEPHIR_CPY_WRT(&str, &_10$$3);
	}
	zephir_read_property(&_11, this_ptr, SL("fragment"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_11))) {
		zephir_read_property(&_12$$4, this_ptr, SL("fragment"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_13$$4);
		ZVAL_STRING(&_13$$4, "%s#%s");
		ZEPHIR_CALL_FUNCTION(&_14$$4, "sprintf", &_6, 10, &_13$$4, &str, &_12$$4);
		zephir_check_call_status();
		ZEPHIR_CPY_WRT(&str, &_14$$4);
	}
	RETURN_CCTOR(&str);

}

PHP_METHOD(Consulate_Http_Uri, getBaseUrl) {

	zval _0, _1, _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("scheme"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getauthority", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "%s://%s");
	ZEPHIR_RETURN_CALL_FUNCTION("sprintf", NULL, 10, &_2, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

void zephir_init_static_properties_Consulate_Http_Uri(TSRMLS_D) {

	zval _1;
	zval _0;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 2, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "http");
	zephir_array_fast_append(&_0, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "https");
	zephir_array_fast_append(&_0, &_1);
	zend_update_static_property(consulate_http_uri_ce, ZEND_STRL("valid_schemes"), &_0);
	ZEPHIR_MM_RESTORE();

}

