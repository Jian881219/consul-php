
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
#include "kernel/string.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "kernel/file.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Consulate_Http_Request) {

	ZEPHIR_REGISTER_CLASS(Consulate\\Http, Request, consulate, http_request, consulate_http_request_method_entry, 0);

	zend_declare_property_null(consulate_http_request_ce, SL("headers"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_request_ce, SL("params"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_request_ce, SL("config"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_request_ce, SL("path"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_request_ce, SL("uri"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_request_ce, SL("method"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_http_request_ce, SL("body"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Http_Request, getHeaders) {

	

	RETURN_MEMBER(getThis(), "headers");

}

PHP_METHOD(Consulate_Http_Request, getParams) {

	

	RETURN_MEMBER(getThis(), "params");

}

PHP_METHOD(Consulate_Http_Request, getPath) {

	

	RETURN_MEMBER(getThis(), "path");

}

PHP_METHOD(Consulate_Http_Request, getMethod) {

	

	RETURN_MEMBER(getThis(), "method");

}

PHP_METHOD(Consulate_Http_Request, getBody) {

	

	RETURN_MEMBER(getThis(), "body");

}

PHP_METHOD(Consulate_Http_Request, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *method_param = NULL, *path_param = NULL, *config, *body = NULL, *_0 = NULL, *_1, *_2, *_3, *_4 = NULL, *_8 = NULL, *_13 = NULL, *_5$$3, *_6$$3 = NULL, *_7$$3, *_9$$4, *_10$$4 = NULL, *_11$$4 = NULL, *_12$$4, *_14$$5 = NULL, *_15$$6, *_16$$6 = NULL, *_17$$6, *_18$$7, *_19$$7 = NULL, *_20$$7, *str$$8 = NULL, *_21$$8, _22$$8, _23$$8, *_24$$8 = NULL, *_25$$8;
	zval *method = NULL, *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 1, &method_param, &path_param, &config, &body);

	zephir_get_strval(method, method_param);
	zephir_get_strval(path, path_param);
	if (!body) {
		body = ZEPHIR_GLOBAL(global_null);
	}


	zephir_update_property_this(getThis(), SL("config"), config TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	zephir_fast_strtoupper(_1, method);
	zephir_update_property_this(getThis(), SL("method"), _1 TSRMLS_CC);
	zephir_update_property_this(getThis(), SL("path"), path TSRMLS_CC);
	ZEPHIR_INIT_VAR(_2);
	object_init_ex(_2, consulate_http_headers_ce);
	if (zephir_has_constructor(_2 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _2, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_update_property_this(getThis(), SL("headers"), _2 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_3);
	object_init_ex(_3, consulate_http_params_ce);
	if (zephir_has_constructor(_3 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _3, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_update_property_this(getThis(), SL("params"), _3 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_4, config, "getdatacenter", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING_IDENTICAL(_4, "")) {
		_5$$3 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_6$$3, config, "getdatacenter", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(_7$$3);
		ZVAL_STRING(_7$$3, "dc", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _5$$3, "set", NULL, 0, _7$$3, _6$$3);
		zephir_check_temp_parameter(_7$$3);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_8, config, "getwaittime", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG_IDENTICAL(_8, 0)) {
		_9$$4 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_11$$4, config, "getwaittime", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&_10$$4, config, "durtomsec", NULL, 0, _11$$4);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(_12$$4);
		ZVAL_STRING(_12$$4, "wait", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _9$$4, "set", NULL, 0, _12$$4, _10$$4);
		zephir_check_temp_parameter(_12$$4);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_13, config, "gettoken", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING_IDENTICAL(_13, "")) {
		ZEPHIR_CALL_METHOD(&_14$$5, config, "gettokeninheader", NULL, 0);
		zephir_check_call_status();
		if (zephir_is_true(_14$$5)) {
			_15$$6 = zephir_fetch_nproperty_this(this_ptr, SL("headers"), PH_NOISY_CC);
			ZEPHIR_CALL_METHOD(&_16$$6, config, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(_17$$6);
			ZVAL_STRING(_17$$6, "X-Consul-Token", ZEPHIR_TEMP_PARAM_COPY);
			ZEPHIR_CALL_METHOD(NULL, _15$$6, "set", NULL, 0, _17$$6, _16$$6);
			zephir_check_temp_parameter(_17$$6);
			zephir_check_call_status();
		} else {
			_18$$7 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
			ZEPHIR_CALL_METHOD(&_19$$7, config, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(_20$$7);
			ZVAL_STRING(_20$$7, "token", ZEPHIR_TEMP_PARAM_COPY);
			ZEPHIR_CALL_METHOD(NULL, _18$$7, "set", NULL, 0, _20$$7, _19$$7);
			zephir_check_temp_parameter(_20$$7);
			zephir_check_call_status();
		}
	}
	if (Z_TYPE_P(body) != IS_NULL) {
		ZEPHIR_INIT_VAR(str$$8);
		ZVAL_STRING(str$$8, "", 1);
		ZEPHIR_INIT_VAR(_21$$8);
		zephir_gettype(_21$$8, body TSRMLS_CC);
		do {
			if (ZEPHIR_IS_STRING(_21$$8, "object") || ZEPHIR_IS_STRING(_21$$8, "array")) {
				ZEPHIR_INIT_NVAR(str$$8);
				zephir_json_encode(str$$8, &(str$$8), body, 0  TSRMLS_CC);
				break;
			}
			if (ZEPHIR_IS_STRING(_21$$8, "integer") || ZEPHIR_IS_STRING(_21$$8, "double") || ZEPHIR_IS_STRING(_21$$8, "float")) {
				ZEPHIR_CALL_FUNCTION(&str$$8, "strval", NULL, 53, body);
				zephir_check_call_status();
				break;
			}
			if (ZEPHIR_IS_STRING(_21$$8, "string")) {
				ZEPHIR_CPY_WRT(str$$8, body);
				break;
			}
			if (ZEPHIR_IS_STRING(_21$$8, "boolean")) {
				if (zephir_is_true(body)) {
					ZEPHIR_INIT_NVAR(str$$8);
					ZVAL_STRING(str$$8, "true", 1);
				} else {
					ZEPHIR_INIT_NVAR(str$$8);
					ZVAL_STRING(str$$8, "false", 1);
				}
				break;
			}
		} while(0);

		ZEPHIR_SINIT_VAR(_22$$8);
		ZVAL_STRING(&_22$$8, "php://memory", 0);
		ZEPHIR_SINIT_VAR(_23$$8);
		ZVAL_STRING(&_23$$8, "w+", 0);
		ZEPHIR_CALL_FUNCTION(&_24$$8, "fopen", NULL, 54, &_22$$8, &_23$$8);
		zephir_check_call_status();
		zephir_update_property_this(getThis(), SL("body"), _24$$8 TSRMLS_CC);
		_25$$8 = zephir_fetch_nproperty_this(this_ptr, SL("body"), PH_NOISY_CC);
		zephir_fwrite(NULL, _25$$8, str$$8 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Request, __destruct) {

	zval *_1, *_2$$3;
	zend_bool _0;

	ZEPHIR_MM_GROW();

	_0 = zephir_isset_property(this_ptr, SS("body") TSRMLS_CC);
	if (_0) {
		ZEPHIR_OBS_VAR(_1);
		zephir_read_property_this(&_1, this_ptr, SL("body"), PH_NOISY_CC);
		_0 = Z_TYPE_P(_1) == IS_RESOURCE;
	}
	if (_0) {
		_2$$3 = zephir_fetch_nproperty_this(this_ptr, SL("body"), PH_NOISY_CC);
		zephir_fclose(_2$$3 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Request, setQueryOptions) {

	HashTable *_39$$13;
	HashPosition _38$$13;
	zval *_15$$7 = NULL, *_47$$15 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *q = NULL, *k = NULL, *v = NULL, *_0 = NULL, *_4 = NULL, *_8 = NULL, *_12 = NULL, *_17 = NULL, *_23 = NULL, *_32 = NULL, *_36 = NULL, *_44 = NULL, *_49 = NULL, *_1$$4, *_2$$4 = NULL, *_3$$4, *_5$$5, *_6$$5, *_7$$5, *_9$$6, *_10$$6, *_11$$6, *_13$$7, *_14$$7 = NULL, *_16$$7, *_18$$8, *_19$$8, *_20$$8 = NULL, *_21$$8 = NULL, *_22$$8, *_24$$9, *_25$$9 = NULL, *_26$$10, *_27$$10 = NULL, *_28$$10, *_29$$11, *_30$$11 = NULL, *_31$$11, *_33$$12, *_34$$12 = NULL, *_35$$12, *_37$$13 = NULL, **_40$$13, *_41$$14, *_42$$14 = NULL, *_43$$14 = NULL, *_45$$15, *_46$$15 = NULL, *_48$$15, *_50$$16, *_51$$16, *_52$$16;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &q);

	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	if (Z_TYPE_P(q) == IS_NULL) {
		RETURN_MM_NULL();
	}
	ZEPHIR_CALL_METHOD(&_0, q, "getdatacenter", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(_0, "")) {
		_1$$4 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_2$$4, q, "getdatacenter", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(_3$$4);
		ZVAL_STRING(_3$$4, "dc", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _1$$4, "set", NULL, 0, _3$$4, _2$$4);
		zephir_check_temp_parameter(_3$$4);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_4, q, "getallowstale", NULL, 0);
	zephir_check_call_status();
	if (zephir_is_true(_4)) {
		_5$$5 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_INIT_VAR(_6$$5);
		ZVAL_STRING(_6$$5, "stale", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_INIT_VAR(_7$$5);
		ZVAL_STRING(_7$$5, "", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _5$$5, "set", NULL, 0, _6$$5, _7$$5);
		zephir_check_temp_parameter(_6$$5);
		zephir_check_temp_parameter(_7$$5);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_8, q, "getrequireconsistent", NULL, 0);
	zephir_check_call_status();
	if (zephir_is_true(_8)) {
		_9$$6 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_INIT_VAR(_10$$6);
		ZVAL_STRING(_10$$6, "consistent", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_INIT_VAR(_11$$6);
		ZVAL_STRING(_11$$6, "", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _9$$6, "set", NULL, 0, _10$$6, _11$$6);
		zephir_check_temp_parameter(_10$$6);
		zephir_check_temp_parameter(_11$$6);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_12, q, "getwaitindex", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(_12, 0)) {
		_13$$7 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_14$$7, q, "getwaitindex", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(_15$$7, _14$$7);
		ZEPHIR_INIT_VAR(_16$$7);
		ZVAL_STRING(_16$$7, "index", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _13$$7, "set", NULL, 0, _16$$7, _15$$7);
		zephir_check_temp_parameter(_16$$7);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_17, q, "getwaittime", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(_17, 0)) {
		_18$$8 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		_19$$8 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_21$$8, q, "getwaittime", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&_20$$8, _19$$8, "durtomsec", NULL, 0, _21$$8);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(_22$$8);
		ZVAL_STRING(_22$$8, "wait", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _18$$8, "set", NULL, 0, _22$$8, _20$$8);
		zephir_check_temp_parameter(_22$$8);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_23, q, "gettoken", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(_23, "")) {
		_24$$9 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_25$$9, _24$$9, "gettokeninheader", NULL, 0);
		zephir_check_call_status();
		if (zephir_is_true(_25$$9)) {
			_26$$10 = zephir_fetch_nproperty_this(this_ptr, SL("headers"), PH_NOISY_CC);
			ZEPHIR_CALL_METHOD(&_27$$10, q, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(_28$$10);
			ZVAL_STRING(_28$$10, "X-Consul-Token", ZEPHIR_TEMP_PARAM_COPY);
			ZEPHIR_CALL_METHOD(NULL, _26$$10, "set", NULL, 0, _28$$10, _27$$10);
			zephir_check_temp_parameter(_28$$10);
			zephir_check_call_status();
		} else {
			_29$$11 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
			ZEPHIR_CALL_METHOD(&_30$$11, q, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(_31$$11);
			ZVAL_STRING(_31$$11, "token", ZEPHIR_TEMP_PARAM_COPY);
			ZEPHIR_CALL_METHOD(NULL, _29$$11, "set", NULL, 0, _31$$11, _30$$11);
			zephir_check_temp_parameter(_31$$11);
			zephir_check_call_status();
		}
	}
	ZEPHIR_CALL_METHOD(&_32, q, "getnear", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(_32, "")) {
		_33$$12 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_34$$12, q, "getnear", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(_35$$12);
		ZVAL_STRING(_35$$12, "near", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _33$$12, "set", NULL, 0, _35$$12, _34$$12);
		zephir_check_temp_parameter(_35$$12);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_36, q, "getnodemeta", NULL, 0);
	zephir_check_call_status();
	if (zephir_fast_count_int(_36 TSRMLS_CC) > 0) {
		ZEPHIR_CALL_METHOD(&_37$$13, q, "getnodemeta", NULL, 0);
		zephir_check_call_status();
		zephir_is_iterable(_37$$13, &_39$$13, &_38$$13, 0, 0, "consulate/http/request.zep", 138);
		for (
		  ; zend_hash_get_current_data_ex(_39$$13, (void**) &_40$$13, &_38$$13) == SUCCESS
		  ; zend_hash_move_forward_ex(_39$$13, &_38$$13)
		) {
			ZEPHIR_GET_HMKEY(k, _39$$13, _38$$13);
			ZEPHIR_GET_HVALUE(v, _40$$13);
			_41$$14 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_42$$14);
			ZEPHIR_CONCAT_VSV(_42$$14, k, ":", v);
			ZEPHIR_INIT_NVAR(_43$$14);
			ZVAL_STRING(_43$$14, "node-meta", ZEPHIR_TEMP_PARAM_COPY);
			ZEPHIR_CALL_METHOD(NULL, _41$$14, "add", NULL, 0, _43$$14, _42$$14);
			zephir_check_temp_parameter(_43$$14);
			zephir_check_call_status();
		}
	}
	ZEPHIR_CALL_METHOD(&_44, q, "getrelayfactor", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(_44, 0)) {
		_45$$15 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_46$$15, q, "getrelayfactor", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(_47$$15, _46$$15);
		ZEPHIR_INIT_VAR(_48$$15);
		ZVAL_STRING(_48$$15, "relay-factor", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _45$$15, "set", NULL, 0, _48$$15, _47$$15);
		zephir_check_temp_parameter(_48$$15);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_49, q, "getpretty", NULL, 0);
	zephir_check_call_status();
	if (zephir_is_true(_49)) {
		_50$$16 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_INIT_VAR(_51$$16);
		ZVAL_STRING(_51$$16, "pretty", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_INIT_VAR(_52$$16);
		ZVAL_STRING(_52$$16, "", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _50$$16, "set", NULL, 0, _51$$16, _52$$16);
		zephir_check_temp_parameter(_51$$16);
		zephir_check_temp_parameter(_52$$16);
		zephir_check_call_status();
	}
	zephir_update_property_this(getThis(), SL("uri"), ZEPHIR_GLOBAL(global_null) TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Request, setWriteOptions) {

	zval *_16$$8 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *q = NULL, *_0 = NULL, *_4 = NULL, *_13 = NULL, *_1$$4, *_2$$4 = NULL, *_3$$4, *_5$$5, *_6$$5 = NULL, *_7$$6, *_8$$6 = NULL, *_9$$6, *_10$$7, *_11$$7 = NULL, *_12$$7, *_14$$8, *_15$$8 = NULL, *_17$$8;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &q);

	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	if (Z_TYPE_P(q) == IS_NULL) {
		RETURN_MM_NULL();
	}
	ZEPHIR_CALL_METHOD(&_0, q, "getdatacenter", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(_0, "")) {
		_1$$4 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_2$$4, q, "getdatacenter", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(_3$$4);
		ZVAL_STRING(_3$$4, "dc", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _1$$4, "set", NULL, 0, _3$$4, _2$$4);
		zephir_check_temp_parameter(_3$$4);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_4, q, "gettoken", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(_4, "")) {
		_5$$5 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_6$$5, _5$$5, "gettokeninheader", NULL, 0);
		zephir_check_call_status();
		if (zephir_is_true(_6$$5)) {
			_7$$6 = zephir_fetch_nproperty_this(this_ptr, SL("headers"), PH_NOISY_CC);
			ZEPHIR_CALL_METHOD(&_8$$6, q, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(_9$$6);
			ZVAL_STRING(_9$$6, "X-Consul-Token", ZEPHIR_TEMP_PARAM_COPY);
			ZEPHIR_CALL_METHOD(NULL, _7$$6, "set", NULL, 0, _9$$6, _8$$6);
			zephir_check_temp_parameter(_9$$6);
			zephir_check_call_status();
		} else {
			_10$$7 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
			ZEPHIR_CALL_METHOD(&_11$$7, q, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(_12$$7);
			ZVAL_STRING(_12$$7, "token", ZEPHIR_TEMP_PARAM_COPY);
			ZEPHIR_CALL_METHOD(NULL, _10$$7, "set", NULL, 0, _12$$7, _11$$7);
			zephir_check_temp_parameter(_12$$7);
			zephir_check_call_status();
		}
	}
	ZEPHIR_CALL_METHOD(&_13, q, "getrelayfactor", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(_13, 0)) {
		_14$$8 = zephir_fetch_nproperty_this(this_ptr, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_15$$8, q, "getrelayfactor", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(_16$$8, _15$$8);
		ZEPHIR_INIT_VAR(_17$$8);
		ZVAL_STRING(_17$$8, "relay-factor", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _14$$8, "set", NULL, 0, _17$$8, _16$$8);
		zephir_check_temp_parameter(_17$$8);
		zephir_check_call_status();
	}
	zephir_update_property_this(getThis(), SL("uri"), ZEPHIR_GLOBAL(global_null) TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Request, getUri) {

	zval *_7$$3 = NULL;
	zval *uri = NULL, *_0, *_1$$3, *_2$$3 = NULL, *_3$$3, *_4$$3 = NULL, *_5$$3 = NULL, *_6$$3, *_8$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("uri"), PH_NOISY_CC);
	if (ZEPHIR_IS_EMPTY(_0)) {
		ZEPHIR_INIT_VAR(uri);
		object_init_ex(uri, consulate_http_uri_ce);
		_1$$3 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_2$$3, _1$$3, "getscheme", NULL, 0);
		zephir_check_call_status();
		_3$$3 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&_4$$3, _3$$3, "getaddress", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&_5$$3, this_ptr, "getpath", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_OBS_VAR(_6$$3);
		zephir_read_property_this(&_6$$3, this_ptr, SL("params"), PH_NOISY_CC);
		zephir_get_strval(_7$$3, _6$$3);
		ZEPHIR_INIT_VAR(_8$$3);
		ZVAL_STRING(_8$$3, "", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, uri, "__construct", NULL, 55, _2$$3, _4$$3, _5$$3, _7$$3, _8$$3);
		zephir_check_temp_parameter(_8$$3);
		zephir_check_call_status();
		zephir_update_property_this(getThis(), SL("uri"), uri TSRMLS_CC);
	}
	RETURN_MM_MEMBER(getThis(), "uri");

}

