
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/object.h"
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/string.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Consulate_Http_Client_Curl) {

	ZEPHIR_REGISTER_CLASS(Consulate\\Http\\Client, Curl, consulate, http_client_curl, consulate_http_client_curl_method_entry, 0);

	zend_declare_property_null(consulate_http_client_curl_ce, SL("_handler"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(consulate_http_client_curl_ce, SL("version"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zephir_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_GET"), "GET");

	zephir_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_POST"), "POST");

	zephir_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_PUT"), "PUT");

	zephir_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_HEAD"), "HEAD");

	zephir_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_DELETE"), "DELETE");

	zephir_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_PATCH"), "PATCH");

	zephir_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_OPTIONS"), "OPTIONS");

	zephir_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_TRACE"), "TRACE");

	return SUCCESS;

}

PHP_METHOD(Consulate_Http_Client_Curl, __construct) {

	zval _3;
	zval __$true, _0, _1, _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_FUNCTION(&_0, "curl_init", NULL, 37);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("_handler"), &_0);
	ZEPHIR_CALL_FUNCTION(&_1, "curl_version", NULL, 38);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("version"), &_1);
	zephir_read_property(&_2, this_ptr, SL("_handler"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	zephir_create_array(&_3, 9, 0 TSRMLS_CC);
	zephir_array_update_long(&_3, 19913, &__$true, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&_3, 58, &__$true, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&_3, 52, &__$true, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	add_index_long(&_3, 68, 20);
	add_index_long(&_3, 181, (1 | 2));
	add_index_long(&_3, 182, (1 | 2));
	zephir_array_update_long(&_3, 42, &__$true, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	add_index_long(&_3, 78, 30);
	add_index_long(&_3, 13, 30);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 39, &_2, &_3);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Client_Curl, setUrl) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *url_param = NULL, _0;
	zval url;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &url_param);

	zephir_get_strval(&url, url_param);


	ZVAL_LONG(&_0, 10002);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setup", NULL, 0, &_0, &url);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Http_Client_Curl, setMethod) {

	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *method_param = NULL, _0, _1, _3$$3, _4$$3;
	zval method;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &method_param);

	zephir_get_strval(&method, method_param);


	ZEPHIR_INIT_VAR(&_0);
	zephir_fast_strtoupper(&_0, &method);
	zephir_get_strval(&method, &_0);
	ZVAL_LONG(&_1, 10036);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", &_2, 0, &_1, &method);
	zephir_check_call_status();
	if (ZEPHIR_IS_STRING(&method, "HEAD")) {
		ZVAL_LONG(&_3$$3, 44);
		ZVAL_BOOL(&_4$$3, 1);
		ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", &_2, 0, &_3$$3, &_4$$3);
		zephir_check_call_status();
	}
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, __destruct) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("_handler"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 40, &_0);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Client_Curl, setup) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name, name_sub, *value, value_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name, &value);



	zephir_read_property(&_0, this_ptr, SL("_handler"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", NULL, 41, &_0, name, value);
	zephir_check_call_status();
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, setBasicAuth) {

	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *username_param = NULL, *password_param = NULL, _0, _1, _3, _4;
	zval username, password;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&username);
	ZVAL_UNDEF(&password);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &username_param, &password_param);

	if (!username_param) {
		ZEPHIR_INIT_VAR(&username);
		ZVAL_STRING(&username, "");
	} else {
		zephir_get_strval(&username, username_param);
	}
	if (!password_param) {
		ZEPHIR_INIT_VAR(&password);
		ZVAL_STRING(&password, "");
	} else {
		zephir_get_strval(&password, password_param);
	}


	ZVAL_LONG(&_0, 107);
	ZVAL_LONG(&_1, 1);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", &_2, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "%s:%s");
	ZEPHIR_CALL_FUNCTION(&_4, "sprintf", NULL, 10, &_3, &username, &password);
	zephir_check_call_status();
	ZVAL_LONG(&_0, 10005);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", &_2, 0, &_0, &_4);
	zephir_check_call_status();
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, setHeaders) {

	zend_string *_4$$3;
	zend_ulong _3$$3;
	zephir_fcall_cache_entry *_8 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fields_param = NULL, _0, headers$$3, field$$3, value$$3, *_1$$3, _2$$3, _12$$3, _13$$3, _5$$4, _6$$4, _7$$4, _9$$5, _10$$5, _11$$5;
	zval fields;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fields);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&headers$$3);
	ZVAL_UNDEF(&field$$3);
	ZVAL_UNDEF(&value$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_12$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_11$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fields_param);

	zephir_get_arrval(&fields, fields_param);


	if (zephir_fast_count_int(&fields TSRMLS_CC) > 0) {
		ZEPHIR_INIT_VAR(&headers$$3);
		array_init(&headers$$3);
		zephir_is_iterable(&fields, 0, "consulate/http/client/curl.zep", 82);
		if (Z_TYPE_P(&fields) == IS_ARRAY) {
			ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&fields), _3$$3, _4$$3, _1$$3)
			{
				ZEPHIR_INIT_NVAR(&field$$3);
				if (_4$$3 != NULL) { 
					ZVAL_STR_COPY(&field$$3, _4$$3);
				} else {
					ZVAL_LONG(&field$$3, _3$$3);
				}
				ZEPHIR_INIT_NVAR(&value$$3);
				ZVAL_COPY(&value$$3, _1$$3);
				ZEPHIR_INIT_NVAR(&_5$$4);
				zephir_fast_join_str(&_5$$4, SL(","), &value$$3 TSRMLS_CC);
				ZEPHIR_INIT_NVAR(&_6$$4);
				ZVAL_STRING(&_6$$4, "%s:%s");
				ZEPHIR_CALL_FUNCTION(&_7$$4, "sprintf", &_8, 10, &_6$$4, &field$$3, &_5$$4);
				zephir_check_call_status();
				zephir_array_append(&headers$$3, &_7$$4, PH_SEPARATE, "consulate/http/client/curl.zep", 80);
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &fields, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_2$$3, &fields, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_2$$3)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&field$$3, &fields, "key", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&value$$3, &fields, "current", NULL, 0);
				zephir_check_call_status();
					ZEPHIR_INIT_NVAR(&_9$$5);
					zephir_fast_join_str(&_9$$5, SL(","), &value$$3 TSRMLS_CC);
					ZEPHIR_INIT_NVAR(&_10$$5);
					ZVAL_STRING(&_10$$5, "%s:%s");
					ZEPHIR_CALL_FUNCTION(&_11$$5, "sprintf", &_8, 10, &_10$$5, &field$$3, &_9$$5);
					zephir_check_call_status();
					zephir_array_append(&headers$$3, &_11$$5, PH_SEPARATE, "consulate/http/client/curl.zep", 80);
				ZEPHIR_CALL_METHOD(NULL, &fields, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&value$$3);
		ZEPHIR_INIT_NVAR(&field$$3);
		ZVAL_LONG(&_12$$3, 2);
		ZEPHIR_CALL_FUNCTION(&_13$$3, "array_unique", NULL, 42, &headers$$3, &_12$$3);
		zephir_check_call_status();
		ZEPHIR_CPY_WRT(&headers$$3, &_13$$3);
		ZVAL_LONG(&_12$$3, 10023);
		ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", NULL, 0, &_12$$3, &headers$$3);
		zephir_check_call_status();
	}
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, setBody) {

	zval _1$$4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *body, body_sub, context, _2, _0$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&body_sub);
	ZVAL_UNDEF(&context);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &body);



	if (Z_TYPE_P(body) == IS_RESOURCE) {
		ZVAL_LONG(&_0$$3, 0);
		ZEPHIR_CALL_FUNCTION(NULL, "fseek", NULL, 43, body, &_0$$3);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(&context, "stream_get_contents", NULL, 44, body);
		zephir_check_call_status();
	} else if (Z_TYPE_P(body) == IS_OBJECT) {
		zephir_get_arrval(&_1$$4, body);
		ZEPHIR_CPY_WRT(&context, &_1$$4);
	} else {
		ZEPHIR_CPY_WRT(&context, body);
	}
	ZVAL_LONG(&_2, 10015);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", NULL, 0, &_2, &context);
	zephir_check_call_status();
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, send) {

	zval result, info, response, body, headers, _0, _8, _9, _10, _1$$3, _2$$3, _3$$3, _4$$3, _5$$3, _6$$3, _7$$3;
	zephir_fcall_cache_entry *_11 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&info);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&body);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("_handler"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&result, "curl_exec", NULL, 45, &_0);
	zephir_check_call_status();
	if (ZEPHIR_IS_FALSE_IDENTICAL(&result)) {
		ZEPHIR_INIT_VAR(&_1$$3);
		object_init_ex(&_1$$3, consulate_http_client_exception_ce);
		zephir_read_property(&_2$$3, this_ptr, SL("_handler"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_FUNCTION(&_3$$3, "curl_error", NULL, 46, &_2$$3);
		zephir_check_call_status();
		zephir_read_property(&_4$$3, this_ptr, SL("_handler"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_FUNCTION(&_5$$3, "curl_errno", NULL, 47, &_4$$3);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_6$$3);
		ZVAL_STRING(&_6$$3, "Unable connect: %s (Code: %s)");
		ZEPHIR_CALL_FUNCTION(&_7$$3, "sprintf", NULL, 10, &_6$$3, &_3$$3, &_5$$3);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, &_1$$3, "__construct", NULL, 11, &_7$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_1$$3, "consulate/http/client/curl.zep", 109 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	zephir_read_property(&_8, this_ptr, SL("_handler"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&info, "curl_getinfo", NULL, 48, &_8);
	zephir_check_call_status();
	zephir_array_fetch_string(&_9, &info, SL("redirect_count"), PH_NOISY | PH_READONLY, "consulate/http/client/curl.zep", 114 TSRMLS_CC);
	ZVAL_LONG(&_10, (2 + zephir_get_numberval(&_9)));
	ZEPHIR_INIT_VAR(&response);
	zephir_fast_explode_str(&response, SL("\r\n\r\n"), &result, zephir_get_intval(&_10)  TSRMLS_CC);
	ZEPHIR_MAKE_REF(&response);
	ZEPHIR_CALL_FUNCTION(&body, "array_pop", &_11, 49, &response);
	ZEPHIR_UNREF(&response);
	zephir_check_call_status();
	ZEPHIR_MAKE_REF(&response);
	ZEPHIR_CALL_FUNCTION(&headers, "array_pop", &_11, 49, &response);
	ZEPHIR_UNREF(&response);
	zephir_check_call_status();
	object_init_ex(return_value, consulate_http_response_ce);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 50, &body, &headers, &info);
	zephir_check_call_status();
	RETURN_MM();

}

