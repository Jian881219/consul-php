
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/fcall.h"
#include "kernel/string.h"
#include "kernel/exception.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Consulate_Http_Response) {

	ZEPHIR_REGISTER_CLASS(Consulate\\Http, Response, consulate, http_response, consulate_http_response_method_entry, 0);

	zend_declare_property_null(consulate_http_response_ce, SL("rawHeaders"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(consulate_http_response_ce, SL("headers"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_response_ce, SL("body"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_response_ce, SL("metadata"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_response_ce, SL("statusCode"), ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_http_response_ce->create_object = zephir_init_properties_Consulate_Http_Response;
	return SUCCESS;

}

PHP_METHOD(Consulate_Http_Response, getHeaders) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "headers");

}

PHP_METHOD(Consulate_Http_Response, getBody) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "body");

}

PHP_METHOD(Consulate_Http_Response, getMetadata) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "metadata");

}

PHP_METHOD(Consulate_Http_Response, getStatusCode) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "statusCode");

}

PHP_METHOD(Consulate_Http_Response, __construct) {

	zend_bool _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval headers;
	zval *body, body_sub, *headers_param = NULL, *metadata = NULL, metadata_sub, __$null, _1, _2$$3, _3$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&body_sub);
	ZVAL_UNDEF(&metadata_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&headers);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &body, &headers_param, &metadata);

	zephir_get_strval(&headers, headers_param);
	if (!metadata) {
		metadata = &metadata_sub;
		metadata = &__$null;
	}


	zephir_update_property_zval(this_ptr, SL("body"), body);
	zephir_update_property_zval(this_ptr, SL("rawHeaders"), &headers);
	zephir_update_property_zval(this_ptr, SL("metadata"), metadata);
	_0 = !(ZEPHIR_IS_EMPTY(metadata));
	if (_0) {
		ZEPHIR_OBS_VAR(&_1);
		zephir_array_fetch_string(&_1, metadata, SL("http_code"), PH_NOISY, "consulate/http/response.zep", 27 TSRMLS_CC);
		_0 = !(ZEPHIR_IS_EMPTY(&_1));
	}
	if (_0) {
		ZEPHIR_OBS_VAR(&_2$$3);
		zephir_array_fetch_string(&_2$$3, metadata, SL("http_code"), PH_NOISY, "consulate/http/response.zep", 28 TSRMLS_CC);
		ZEPHIR_INIT_ZVAL_NREF(_3$$3);
		ZVAL_LONG(&_3$$3, zephir_get_intval(&_2$$3));
		zephir_update_property_zval(this_ptr, SL("statusCode"), &_3$$3);
	} else {
		ZEPHIR_CALL_METHOD(NULL, this_ptr, "parsecode", NULL, 55, &headers);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "parseheaders", NULL, 56, &headers);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Response, parseCode) {

	zend_bool _3;
	zval *headers_param = NULL, pos, info, _0, _1, _2, _4, _5, _6;
	zval headers;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&pos);
	ZVAL_UNDEF(&info);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &headers_param);

	zephir_get_strval(&headers, headers_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "\r\n");
	ZEPHIR_INIT_VAR(&pos);
	zephir_fast_strpos(&pos, &headers, &_0, 0 );
	if (ZEPHIR_IS_FALSE_IDENTICAL(&pos)) {
		ZEPHIR_INIT_NVAR(&pos);
		ZVAL_LONG(&pos, zephir_fast_strlen_ev(&headers));
	}
	ZVAL_LONG(&_1, 0);
	ZEPHIR_INIT_VAR(&_2);
	zephir_substr(&_2, &headers, 0 , zephir_get_intval(&pos), 0);
	ZEPHIR_INIT_VAR(&info);
	zephir_fast_explode_str(&info, SL(" "), &_2, LONG_MAX TSRMLS_CC);
	_3 = zephir_fast_count_int(&info TSRMLS_CC) < 2;
	if (!(_3)) {
		zephir_array_fetch_long(&_4, &info, 1, PH_NOISY | PH_READONLY, "consulate/http/response.zep", 46 TSRMLS_CC);
		_3 = !(zephir_is_numeric(&_4));
	}
	if (_3) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(consulate_http_exception_ce, "Unable to parse response code from HTTP response due to malformed response", "consulate/http/response.zep", 47);
		return;
	}
	ZEPHIR_OBS_VAR(&_5);
	zephir_array_fetch_long(&_5, &info, 1, PH_NOISY, "consulate/http/response.zep", 49 TSRMLS_CC);
	ZEPHIR_INIT_ZVAL_NREF(_6);
	ZVAL_LONG(&_6, zephir_get_intval(&_5));
	zephir_update_property_zval(this_ptr, SL("statusCode"), &_6);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Response, parseHeaders) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *headers_param = NULL, rawHeaders, header, headerInfo, key, value, _0, _1, _2, *_3, _4, _5$$4, _6$$4, _7$$4, _8$$5, _9$$8, _10$$8, _11$$8, _12$$9;
	zval headers;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&rawHeaders);
	ZVAL_UNDEF(&header);
	ZVAL_UNDEF(&headerInfo);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$8);
	ZVAL_UNDEF(&_10$$8);
	ZVAL_UNDEF(&_11$$8);
	ZVAL_UNDEF(&_12$$9);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &headers_param);

	zephir_get_strval(&headers, headers_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "/(\r|\n)+/");
	ZVAL_LONG(&_1, -1);
	ZVAL_LONG(&_2, 1);
	ZEPHIR_CALL_FUNCTION(&rawHeaders, "preg_split", NULL, 57, &_0, &headers, &_1, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_0);
	array_init(&_0);
	zephir_update_property_zval(this_ptr, SL("headers"), &_0);
	zephir_is_iterable(&rawHeaders, 0, "consulate/http/response.zep", 72);
	if (Z_TYPE_P(&rawHeaders) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&rawHeaders), _3)
		{
			ZEPHIR_INIT_NVAR(&header);
			ZVAL_COPY(&header, _3);
			ZEPHIR_INIT_NVAR(&headerInfo);
			zephir_fast_explode_str(&headerInfo, SL(":"), &header, 2  TSRMLS_CC);
			if (zephir_fast_count_int(&headerInfo TSRMLS_CC) == 2) {
				zephir_array_fetch_long(&_5$$4, &headerInfo, 0, PH_NOISY | PH_READONLY, "consulate/http/response.zep", 62 TSRMLS_CC);
				ZEPHIR_INIT_NVAR(&key);
				zephir_fast_trim(&key, &_5$$4, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
				zephir_array_fetch_long(&_6$$4, &headerInfo, 1, PH_NOISY | PH_READONLY, "consulate/http/response.zep", 63 TSRMLS_CC);
				ZEPHIR_INIT_NVAR(&value);
				zephir_fast_trim(&value, &_6$$4, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
				zephir_read_property(&_7$$4, this_ptr, SL("headers"), PH_NOISY_CC | PH_READONLY);
				if (zephir_array_key_exists(&_7$$4, &key TSRMLS_CC)) {
					ZEPHIR_INIT_LNVAR(_8$$5);
					ZEPHIR_CONCAT_SV(&_8$$5, ",", &value);
					zephir_update_property_array(this_ptr, SL("headers"), &key, &_8$$5);
					ZEPHIR_INIT_NVAR(&_8$$5);
				} else {
					zephir_update_property_array(this_ptr, SL("headers"), &key, &value);
				}
			}
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &rawHeaders, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_4, &rawHeaders, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_4)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&header, &rawHeaders, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&headerInfo);
				zephir_fast_explode_str(&headerInfo, SL(":"), &header, 2  TSRMLS_CC);
				if (zephir_fast_count_int(&headerInfo TSRMLS_CC) == 2) {
					zephir_array_fetch_long(&_9$$8, &headerInfo, 0, PH_NOISY | PH_READONLY, "consulate/http/response.zep", 62 TSRMLS_CC);
					ZEPHIR_INIT_NVAR(&key);
					zephir_fast_trim(&key, &_9$$8, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
					zephir_array_fetch_long(&_10$$8, &headerInfo, 1, PH_NOISY | PH_READONLY, "consulate/http/response.zep", 63 TSRMLS_CC);
					ZEPHIR_INIT_NVAR(&value);
					zephir_fast_trim(&value, &_10$$8, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
					zephir_read_property(&_11$$8, this_ptr, SL("headers"), PH_NOISY_CC | PH_READONLY);
					if (zephir_array_key_exists(&_11$$8, &key TSRMLS_CC)) {
						ZEPHIR_INIT_LNVAR(_12$$9);
						ZEPHIR_CONCAT_SV(&_12$$9, ",", &value);
						zephir_update_property_array(this_ptr, SL("headers"), &key, &_12$$9);
						ZEPHIR_INIT_NVAR(&_12$$9);
					} else {
						zephir_update_property_array(this_ptr, SL("headers"), &key, &value);
					}
				}
			ZEPHIR_CALL_METHOD(NULL, &rawHeaders, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&header);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Response, __toString) {

	zval _1;
	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_OBS_VAR(&_0);
	zephir_read_property(&_0, this_ptr, SL("body"), PH_NOISY_CC);
	zephir_get_strval(&_1, &_0);
	RETURN_CTOR(&_1);

}

zend_object *zephir_init_properties_Consulate_Http_Response(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("headers"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("headers"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

