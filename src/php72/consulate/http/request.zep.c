
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "headers");

}

PHP_METHOD(Consulate_Http_Request, getParams) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "params");

}

PHP_METHOD(Consulate_Http_Request, getPath) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "path");

}

PHP_METHOD(Consulate_Http_Request, getMethod) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "method");

}

PHP_METHOD(Consulate_Http_Request, getBody) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "body");

}

PHP_METHOD(Consulate_Http_Request, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *method_param = NULL, *path_param = NULL, *config, config_sub, *body = NULL, body_sub, __$null, _0, _1, _2, _3, _4, _8, _13, _5$$3, _6$$3, _7$$3, _9$$4, _10$$4, _11$$4, _12$$4, _14$$5, _15$$6, _16$$6, _17$$6, _18$$7, _19$$7, _20$$7, str$$8, _21$$8, _22$$8, _23$$8, _24$$8, _25$$8;
	zval method, path;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&config_sub);
	ZVAL_UNDEF(&body_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_12$$4);
	ZVAL_UNDEF(&_14$$5);
	ZVAL_UNDEF(&_15$$6);
	ZVAL_UNDEF(&_16$$6);
	ZVAL_UNDEF(&_17$$6);
	ZVAL_UNDEF(&_18$$7);
	ZVAL_UNDEF(&_19$$7);
	ZVAL_UNDEF(&_20$$7);
	ZVAL_UNDEF(&str$$8);
	ZVAL_UNDEF(&_21$$8);
	ZVAL_UNDEF(&_22$$8);
	ZVAL_UNDEF(&_23$$8);
	ZVAL_UNDEF(&_24$$8);
	ZVAL_UNDEF(&_25$$8);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 1, &method_param, &path_param, &config, &body);

	zephir_get_strval(&method, method_param);
	zephir_get_strval(&path, path_param);
	if (!body) {
		body = &body_sub;
		body = &__$null;
	}


	zephir_update_property_zval(this_ptr, SL("config"), config);
	ZEPHIR_INIT_VAR(&_1);
	zephir_fast_strtoupper(&_1, &method);
	zephir_update_property_zval(this_ptr, SL("method"), &_1);
	zephir_update_property_zval(this_ptr, SL("path"), &path);
	ZEPHIR_INIT_VAR(&_2);
	object_init_ex(&_2, consulate_http_headers_ce);
	if (zephir_has_constructor(&_2 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, &_2, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_update_property_zval(this_ptr, SL("headers"), &_2);
	ZEPHIR_INIT_VAR(&_3);
	object_init_ex(&_3, consulate_http_params_ce);
	if (zephir_has_constructor(&_3 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, &_3, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_update_property_zval(this_ptr, SL("params"), &_3);
	ZEPHIR_CALL_METHOD(&_4, config, "getdatacenter", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING_IDENTICAL(&_4, "")) {
		zephir_read_property(&_5$$3, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_6$$3, config, "getdatacenter", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_7$$3);
		ZVAL_STRING(&_7$$3, "dc");
		ZEPHIR_CALL_METHOD(NULL, &_5$$3, "set", NULL, 0, &_7$$3, &_6$$3);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_8, config, "getwaittime", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG_IDENTICAL(&_8, 0)) {
		zephir_read_property(&_9$$4, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_11$$4, config, "getwaittime", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&_10$$4, config, "durtomsec", NULL, 0, &_11$$4);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_12$$4);
		ZVAL_STRING(&_12$$4, "wait");
		ZEPHIR_CALL_METHOD(NULL, &_9$$4, "set", NULL, 0, &_12$$4, &_10$$4);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_13, config, "gettoken", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING_IDENTICAL(&_13, "")) {
		ZEPHIR_CALL_METHOD(&_14$$5, config, "gettokeninheader", NULL, 0);
		zephir_check_call_status();
		if (zephir_is_true(&_14$$5)) {
			zephir_read_property(&_15$$6, this_ptr, SL("headers"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(&_16$$6, config, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_17$$6);
			ZVAL_STRING(&_17$$6, "X-Consul-Token");
			ZEPHIR_CALL_METHOD(NULL, &_15$$6, "set", NULL, 0, &_17$$6, &_16$$6);
			zephir_check_call_status();
		} else {
			zephir_read_property(&_18$$7, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(&_19$$7, config, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_20$$7);
			ZVAL_STRING(&_20$$7, "token");
			ZEPHIR_CALL_METHOD(NULL, &_18$$7, "set", NULL, 0, &_20$$7, &_19$$7);
			zephir_check_call_status();
		}
	}
	if (Z_TYPE_P(body) != IS_NULL) {
		ZEPHIR_INIT_VAR(&str$$8);
		ZVAL_STRING(&str$$8, "");
		ZEPHIR_INIT_VAR(&_21$$8);
		zephir_gettype(&_21$$8, body TSRMLS_CC);
		do {
			if (ZEPHIR_IS_STRING(&_21$$8, "object") || ZEPHIR_IS_STRING(&_21$$8, "array")) {
				ZEPHIR_INIT_NVAR(&str$$8);
				zephir_json_encode(&str$$8, body, 0 );
				break;
			}
			if (ZEPHIR_IS_STRING(&_21$$8, "integer") || ZEPHIR_IS_STRING(&_21$$8, "double") || ZEPHIR_IS_STRING(&_21$$8, "float")) {
				ZEPHIR_CALL_FUNCTION(&str$$8, "strval", NULL, 52, body);
				zephir_check_call_status();
				break;
			}
			if (ZEPHIR_IS_STRING(&_21$$8, "string")) {
				ZEPHIR_CPY_WRT(&str$$8, body);
				break;
			}
			if (ZEPHIR_IS_STRING(&_21$$8, "boolean")) {
				if (zephir_is_true(body)) {
					ZEPHIR_INIT_NVAR(&str$$8);
					ZVAL_STRING(&str$$8, "true");
				} else {
					ZEPHIR_INIT_NVAR(&str$$8);
					ZVAL_STRING(&str$$8, "false");
				}
				break;
			}
		} while(0);

		ZEPHIR_INIT_VAR(&_22$$8);
		ZVAL_STRING(&_22$$8, "php://memory");
		ZEPHIR_INIT_VAR(&_23$$8);
		ZVAL_STRING(&_23$$8, "w+");
		ZEPHIR_CALL_FUNCTION(&_24$$8, "fopen", NULL, 53, &_22$$8, &_23$$8);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("body"), &_24$$8);
		zephir_read_property(&_25$$8, this_ptr, SL("body"), PH_NOISY_CC | PH_READONLY);
		zephir_fwrite(NULL, &_25$$8, &str$$8 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Request, __destruct) {

	zval _1, _2$$3;
	zend_bool _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();

	_0 = zephir_isset_property(this_ptr, SL("body"));
	if (_0) {
		ZEPHIR_OBS_VAR(&_1);
		zephir_read_property(&_1, this_ptr, SL("body"), PH_NOISY_CC);
		_0 = Z_TYPE_P(&_1) == IS_RESOURCE;
	}
	if (_0) {
		zephir_read_property(&_2$$3, this_ptr, SL("body"), PH_NOISY_CC | PH_READONLY);
		zephir_fclose(&_2$$3 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Request, setQueryOptions) {

	zend_string *_41$$13;
	zend_ulong _40$$13;
	zval _15$$7, _51$$16;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *q = NULL, q_sub, __$null, k, v, _0, _4, _8, _12, _17, _23, _32, _36, _48, _53, _1$$4, _2$$4, _3$$4, _5$$5, _6$$5, _7$$5, _9$$6, _10$$6, _11$$6, _13$$7, _14$$7, _16$$7, _18$$8, _19$$8, _20$$8, _21$$8, _22$$8, _24$$9, _25$$9, _26$$10, _27$$10, _28$$10, _29$$11, _30$$11, _31$$11, _33$$12, _34$$12, _35$$12, _37$$13, *_38$$13, _39$$13, _42$$14, _43$$14, _44$$14, _45$$15, _46$$15, _47$$15, _49$$16, _50$$16, _52$$16, _54$$17, _55$$17, _56$$17;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_23);
	ZVAL_UNDEF(&_32);
	ZVAL_UNDEF(&_36);
	ZVAL_UNDEF(&_48);
	ZVAL_UNDEF(&_53);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$4);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_9$$6);
	ZVAL_UNDEF(&_10$$6);
	ZVAL_UNDEF(&_11$$6);
	ZVAL_UNDEF(&_13$$7);
	ZVAL_UNDEF(&_14$$7);
	ZVAL_UNDEF(&_16$$7);
	ZVAL_UNDEF(&_18$$8);
	ZVAL_UNDEF(&_19$$8);
	ZVAL_UNDEF(&_20$$8);
	ZVAL_UNDEF(&_21$$8);
	ZVAL_UNDEF(&_22$$8);
	ZVAL_UNDEF(&_24$$9);
	ZVAL_UNDEF(&_25$$9);
	ZVAL_UNDEF(&_26$$10);
	ZVAL_UNDEF(&_27$$10);
	ZVAL_UNDEF(&_28$$10);
	ZVAL_UNDEF(&_29$$11);
	ZVAL_UNDEF(&_30$$11);
	ZVAL_UNDEF(&_31$$11);
	ZVAL_UNDEF(&_33$$12);
	ZVAL_UNDEF(&_34$$12);
	ZVAL_UNDEF(&_35$$12);
	ZVAL_UNDEF(&_37$$13);
	ZVAL_UNDEF(&_39$$13);
	ZVAL_UNDEF(&_42$$14);
	ZVAL_UNDEF(&_43$$14);
	ZVAL_UNDEF(&_44$$14);
	ZVAL_UNDEF(&_45$$15);
	ZVAL_UNDEF(&_46$$15);
	ZVAL_UNDEF(&_47$$15);
	ZVAL_UNDEF(&_49$$16);
	ZVAL_UNDEF(&_50$$16);
	ZVAL_UNDEF(&_52$$16);
	ZVAL_UNDEF(&_54$$17);
	ZVAL_UNDEF(&_55$$17);
	ZVAL_UNDEF(&_56$$17);
	ZVAL_UNDEF(&_15$$7);
	ZVAL_UNDEF(&_51$$16);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &q);

	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	if (Z_TYPE_P(q) == IS_NULL) {
		RETURN_MM_NULL();
	}
	ZEPHIR_CALL_METHOD(&_0, q, "getdatacenter", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&_0, "")) {
		zephir_read_property(&_1$$4, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_2$$4, q, "getdatacenter", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_3$$4);
		ZVAL_STRING(&_3$$4, "dc");
		ZEPHIR_CALL_METHOD(NULL, &_1$$4, "set", NULL, 0, &_3$$4, &_2$$4);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_4, q, "getallowstale", NULL, 0);
	zephir_check_call_status();
	if (zephir_is_true(&_4)) {
		zephir_read_property(&_5$$5, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_6$$5);
		ZVAL_STRING(&_6$$5, "stale");
		ZEPHIR_INIT_VAR(&_7$$5);
		ZVAL_STRING(&_7$$5, "");
		ZEPHIR_CALL_METHOD(NULL, &_5$$5, "set", NULL, 0, &_6$$5, &_7$$5);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_8, q, "getrequireconsistent", NULL, 0);
	zephir_check_call_status();
	if (zephir_is_true(&_8)) {
		zephir_read_property(&_9$$6, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_10$$6);
		ZVAL_STRING(&_10$$6, "consistent");
		ZEPHIR_INIT_VAR(&_11$$6);
		ZVAL_STRING(&_11$$6, "");
		ZEPHIR_CALL_METHOD(NULL, &_9$$6, "set", NULL, 0, &_10$$6, &_11$$6);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_12, q, "getwaitindex", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(&_12, 0)) {
		zephir_read_property(&_13$$7, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_14$$7, q, "getwaitindex", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(&_15$$7, &_14$$7);
		ZEPHIR_INIT_VAR(&_16$$7);
		ZVAL_STRING(&_16$$7, "index");
		ZEPHIR_CALL_METHOD(NULL, &_13$$7, "set", NULL, 0, &_16$$7, &_15$$7);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_17, q, "getwaittime", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(&_17, 0)) {
		zephir_read_property(&_18$$8, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_19$$8, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_21$$8, q, "getwaittime", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&_20$$8, &_19$$8, "durtomsec", NULL, 0, &_21$$8);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_22$$8);
		ZVAL_STRING(&_22$$8, "wait");
		ZEPHIR_CALL_METHOD(NULL, &_18$$8, "set", NULL, 0, &_22$$8, &_20$$8);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_23, q, "gettoken", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&_23, "")) {
		zephir_read_property(&_24$$9, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_25$$9, &_24$$9, "gettokeninheader", NULL, 0);
		zephir_check_call_status();
		if (zephir_is_true(&_25$$9)) {
			zephir_read_property(&_26$$10, this_ptr, SL("headers"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(&_27$$10, q, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_28$$10);
			ZVAL_STRING(&_28$$10, "X-Consul-Token");
			ZEPHIR_CALL_METHOD(NULL, &_26$$10, "set", NULL, 0, &_28$$10, &_27$$10);
			zephir_check_call_status();
		} else {
			zephir_read_property(&_29$$11, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(&_30$$11, q, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_31$$11);
			ZVAL_STRING(&_31$$11, "token");
			ZEPHIR_CALL_METHOD(NULL, &_29$$11, "set", NULL, 0, &_31$$11, &_30$$11);
			zephir_check_call_status();
		}
	}
	ZEPHIR_CALL_METHOD(&_32, q, "getnear", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&_32, "")) {
		zephir_read_property(&_33$$12, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_34$$12, q, "getnear", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_35$$12);
		ZVAL_STRING(&_35$$12, "near");
		ZEPHIR_CALL_METHOD(NULL, &_33$$12, "set", NULL, 0, &_35$$12, &_34$$12);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_36, q, "getnodemeta", NULL, 0);
	zephir_check_call_status();
	if (zephir_fast_count_int(&_36 TSRMLS_CC) > 0) {
		ZEPHIR_CALL_METHOD(&_37$$13, q, "getnodemeta", NULL, 0);
		zephir_check_call_status();
		zephir_is_iterable(&_37$$13, 0, "consulate/http/request.zep", 138);
		if (Z_TYPE_P(&_37$$13) == IS_ARRAY) {
			ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_37$$13), _40$$13, _41$$13, _38$$13)
			{
				ZEPHIR_INIT_NVAR(&k);
				if (_41$$13 != NULL) { 
					ZVAL_STR_COPY(&k, _41$$13);
				} else {
					ZVAL_LONG(&k, _40$$13);
				}
				ZEPHIR_INIT_NVAR(&v);
				ZVAL_COPY(&v, _38$$13);
				zephir_read_property(&_42$$14, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
				ZEPHIR_INIT_LNVAR(_43$$14);
				ZEPHIR_CONCAT_VSV(&_43$$14, &k, ":", &v);
				ZEPHIR_INIT_NVAR(&_44$$14);
				ZVAL_STRING(&_44$$14, "node-meta");
				ZEPHIR_CALL_METHOD(NULL, &_42$$14, "add", NULL, 0, &_44$$14, &_43$$14);
				zephir_check_call_status();
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &_37$$13, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_39$$13, &_37$$13, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_39$$13)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&k, &_37$$13, "key", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&v, &_37$$13, "current", NULL, 0);
				zephir_check_call_status();
					zephir_read_property(&_45$$15, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
					ZEPHIR_INIT_LNVAR(_46$$15);
					ZEPHIR_CONCAT_VSV(&_46$$15, &k, ":", &v);
					ZEPHIR_INIT_NVAR(&_47$$15);
					ZVAL_STRING(&_47$$15, "node-meta");
					ZEPHIR_CALL_METHOD(NULL, &_45$$15, "add", NULL, 0, &_47$$15, &_46$$15);
					zephir_check_call_status();
				ZEPHIR_CALL_METHOD(NULL, &_37$$13, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&v);
		ZEPHIR_INIT_NVAR(&k);
	}
	ZEPHIR_CALL_METHOD(&_48, q, "getrelayfactor", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(&_48, 0)) {
		zephir_read_property(&_49$$16, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_50$$16, q, "getrelayfactor", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(&_51$$16, &_50$$16);
		ZEPHIR_INIT_VAR(&_52$$16);
		ZVAL_STRING(&_52$$16, "relay-factor");
		ZEPHIR_CALL_METHOD(NULL, &_49$$16, "set", NULL, 0, &_52$$16, &_51$$16);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_53, q, "getpretty", NULL, 0);
	zephir_check_call_status();
	if (zephir_is_true(&_53)) {
		zephir_read_property(&_54$$17, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_55$$17);
		ZVAL_STRING(&_55$$17, "pretty");
		ZEPHIR_INIT_VAR(&_56$$17);
		ZVAL_STRING(&_56$$17, "");
		ZEPHIR_CALL_METHOD(NULL, &_54$$17, "set", NULL, 0, &_55$$17, &_56$$17);
		zephir_check_call_status();
	}
	zephir_update_property_zval(this_ptr, SL("uri"), &__$null);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Request, setWriteOptions) {

	zval _16$$8;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *q = NULL, q_sub, __$null, _0, _4, _13, _1$$4, _2$$4, _3$$4, _5$$5, _6$$5, _7$$6, _8$$6, _9$$6, _10$$7, _11$$7, _12$$7, _14$$8, _15$$8, _17$$8;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$4);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$6);
	ZVAL_UNDEF(&_8$$6);
	ZVAL_UNDEF(&_9$$6);
	ZVAL_UNDEF(&_10$$7);
	ZVAL_UNDEF(&_11$$7);
	ZVAL_UNDEF(&_12$$7);
	ZVAL_UNDEF(&_14$$8);
	ZVAL_UNDEF(&_15$$8);
	ZVAL_UNDEF(&_17$$8);
	ZVAL_UNDEF(&_16$$8);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &q);

	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	if (Z_TYPE_P(q) == IS_NULL) {
		RETURN_MM_NULL();
	}
	ZEPHIR_CALL_METHOD(&_0, q, "getdatacenter", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&_0, "")) {
		zephir_read_property(&_1$$4, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_2$$4, q, "getdatacenter", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_3$$4);
		ZVAL_STRING(&_3$$4, "dc");
		ZEPHIR_CALL_METHOD(NULL, &_1$$4, "set", NULL, 0, &_3$$4, &_2$$4);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_4, q, "gettoken", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&_4, "")) {
		zephir_read_property(&_5$$5, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_6$$5, &_5$$5, "gettokeninheader", NULL, 0);
		zephir_check_call_status();
		if (zephir_is_true(&_6$$5)) {
			zephir_read_property(&_7$$6, this_ptr, SL("headers"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(&_8$$6, q, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_9$$6);
			ZVAL_STRING(&_9$$6, "X-Consul-Token");
			ZEPHIR_CALL_METHOD(NULL, &_7$$6, "set", NULL, 0, &_9$$6, &_8$$6);
			zephir_check_call_status();
		} else {
			zephir_read_property(&_10$$7, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(&_11$$7, q, "gettoken", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_12$$7);
			ZVAL_STRING(&_12$$7, "token");
			ZEPHIR_CALL_METHOD(NULL, &_10$$7, "set", NULL, 0, &_12$$7, &_11$$7);
			zephir_check_call_status();
		}
	}
	ZEPHIR_CALL_METHOD(&_13, q, "getrelayfactor", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(&_13, 0)) {
		zephir_read_property(&_14$$8, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_15$$8, q, "getrelayfactor", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(&_16$$8, &_15$$8);
		ZEPHIR_INIT_VAR(&_17$$8);
		ZVAL_STRING(&_17$$8, "relay-factor");
		ZEPHIR_CALL_METHOD(NULL, &_14$$8, "set", NULL, 0, &_17$$8, &_16$$8);
		zephir_check_call_status();
	}
	zephir_update_property_zval(this_ptr, SL("uri"), &__$null);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Request, getUri) {

	zval _7$$3;
	zval uri, _0, _1$$3, _2$$3, _3$$3, _4$$3, _5$$3, _6$$3, _8$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&uri);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_7$$3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("uri"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_EMPTY(&_0)) {
		ZEPHIR_INIT_VAR(&uri);
		object_init_ex(&uri, consulate_http_uri_ce);
		zephir_read_property(&_1$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_2$$3, &_1$$3, "getscheme", NULL, 0);
		zephir_check_call_status();
		zephir_read_property(&_3$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(&_4$$3, &_3$$3, "getaddress", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&_5$$3, this_ptr, "getpath", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_OBS_VAR(&_6$$3);
		zephir_read_property(&_6$$3, this_ptr, SL("params"), PH_NOISY_CC);
		zephir_get_strval(&_7$$3, &_6$$3);
		ZEPHIR_INIT_VAR(&_8$$3);
		ZVAL_STRING(&_8$$3, "");
		ZEPHIR_CALL_METHOD(NULL, &uri, "__construct", NULL, 54, &_2$$3, &_4$$3, &_5$$3, &_7$$3, &_8$$3);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("uri"), &uri);
	}
	RETURN_MM_MEMBER(getThis(), "uri");

}

