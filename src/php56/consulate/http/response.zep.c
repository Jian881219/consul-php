
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

	

	RETURN_MEMBER(getThis(), "headers");

}

PHP_METHOD(Consulate_Http_Response, getBody) {

	

	RETURN_MEMBER(getThis(), "body");

}

PHP_METHOD(Consulate_Http_Response, getMetadata) {

	

	RETURN_MEMBER(getThis(), "metadata");

}

PHP_METHOD(Consulate_Http_Response, getStatusCode) {

	

	RETURN_MEMBER(getThis(), "statusCode");

}

PHP_METHOD(Consulate_Http_Response, __construct) {

	zend_bool _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *headers = NULL;
	zval *body, *headers_param = NULL, *metadata = NULL, *_1, *_2$$3, *_3$$3;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &body, &headers_param, &metadata);

	zephir_get_strval(headers, headers_param);
	if (!metadata) {
		metadata = ZEPHIR_GLOBAL(global_null);
	}


	zephir_update_property_this(getThis(), SL("body"), body TSRMLS_CC);
	zephir_update_property_this(getThis(), SL("rawHeaders"), headers TSRMLS_CC);
	zephir_update_property_this(getThis(), SL("metadata"), metadata TSRMLS_CC);
	_0 = !(ZEPHIR_IS_EMPTY(metadata));
	if (_0) {
		ZEPHIR_OBS_VAR(_1);
		zephir_array_fetch_string(&_1, metadata, SL("http_code"), PH_NOISY, "consulate/http/response.zep", 27 TSRMLS_CC);
		_0 = !(ZEPHIR_IS_EMPTY(_1));
	}
	if (_0) {
		ZEPHIR_OBS_VAR(_2$$3);
		zephir_array_fetch_string(&_2$$3, metadata, SL("http_code"), PH_NOISY, "consulate/http/response.zep", 28 TSRMLS_CC);
		ZEPHIR_INIT_ZVAL_NREF(_3$$3);
		ZVAL_LONG(_3$$3, zephir_get_intval(_2$$3));
		zephir_update_property_this(getThis(), SL("statusCode"), _3$$3 TSRMLS_CC);
	} else {
		ZEPHIR_CALL_METHOD(NULL, this_ptr, "parsecode", NULL, 56, headers);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "parseheaders", NULL, 57, headers);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Response, parseCode) {

	zend_bool _3;
	zval *headers_param = NULL, *pos = NULL, *info = NULL, _0, _1, *_2, *_4, *_5, *_6;
	zval *headers = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &headers_param);

	zephir_get_strval(headers, headers_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_STRING(&_0, "\r\n", 0);
	ZEPHIR_INIT_VAR(pos);
	zephir_fast_strpos(pos, headers, &_0, 0 );
	if (ZEPHIR_IS_FALSE_IDENTICAL(pos)) {
		ZEPHIR_INIT_NVAR(pos);
		ZVAL_LONG(pos, zephir_fast_strlen_ev(headers));
	}
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_LONG(&_1, 0);
	ZEPHIR_INIT_VAR(_2);
	zephir_substr(_2, headers, 0 , zephir_get_intval(pos), 0);
	ZEPHIR_INIT_VAR(info);
	zephir_fast_explode_str(info, SL(" "), _2, LONG_MAX TSRMLS_CC);
	_3 = zephir_fast_count_int(info TSRMLS_CC) < 2;
	if (!(_3)) {
		zephir_array_fetch_long(&_4, info, 1, PH_NOISY | PH_READONLY, "consulate/http/response.zep", 46 TSRMLS_CC);
		_3 = !(zephir_is_numeric(_4));
	}
	if (_3) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(consulate_http_exception_ce, "Unable to parse response code from HTTP response due to malformed response", "consulate/http/response.zep", 47);
		return;
	}
	ZEPHIR_OBS_VAR(_5);
	zephir_array_fetch_long(&_5, info, 1, PH_NOISY, "consulate/http/response.zep", 49 TSRMLS_CC);
	ZEPHIR_INIT_ZVAL_NREF(_6);
	ZVAL_LONG(_6, zephir_get_intval(_5));
	zephir_update_property_this(getThis(), SL("statusCode"), _6 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Response, parseHeaders) {

	HashTable *_5;
	HashPosition _4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *headers_param = NULL, *rawHeaders = NULL, *header = NULL, *headerInfo = NULL, *key = NULL, *value = NULL, _0, _1, _2, *_3, **_6, *_7$$4, *_8$$4, *_9$$4, *_10$$5 = NULL;
	zval *headers = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &headers_param);

	zephir_get_strval(headers, headers_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_STRING(&_0, "/(\r|\n)+/", 0);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_LONG(&_1, -1);
	ZEPHIR_SINIT_VAR(_2);
	ZVAL_LONG(&_2, 1);
	ZEPHIR_CALL_FUNCTION(&rawHeaders, "preg_split", NULL, 58, &_0, headers, &_1, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(_3);
	array_init(_3);
	zephir_update_property_this(getThis(), SL("headers"), _3 TSRMLS_CC);
	zephir_is_iterable(rawHeaders, &_5, &_4, 0, 0, "consulate/http/response.zep", 72);
	for (
	  ; zend_hash_get_current_data_ex(_5, (void**) &_6, &_4) == SUCCESS
	  ; zend_hash_move_forward_ex(_5, &_4)
	) {
		ZEPHIR_GET_HVALUE(header, _6);
		ZEPHIR_INIT_NVAR(headerInfo);
		zephir_fast_explode_str(headerInfo, SL(":"), header, 2  TSRMLS_CC);
		if (zephir_fast_count_int(headerInfo TSRMLS_CC) == 2) {
			zephir_array_fetch_long(&_7$$4, headerInfo, 0, PH_NOISY | PH_READONLY, "consulate/http/response.zep", 62 TSRMLS_CC);
			ZEPHIR_INIT_NVAR(key);
			zephir_fast_trim(key, _7$$4, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
			zephir_array_fetch_long(&_8$$4, headerInfo, 1, PH_NOISY | PH_READONLY, "consulate/http/response.zep", 63 TSRMLS_CC);
			ZEPHIR_INIT_NVAR(value);
			zephir_fast_trim(value, _8$$4, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
			_9$$4 = zephir_fetch_nproperty_this(this_ptr, SL("headers"), PH_NOISY_CC);
			if (zephir_array_key_exists(_9$$4, key TSRMLS_CC)) {
				ZEPHIR_INIT_LNVAR(_10$$5);
				ZEPHIR_CONCAT_SV(_10$$5, ",", value);
				zephir_update_property_array(this_ptr, SL("headers"), key, _10$$5 TSRMLS_CC);
			} else {
				zephir_update_property_array(this_ptr, SL("headers"), key, value TSRMLS_CC);
			}
		}
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Response, __toString) {

	zval *_1 = NULL;
	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_OBS_VAR(_0);
	zephir_read_property_this(&_0, this_ptr, SL("body"), PH_NOISY_CC);
	zephir_get_strval(_1, _0);
	RETURN_CTOR(_1);

}

zend_object_value zephir_init_properties_Consulate_Http_Response(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_1$$3;

		ZEPHIR_MM_GROW();
	
	{
		zval zthis       = zval_used_for_init;
		zval *this_ptr   = &zthis;
		zend_object* obj = ecalloc(1, sizeof(zend_object));
		zend_object_value retval;

		zend_object_std_init(obj, class_type TSRMLS_CC);
		object_properties_init(obj, class_type);
		retval.handle   = zend_objects_store_put(obj, (zend_objects_store_dtor_t)zend_objects_destroy_object, zephir_free_object_storage, NULL TSRMLS_CC);
		retval.handlers = zend_get_std_object_handlers();

		Z_TYPE(zthis)   = IS_OBJECT;
		Z_OBJVAL(zthis) = retval;

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("headers"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("headers"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

