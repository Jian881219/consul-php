
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
#include "kernel/time.h"
#include "kernel/array.h"
#include "kernel/exception.h"
#include "kernel/string.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Endpoint) {

	ZEPHIR_REGISTER_CLASS(Consulate\\Api, Endpoint, consulate, api_endpoint, consulate_api_endpoint_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	zend_declare_property_null(consulate_api_endpoint_ce, SL("config"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Endpoint, getConfig) {

	

	RETURN_MEMBER(getThis(), "config");

}

PHP_METHOD(Consulate_Api_Endpoint, __construct) {

	zval *config;

	zephir_fetch_params(0, 1, 0, &config);



	zephir_update_property_this(getThis(), SL("config"), config TSRMLS_CC);

}

PHP_METHOD(Consulate_Api_Endpoint, newRequest) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *method_param = NULL, *path_param = NULL, *body = NULL, *_0;
	zval *method = NULL, *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &method_param, &path_param, &body);

	zephir_get_strval(method, method_param);
	zephir_get_strval(path, path_param);
	if (!body) {
		body = ZEPHIR_GLOBAL(global_null);
	}


	object_init_ex(return_value, consulate_http_request_ce);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 3, method, path, _0, body);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Endpoint, doRequest) {

	zval *_1 = NULL, *_5 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *r, *start = NULL, *diff = NULL, *uri = NULL, *response = NULL, *httpAuth = NULL, *httpClient = NULL, *_0 = NULL, *_2 = NULL, *_3 = NULL, *_4, *_8 = NULL, *_9, *_10, *_6$$3 = NULL, *_7$$3 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &r);



	ZEPHIR_INIT_VAR(start);
	zephir_microtime(start, ZEPHIR_GLOBAL(global_true) TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&uri, r, "geturi", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(httpClient);
	object_init_ex(httpClient, consulate_http_client_curl_ce);
	ZEPHIR_CALL_METHOD(NULL, httpClient, "__construct", NULL, 4);
	zephir_check_call_status();
	zephir_get_strval(_1, uri);
	ZEPHIR_CALL_METHOD(&_0, httpClient, "seturl", NULL, 5, _1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, r, "getmethod", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&httpClient, _0, "setmethod", NULL, 0, _2);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_3, r, "getheaders", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, httpClient, "setheaders", NULL, 6, _3);
	zephir_check_call_status();
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&httpAuth, _4, "gethttpauth", NULL, 0);
	zephir_check_call_status();
	zephir_get_strval(_5, httpAuth);
	if (!(ZEPHIR_IS_EMPTY(_5))) {
		ZEPHIR_CALL_METHOD(&_6$$3, httpAuth, "getusername", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&_7$$3, httpAuth, "getpassword", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, httpClient, "setbasicauth", NULL, 7, _6$$3, _7$$3);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_8, r, "getbody", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, httpClient, "setbody", NULL, 8, _8);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, httpClient, "send", NULL, 9);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(_9);
	zephir_microtime(_9, ZEPHIR_GLOBAL(global_true) TSRMLS_CC);
	ZEPHIR_INIT_VAR(_10);
	zephir_sub_function(_10, _9, start);
	ZEPHIR_INIT_VAR(diff);
	ZVAL_LONG(diff, (zephir_get_numberval(_10) * 1000000));
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, diff);
	zephir_array_fast_append(return_value, response);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Endpoint, query) {

	


}

PHP_METHOD(Consulate_Api_Endpoint, write) {

	


}

PHP_METHOD(Consulate_Api_Endpoint, requireOK) {

	zephir_fcall_cache_entry *_6 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *result_param = NULL, *response = NULL, *_0$$4 = NULL, *_1$$5, *_2$$5, *_3$$5 = NULL, _4$$5, *_5$$5 = NULL, *_7$$6, *_8$$6 = NULL, _9$$6, *_10$$6 = NULL;
	zval *result = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &result_param);

	zephir_get_arrval(result, result_param);


	ZEPHIR_OBS_VAR(response);
	if (zephir_array_isset_long_fetch(&response, result, 1, 0 TSRMLS_CC)) {
		if (zephir_instance_of_ev(response, consulate_http_response_ce TSRMLS_CC)) {
			ZEPHIR_CALL_METHOD(&_0$$4, response, "getstatuscode", NULL, 0);
			zephir_check_call_status();
			if (!ZEPHIR_IS_LONG(_0$$4, 200)) {
				ZEPHIR_INIT_VAR(_1$$5);
				object_init_ex(_1$$5, consulate_api_exception_ce);
				ZEPHIR_INIT_VAR(_2$$5);
				zephir_get_called_class(_2$$5 TSRMLS_CC);
				ZEPHIR_CALL_METHOD(&_3$$5, response, "getstatuscode", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_SINIT_VAR(_4$$5);
				ZVAL_STRING(&_4$$5, "%s - Non 200 status code response. Status Code: %s", 0);
				ZEPHIR_CALL_FUNCTION(&_5$$5, "sprintf", &_6, 10, &_4$$5, _2$$5, _3$$5);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(NULL, _1$$5, "__construct", NULL, 11, _5$$5);
				zephir_check_call_status();
				zephir_throw_exception_debug(_1$$5, "consulate/api/endpoint.zep", 72 TSRMLS_CC);
				ZEPHIR_MM_RESTORE();
				return;
			}
		} else {
			ZEPHIR_INIT_VAR(_7$$6);
			object_init_ex(_7$$6, consulate_api_exception_ce);
			ZEPHIR_INIT_VAR(_8$$6);
			if (Z_TYPE_P(response) == IS_OBJECT) {
				ZEPHIR_INIT_NVAR(_8$$6);
				zephir_get_class(_8$$6, response, 0 TSRMLS_CC);
			} else {
				ZEPHIR_INIT_NVAR(_8$$6);
				zephir_gettype(_8$$6, response TSRMLS_CC);
			}
			ZEPHIR_SINIT_VAR(_9$$6);
			ZVAL_STRING(&_9$$6, "%s Expected response to be instance of Consulate\\Http\\Response.", 0);
			ZEPHIR_CALL_FUNCTION(&_10$$6, "sprintf", &_6, 10, &_9$$6, _8$$6);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, _7$$6, "__construct", NULL, 11, _10$$6);
			zephir_check_call_status();
			zephir_throw_exception_debug(_7$$6, "consulate/api/endpoint.zep", 75 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	}
	RETURN_CTOR(result);

}

PHP_METHOD(Consulate_Api_Endpoint, parseQueryMeta) {

	zend_bool _4, _8;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *response, *q, *header = NULL, *_5, *_9, *_0$$3, *_1$$3, *_2$$4, *_3$$4, *_6$$5, *_7$$6, *_10$$7, *_11$$8;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &response, &q);



	ZEPHIR_CALL_METHOD(&header, response, "getheaders", NULL, 0);
	zephir_check_call_status();
	if (zephir_array_isset_string(header, SS("X-Consul-Index"))) {
		ZEPHIR_OBS_VAR(_0$$3);
		zephir_array_fetch_string(&_0$$3, header, SL("X-Consul-Index"), PH_NOISY, "consulate/api/endpoint.zep", 89 TSRMLS_CC);
		ZEPHIR_INIT_VAR(_1$$3);
		ZVAL_LONG(_1$$3, zephir_get_intval(_0$$3));
		ZEPHIR_CALL_METHOD(NULL, q, "setlastindex", NULL, 0, _1$$3);
		zephir_check_call_status();
	}
	if (zephir_array_isset_string(header, SS("X-Consul-Lastcontact"))) {
		ZEPHIR_OBS_VAR(_2$$4);
		zephir_array_fetch_string(&_2$$4, header, SL("X-Consul-Lastcontact"), PH_NOISY, "consulate/api/endpoint.zep", 93 TSRMLS_CC);
		ZEPHIR_INIT_VAR(_3$$4);
		ZVAL_LONG(_3$$4, zephir_get_intval(_2$$4));
		ZEPHIR_CALL_METHOD(NULL, q, "setlastcontact", NULL, 0, _3$$4);
		zephir_check_call_status();
	}
	_4 = zephir_array_isset_string(header, SS("X-Consul-Knownleader"));
	if (_4) {
		zephir_array_fetch_string(&_5, header, SL("X-Consul-Knownleader"), PH_NOISY | PH_READONLY, "consulate/api/endpoint.zep", 96 TSRMLS_CC);
		_4 = ZEPHIR_IS_STRING(_5, "true");
	}
	if (_4) {
		ZEPHIR_INIT_VAR(_6$$5);
		ZVAL_BOOL(_6$$5, 1);
		ZEPHIR_CALL_METHOD(NULL, q, "setknownleader", NULL, 0, _6$$5);
		zephir_check_call_status();
	} else {
		ZEPHIR_INIT_VAR(_7$$6);
		ZVAL_BOOL(_7$$6, 0);
		ZEPHIR_CALL_METHOD(NULL, q, "setknownleader", NULL, 0, _7$$6);
		zephir_check_call_status();
	}
	_8 = zephir_array_isset_string(header, SS("X-Consul-Translate-Address"));
	if (_8) {
		zephir_array_fetch_string(&_9, header, SL("X-Consul-Translate-Address"), PH_NOISY | PH_READONLY, "consulate/api/endpoint.zep", 102 TSRMLS_CC);
		_8 = ZEPHIR_IS_STRING(_9, "true");
	}
	if (_8) {
		ZEPHIR_INIT_VAR(_10$$7);
		ZVAL_BOOL(_10$$7, 1);
		ZEPHIR_CALL_METHOD(NULL, q, "setaddresstranslationenabled", NULL, 0, _10$$7);
		zephir_check_call_status();
	} else {
		ZEPHIR_INIT_VAR(_11$$8);
		ZVAL_BOOL(_11$$8, 0);
		ZEPHIR_CALL_METHOD(NULL, q, "setaddresstranslationenabled", NULL, 0, _11$$8);
		zephir_check_call_status();
	}
	RETVAL_ZVAL(q, 1, 0);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Endpoint, decodeBody) {

	zend_bool _2, _3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *resp, *data = NULL, *json_string = NULL, *_0 = NULL, *_1 = NULL, *_4$$3, *_5$$3, *_6$$3 = NULL, _7$$3, *_8$$3 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &resp);



	ZEPHIR_CALL_METHOD(&_0, resp, "getbody", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&json_string, this_ptr, "removebom", NULL, 12, _0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(data);
	zephir_json_decode(data, &(data), json_string, zephir_get_intval(ZEPHIR_GLOBAL(global_true))  TSRMLS_CC);
	ZEPHIR_CALL_FUNCTION(&_1, "json_last_error", NULL, 13);
	zephir_check_call_status();
	_2 = !ZEPHIR_IS_LONG(_1, 0);
	if (_2) {
		_3 = Z_TYPE_P(data) == IS_NULL;
		if (!(_3)) {
			_3 = ZEPHIR_IS_FALSE(data);
		}
		_2 = _3;
	}
	if (_2) {
		ZEPHIR_INIT_VAR(_4$$3);
		object_init_ex(_4$$3, consulate_api_exception_ce);
		ZEPHIR_INIT_VAR(_5$$3);
		zephir_get_called_class(_5$$3 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(&_6$$3, "json_last_error_msg", NULL, 14);
		zephir_check_call_status();
		ZEPHIR_SINIT_VAR(_7$$3);
		ZVAL_STRING(&_7$$3, "%s - Unable to parse response as a json. Error message: %s, raw data: %s", 0);
		ZEPHIR_CALL_FUNCTION(&_8$$3, "sprintf", NULL, 10, &_7$$3, _5$$3, _6$$3, resp);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, _4$$3, "__construct", NULL, 11, _8$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(_4$$3, "consulate/api/endpoint.zep", 118 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	RETURN_CCTOR(data);

}

PHP_METHOD(Consulate_Api_Endpoint, removeBom) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str, *bom = NULL, _0, _1, *_2, *_3;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str);



	ZEPHIR_SINIT_VAR(_0);
	ZVAL_STRING(&_0, "H*", 0);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_STRING(&_1, "EFBBBF", 0);
	ZEPHIR_CALL_FUNCTION(&bom, "pack", NULL, 15, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(_2);
	ZEPHIR_CONCAT_SVS(_2, "/^", bom, "/");
	ZEPHIR_INIT_VAR(_3);
	ZVAL_STRING(_3, "", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_RETURN_CALL_FUNCTION("preg_replace", NULL, 16, _2, _3, str);
	zephir_check_temp_parameter(_3);
	zephir_check_call_status();
	RETURN_MM();

}

