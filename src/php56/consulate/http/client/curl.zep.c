
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

	zend_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_GET"), "GET" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_POST"), "POST" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_PUT"), "PUT" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_HEAD"), "HEAD" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_DELETE"), "DELETE" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_PATCH"), "PATCH" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_OPTIONS"), "OPTIONS" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_http_client_curl_ce, SL("METHOD_TRACE"), "TRACE" TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Http_Client_Curl, __construct) {

	zval *_3;
	zval *_0 = NULL, *_1 = NULL, *_2;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_FUNCTION(&_0, "curl_init", NULL, 38);
	zephir_check_call_status();
	zephir_update_property_this(getThis(), SL("_handler"), _0 TSRMLS_CC);
	ZEPHIR_CALL_FUNCTION(&_1, "curl_version", NULL, 39);
	zephir_check_call_status();
	zephir_update_property_this(getThis(), SL("version"), _1 TSRMLS_CC);
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("_handler"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(_3);
	zephir_create_array(_3, 9, 0 TSRMLS_CC);
	zephir_array_update_long(&_3, 19913, &ZEPHIR_GLOBAL(global_true), PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&_3, 58, &ZEPHIR_GLOBAL(global_true), PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&_3, 52, &ZEPHIR_GLOBAL(global_true), PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	add_index_long(_3, 68, 20);
	add_index_long(_3, 181, (1 | 2));
	add_index_long(_3, 182, (1 | 2));
	zephir_array_update_long(&_3, 42, &ZEPHIR_GLOBAL(global_true), PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	add_index_long(_3, 78, 30);
	add_index_long(_3, 13, 30);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 40, _2, _3);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Client_Curl, setUrl) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *url_param = NULL, *_0;
	zval *url = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &url_param);

	zephir_get_strval(url, url_param);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_LONG(_0, 10002);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setup", NULL, 0, _0, url);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Http_Client_Curl, setMethod) {

	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *method_param = NULL, *_0, *_1, *_3$$3, *_4$$3;
	zval *method = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &method_param);

	zephir_get_strval(method, method_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_fast_strtoupper(_0, method);
	zephir_get_strval(method, _0);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, 10036);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", &_2, 0, _1, method);
	zephir_check_call_status();
	if (ZEPHIR_IS_STRING(method, "HEAD")) {
		ZEPHIR_INIT_VAR(_3$$3);
		ZVAL_LONG(_3$$3, 44);
		ZEPHIR_INIT_VAR(_4$$3);
		ZVAL_BOOL(_4$$3, 1);
		ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", &_2, 0, _3$$3, _4$$3);
		zephir_check_call_status();
	}
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, __destruct) {

	zval *_0;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_handler"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 41, _0);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Client_Curl, setup) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name, *value, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name, &value);



	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_handler"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", NULL, 42, _0, name, value);
	zephir_check_call_status();
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, setBasicAuth) {

	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *username_param = NULL, *password_param = NULL, *_0 = NULL, *_1, _3, *_4 = NULL;
	zval *username = NULL, *password = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &username_param, &password_param);

	if (!username_param) {
		ZEPHIR_INIT_VAR(username);
		ZVAL_STRING(username, "", 1);
	} else {
		zephir_get_strval(username, username_param);
	}
	if (!password_param) {
		ZEPHIR_INIT_VAR(password);
		ZVAL_STRING(password, "", 1);
	} else {
		zephir_get_strval(password, password_param);
	}


	ZEPHIR_INIT_VAR(_0);
	ZVAL_LONG(_0, 107);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, 1);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", &_2, 0, _0, _1);
	zephir_check_call_status();
	ZEPHIR_SINIT_VAR(_3);
	ZVAL_STRING(&_3, "%s:%s", 0);
	ZEPHIR_CALL_FUNCTION(&_4, "sprintf", NULL, 10, &_3, username, password);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 10005);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", &_2, 0, _0, _4);
	zephir_check_call_status();
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, setHeaders) {

	HashTable *_2$$3;
	HashPosition _1$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_7 = NULL;
	zval *fields_param = NULL, *_0 = NULL, *headers$$3 = NULL, *field$$3 = NULL, *value$$3 = NULL, **_3$$3, _8$$3, *_9$$3 = NULL, *_10$$3, *_4$$4 = NULL, _5$$4 = zval_used_for_init, *_6$$4 = NULL;
	zval *fields = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fields_param);

	zephir_get_arrval(fields, fields_param);


	if (zephir_fast_count_int(fields TSRMLS_CC) > 0) {
		ZEPHIR_INIT_VAR(headers$$3);
		array_init(headers$$3);
		zephir_is_iterable(fields, &_2$$3, &_1$$3, 0, 0, "consulate/http/client/curl.zep", 82);
		for (
		  ; zend_hash_get_current_data_ex(_2$$3, (void**) &_3$$3, &_1$$3) == SUCCESS
		  ; zend_hash_move_forward_ex(_2$$3, &_1$$3)
		) {
			ZEPHIR_GET_HMKEY(field$$3, _2$$3, _1$$3);
			ZEPHIR_GET_HVALUE(value$$3, _3$$3);
			ZEPHIR_INIT_NVAR(_4$$4);
			zephir_fast_join_str(_4$$4, SL(","), value$$3 TSRMLS_CC);
			ZEPHIR_SINIT_NVAR(_5$$4);
			ZVAL_STRING(&_5$$4, "%s:%s", 0);
			ZEPHIR_CALL_FUNCTION(&_6$$4, "sprintf", &_7, 10, &_5$$4, field$$3, _4$$4);
			zephir_check_call_status();
			zephir_array_append(&headers$$3, _6$$4, PH_SEPARATE, "consulate/http/client/curl.zep", 80);
		}
		ZEPHIR_SINIT_VAR(_8$$3);
		ZVAL_LONG(&_8$$3, 2);
		ZEPHIR_CALL_FUNCTION(&_9$$3, "array_unique", NULL, 43, headers$$3, &_8$$3);
		zephir_check_call_status();
		ZEPHIR_CPY_WRT(headers$$3, _9$$3);
		ZEPHIR_INIT_VAR(_10$$3);
		ZVAL_LONG(_10$$3, 10023);
		ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", NULL, 0, _10$$3, headers$$3);
		zephir_check_call_status();
	}
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, setBody) {

	zval *_1$$4 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *body, *context = NULL, *_2, _0$$3;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &body);



	if (Z_TYPE_P(body) == IS_RESOURCE) {
		ZEPHIR_SINIT_VAR(_0$$3);
		ZVAL_LONG(&_0$$3, 0);
		ZEPHIR_CALL_FUNCTION(NULL, "fseek", NULL, 44, body, &_0$$3);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(&context, "stream_get_contents", NULL, 45, body);
		zephir_check_call_status();
	} else if (Z_TYPE_P(body) == IS_OBJECT) {
		zephir_get_arrval(_1$$4, body);
		ZEPHIR_CPY_WRT(context, _1$$4);
	} else {
		ZEPHIR_CPY_WRT(context, body);
	}
	ZEPHIR_INIT_VAR(_2);
	ZVAL_LONG(_2, 10015);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setup", NULL, 0, _2, context);
	zephir_check_call_status();
	RETURN_THIS();

}

PHP_METHOD(Consulate_Http_Client_Curl, send) {

	zval *result = NULL, *info = NULL, *response = NULL, *body = NULL, *headers = NULL, *_0, *_8, *_9, _10, *_1$$3, *_2$$3, *_3$$3 = NULL, *_4$$3, *_5$$3 = NULL, _6$$3, *_7$$3 = NULL;
	zephir_fcall_cache_entry *_11 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_handler"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(&result, "curl_exec", NULL, 46, _0);
	zephir_check_call_status();
	if (ZEPHIR_IS_FALSE_IDENTICAL(result)) {
		ZEPHIR_INIT_VAR(_1$$3);
		object_init_ex(_1$$3, consulate_http_client_exception_ce);
		_2$$3 = zephir_fetch_nproperty_this(this_ptr, SL("_handler"), PH_NOISY_CC);
		ZEPHIR_CALL_FUNCTION(&_3$$3, "curl_error", NULL, 47, _2$$3);
		zephir_check_call_status();
		_4$$3 = zephir_fetch_nproperty_this(this_ptr, SL("_handler"), PH_NOISY_CC);
		ZEPHIR_CALL_FUNCTION(&_5$$3, "curl_errno", NULL, 48, _4$$3);
		zephir_check_call_status();
		ZEPHIR_SINIT_VAR(_6$$3);
		ZVAL_STRING(&_6$$3, "Unable connect: %s (Code: %s)", 0);
		ZEPHIR_CALL_FUNCTION(&_7$$3, "sprintf", NULL, 10, &_6$$3, _3$$3, _5$$3);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, _1$$3, "__construct", NULL, 11, _7$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(_1$$3, "consulate/http/client/curl.zep", 109 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	_8 = zephir_fetch_nproperty_this(this_ptr, SL("_handler"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(&info, "curl_getinfo", NULL, 49, _8);
	zephir_check_call_status();
	zephir_array_fetch_string(&_9, info, SL("redirect_count"), PH_NOISY | PH_READONLY, "consulate/http/client/curl.zep", 114 TSRMLS_CC);
	ZEPHIR_SINIT_VAR(_10);
	ZVAL_LONG(&_10, (2 + zephir_get_numberval(_9)));
	ZEPHIR_INIT_VAR(response);
	zephir_fast_explode_str(response, SL("\r\n\r\n"), result, zephir_get_intval(&_10)  TSRMLS_CC);
	ZEPHIR_MAKE_REF(response);
	ZEPHIR_CALL_FUNCTION(&body, "array_pop", &_11, 50, response);
	ZEPHIR_UNREF(response);
	zephir_check_call_status();
	ZEPHIR_MAKE_REF(response);
	ZEPHIR_CALL_FUNCTION(&headers, "array_pop", &_11, 50, response);
	ZEPHIR_UNREF(response);
	zephir_check_call_status();
	object_init_ex(return_value, consulate_http_response_ce);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 51, body, headers, info);
	zephir_check_call_status();
	RETURN_MM();

}

