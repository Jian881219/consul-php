
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
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/concat.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Kv) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api, Kv, consulate, api_kv, consulate_api_endpoint_ce, consulate_api_kv_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Kv, get) {

	HashTable *_2;
	HashPosition _1;
	zval *entries;
	zephir_fcall_cache_entry *_6 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key_param = NULL, *q = NULL, *r = NULL, *response = NULL, *qm = NULL, *data = NULL, *idx = NULL, *entry = NULL, *_0, **_3, *_4$$4 = NULL, *_5$$4 = NULL, *_7$$5;
	zval *key = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &key_param, &q);

	zephir_get_strval(key, key_param);
	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_INIT_VAR(entries);
	array_init(entries);
	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "getitem", NULL, 26, key, _0, q);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(response);
	zephir_array_fetch_long(&response, r, 0, PH_NOISY, "consulate/api/kv.zep", 13 TSRMLS_CC);
	ZEPHIR_OBS_VAR(qm);
	zephir_array_fetch_long(&qm, r, 1, PH_NOISY, "consulate/api/kv.zep", 13 TSRMLS_CC);
	if (Z_TYPE_P(response) == IS_NULL) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, ZEPHIR_GLOBAL(global_null));
		zephir_array_fast_append(return_value, qm);
		RETURN_MM();
	}
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, response);
	zephir_check_call_status();
	zephir_is_iterable(data, &_2, &_1, 0, 0, "consulate/api/kv.zep", 25);
	for (
	  ; zend_hash_get_current_data_ex(_2, (void**) &_3, &_1) == SUCCESS
	  ; zend_hash_move_forward_ex(_2, &_1)
	) {
		ZEPHIR_GET_HMKEY(idx, _2, _1);
		ZEPHIR_GET_HVALUE(entry, _3);
		ZEPHIR_INIT_NVAR(_4$$4);
		object_init_ex(_4$$4, consulate_api_kv_pair_ce);
		ZEPHIR_INIT_NVAR(_5$$4);
		ZVAL_BOOL(_5$$4, 1);
		ZEPHIR_CALL_METHOD(NULL, _4$$4, "__construct", &_6, 27, entry, _5$$4);
		zephir_check_call_status();
		zephir_array_update_zval(&entries, idx, &_4$$4, PH_COPY | PH_SEPARATE);
	}
	if (zephir_fast_count_int(entries TSRMLS_CC) > 0) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		ZEPHIR_OBS_VAR(_7$$5);
		zephir_array_fetch_long(&_7$$5, entries, 0, PH_NOISY, "consulate/api/kv.zep", 26 TSRMLS_CC);
		zephir_array_fast_append(return_value, _7$$5);
		zephir_array_fast_append(return_value, qm);
		RETURN_MM();
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, ZEPHIR_GLOBAL(global_null));
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, list) {

	HashTable *_2;
	HashPosition _1;
	zval *entries, *_0;
	zephir_fcall_cache_entry *_6 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *prefix_param = NULL, *q = NULL, *r = NULL, *response = NULL, *qm = NULL, *data = NULL, *idx = NULL, *entry = NULL, **_3, *_4$$4 = NULL, *_5$$4 = NULL;
	zval *prefix = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &prefix_param, &q);

	zephir_get_strval(prefix, prefix_param);
	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_INIT_VAR(entries);
	array_init(entries);
	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	add_assoc_stringl_ex(_0, SS("recurse"), SL(""), 1);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "getitem", NULL, 26, prefix, _0, q);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(response);
	zephir_array_fetch_long(&response, r, 0, PH_NOISY, "consulate/api/kv.zep", 39 TSRMLS_CC);
	ZEPHIR_OBS_VAR(qm);
	zephir_array_fetch_long(&qm, r, 1, PH_NOISY, "consulate/api/kv.zep", 39 TSRMLS_CC);
	if (Z_TYPE_P(response) == IS_NULL) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, ZEPHIR_GLOBAL(global_null));
		zephir_array_fast_append(return_value, qm);
		RETURN_MM();
	}
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, response);
	zephir_check_call_status();
	zephir_is_iterable(data, &_2, &_1, 0, 0, "consulate/api/kv.zep", 51);
	for (
	  ; zend_hash_get_current_data_ex(_2, (void**) &_3, &_1) == SUCCESS
	  ; zend_hash_move_forward_ex(_2, &_1)
	) {
		ZEPHIR_GET_HMKEY(idx, _2, _1);
		ZEPHIR_GET_HVALUE(entry, _3);
		ZEPHIR_INIT_NVAR(_4$$4);
		object_init_ex(_4$$4, consulate_api_kv_pair_ce);
		ZEPHIR_INIT_NVAR(_5$$4);
		ZVAL_BOOL(_5$$4, 1);
		ZEPHIR_CALL_METHOD(NULL, _4$$4, "__construct", &_6, 27, entry, _5$$4);
		zephir_check_call_status();
		zephir_array_update_zval(&entries, idx, &_4$$4, PH_COPY | PH_SEPARATE);
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, entries);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, keys) {

	HashTable *_2;
	HashPosition _1;
	zval *entries;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *prefix_param = NULL, *separator_param = NULL, *q = NULL, *params = NULL, *r = NULL, *response = NULL, *qm = NULL, *data = NULL, *idx = NULL, *entry = NULL, **_3, *_0$$3;
	zval *prefix = NULL, *separator = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 3, &prefix_param, &separator_param, &q);

	if (!prefix_param) {
		ZEPHIR_INIT_VAR(prefix);
		ZVAL_STRING(prefix, "", 1);
	} else {
		zephir_get_strval(prefix, prefix_param);
	}
	if (!separator_param) {
		ZEPHIR_INIT_VAR(separator);
		ZVAL_STRING(separator, "", 1);
	} else {
		zephir_get_strval(separator, separator_param);
	}
	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_INIT_VAR(entries);
	array_init(entries);
	ZEPHIR_INIT_VAR(params);
	zephir_create_array(params, 1, 0 TSRMLS_CC);
	add_assoc_stringl_ex(params, SS("keys"), SL(""), 1);
	if (!ZEPHIR_IS_STRING(separator, "")) {
		ZEPHIR_INIT_VAR(_0$$3);
		ZVAL_STRING(_0$$3, "", 1);
		zephir_array_update_string(&params, SL("separator"), &_0$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&r, this_ptr, "getitem", NULL, 26, prefix, params, q);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(response);
	zephir_array_fetch_long(&response, r, 0, PH_NOISY, "consulate/api/kv.zep", 69 TSRMLS_CC);
	ZEPHIR_OBS_VAR(qm);
	zephir_array_fetch_long(&qm, r, 1, PH_NOISY, "consulate/api/kv.zep", 69 TSRMLS_CC);
	if (Z_TYPE_P(response) == IS_NULL) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, ZEPHIR_GLOBAL(global_null));
		zephir_array_fast_append(return_value, qm);
		RETURN_MM();
	}
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, response);
	zephir_check_call_status();
	zephir_is_iterable(data, &_2, &_1, 0, 0, "consulate/api/kv.zep", 81);
	for (
	  ; zend_hash_get_current_data_ex(_2, (void**) &_3, &_1) == SUCCESS
	  ; zend_hash_move_forward_ex(_2, &_1)
	) {
		ZEPHIR_GET_HMKEY(idx, _2, _1);
		ZEPHIR_GET_HVALUE(entry, _3);
		zephir_array_update_zval(&entries, idx, &entry, PH_COPY | PH_SEPARATE);
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, entries);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, getItem) {

	HashTable *_3;
	HashPosition _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *params = NULL;
	zval *key_param = NULL, *params_param = NULL, *q = NULL, *r = NULL, *k = NULL, *v = NULL, *qm = NULL, *data = NULL, *response = NULL, *rtt = NULL, *statusCode = NULL, *_1 = NULL, **_4, *_6 = NULL, *_5$$3 = NULL;
	zval *key = NULL, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &key_param, &params_param, &q);

	zephir_get_strval(key, key_param);
	if (!params_param) {
		ZEPHIR_INIT_VAR(params);
		array_init(params);
	} else {
		zephir_get_arrval(params, params_param);
	}
	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_CONCAT_SV(_0, "v1/kv/", key);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "GET", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, _1, _0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	zephir_is_iterable(params, &_3, &_2, 0, 0, "consulate/api/kv.zep", 96);
	for (
	  ; zend_hash_get_current_data_ex(_3, (void**) &_4, &_2) == SUCCESS
	  ; zend_hash_move_forward_ex(_3, &_2)
	) {
		ZEPHIR_GET_HMKEY(k, _3, _2);
		ZEPHIR_GET_HVALUE(v, _4);
		ZEPHIR_OBS_NVAR(_5$$3);
		zephir_read_property(&_5$$3, r, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(NULL, _5$$3, "set", NULL, 0, k, v);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&data, this_ptr, "dorequest", NULL, 0, r);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(rtt);
	zephir_array_fetch_long(&rtt, data, 0, PH_NOISY, "consulate/api/kv.zep", 98 TSRMLS_CC);
	ZEPHIR_OBS_VAR(response);
	zephir_array_fetch_long(&response, data, 1, PH_NOISY, "consulate/api/kv.zep", 99 TSRMLS_CC);
	ZEPHIR_INIT_VAR(qm);
	object_init_ex(qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(_1);
	array_init(_1);
	ZEPHIR_CALL_METHOD(NULL, qm, "__construct", NULL, 22, _1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_6, this_ptr, "parsequerymeta", NULL, 0, response, qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(qm, _6);
	ZEPHIR_CALL_METHOD(NULL, qm, "setrequesttime", NULL, 23, rtt);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&statusCode, response, "getstatuscode", NULL, 0);
	zephir_check_call_status();
	if (ZEPHIR_IS_LONG(statusCode, 404)) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, ZEPHIR_GLOBAL(global_null));
		zephir_array_fast_append(return_value, qm);
		RETURN_MM();
	} else if (!ZEPHIR_IS_LONG(statusCode, 200)) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, ZEPHIR_GLOBAL(global_null));
		zephir_array_fast_append(return_value, ZEPHIR_GLOBAL(global_null));
		RETURN_MM();
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, response);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, put) {

	zval *_2$$3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, *q, *params = NULL, *data = NULL, *_0 = NULL, *_3 = NULL, *_4 = NULL, *_5, *_1$$3 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(params);
	array_init(params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getflags", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(_0, 0)) {
		ZEPHIR_CALL_METHOD(&_1$$3, pair, "getflags", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(_2$$3, _1$$3);
		zephir_array_update_string(&params, SL("flags"), &_2$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&_3, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_4, pair, "getvalue", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "updateitem", NULL, 28, _3, params, _4, q);
	zephir_check_call_status();
	zephir_create_array(return_value, 1, 0 TSRMLS_CC);
	ZEPHIR_OBS_VAR(_5);
	zephir_array_fetch_long(&_5, data, 1, PH_NOISY, "consulate/api/kv.zep", 127 TSRMLS_CC);
	zephir_array_fast_append(return_value, _5);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, cas) {

	zval *_4 = NULL, *_2$$3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, *q, *params = NULL, *_0 = NULL, *_3 = NULL, *_5 = NULL, *_6 = NULL, *_1$$3 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(params);
	array_init(params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getflags", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(_0, 0)) {
		ZEPHIR_CALL_METHOD(&_1$$3, pair, "getflags", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(_2$$3, _1$$3);
		zephir_array_update_string(&params, SL("flags"), &_2$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&_3, pair, "getmodifyindex", NULL, 0);
	zephir_check_call_status();
	zephir_get_strval(_4, _3);
	zephir_array_update_string(&params, SL("cas"), &_4, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(&_5, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_6, pair, "getvalue", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updateitem", NULL, 28, _5, params, _6, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, acquire) {

	zval *_2$$3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, *q, *params = NULL, *_0 = NULL, *_3 = NULL, *_4 = NULL, *_5 = NULL, *_1$$3 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(params);
	array_init(params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getflags", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(_0, 0)) {
		ZEPHIR_CALL_METHOD(&_1$$3, pair, "getflags", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(_2$$3, _1$$3);
		zephir_array_update_string(&params, SL("flags"), &_2$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&_3, pair, "getsession", NULL, 0);
	zephir_check_call_status();
	zephir_array_update_string(&params, SL("acquire"), &_3, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(&_4, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_5, pair, "getvalue", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updateitem", NULL, 28, _4, params, _5, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, release) {

	zval *_2$$3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, *q, *params = NULL, *_0 = NULL, *_3 = NULL, *_4 = NULL, *_5 = NULL, *_1$$3 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(params);
	array_init(params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getflags", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(_0, 0)) {
		ZEPHIR_CALL_METHOD(&_1$$3, pair, "getflags", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(_2$$3, _1$$3);
		zephir_array_update_string(&params, SL("flags"), &_2$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&_3, pair, "getsession", NULL, 0);
	zephir_check_call_status();
	zephir_array_update_string(&params, SL("release"), &_3, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(&_4, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_5, pair, "getvalue", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updateitem", NULL, 28, _4, params, _5, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, updateItem) {

	HashTable *_11;
	HashPosition _10;
	zend_bool _1;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *params = NULL, *_15;
	zval *key_param = NULL, *params_param = NULL, *value = NULL, *q, *_0 = NULL, _2, _3, *_4, *r = NULL, *data = NULL, *k = NULL, *v = NULL, *response = NULL, *rtt = NULL, *qm = NULL, *_9 = NULL, **_12, *_14 = NULL, *_16 = NULL, *_5$$3, _6$$3, *_7$$3 = NULL, *_13$$4 = NULL;
	zval *key = NULL, *_8;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 2, &key_param, &params_param, &value, &q);

	zephir_get_strval(key, key_param);
	if (!params_param) {
		ZEPHIR_INIT_VAR(params);
		array_init(params);
	} else {
		zephir_get_arrval(params, params_param);
	}
	if (!value) {
		value = ZEPHIR_GLOBAL(global_null);
	}


	_1 = zephir_fast_strlen_ev(key) > 0;
	if (_1) {
		ZEPHIR_SINIT_VAR(_2);
		ZVAL_LONG(&_2, 0);
		ZEPHIR_SINIT_VAR(_3);
		ZVAL_LONG(&_3, 1);
		ZEPHIR_INIT_VAR(_4);
		zephir_substr(_4, key, 0 , 1 , 0);
		_1 = ZEPHIR_IS_STRING(_4, "/");
	}
	if (_1) {
		ZEPHIR_INIT_VAR(_5$$3);
		object_init_ex(_5$$3, consulate_api_kv_exception_ce);
		ZEPHIR_SINIT_VAR(_6$$3);
		ZVAL_STRING(&_6$$3, "Invalid key. Key must not begin with a '/': %s", 0);
		ZEPHIR_CALL_FUNCTION(&_7$$3, "sprintf", NULL, 10, &_6$$3, key);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, _5$$3, "__construct", NULL, 11, _7$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(_5$$3, "consulate/api/kv.zep", 168 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_VAR(_8);
	ZEPHIR_CONCAT_SV(_8, "v1/kv/", key);
	ZEPHIR_INIT_VAR(_9);
	ZVAL_STRING(_9, "PUT", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, _9, _8, value);
	zephir_check_temp_parameter(_9);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, r, "setwriteoptions", NULL, 0, q);
	zephir_check_call_status();
	zephir_is_iterable(params, &_11, &_10, 0, 0, "consulate/api/kv.zep", 180);
	for (
	  ; zend_hash_get_current_data_ex(_11, (void**) &_12, &_10) == SUCCESS
	  ; zend_hash_move_forward_ex(_11, &_10)
	) {
		ZEPHIR_GET_HMKEY(k, _11, _10);
		ZEPHIR_GET_HVALUE(v, _12);
		ZEPHIR_OBS_NVAR(_13$$4);
		zephir_read_property(&_13$$4, r, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(NULL, _13$$4, "set", NULL, 0, k, v);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_14, this_ptr, "dorequest", NULL, 0, r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, _14);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(rtt);
	zephir_array_fetch_long(&rtt, data, 0, PH_NOISY, "consulate/api/kv.zep", 182 TSRMLS_CC);
	ZEPHIR_OBS_VAR(response);
	zephir_array_fetch_long(&response, data, 1, PH_NOISY, "consulate/api/kv.zep", 182 TSRMLS_CC);
	ZEPHIR_INIT_VAR(qm);
	object_init_ex(qm, consulate_writemeta_ce);
	ZEPHIR_INIT_VAR(_15);
	zephir_create_array(_15, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&_15, SL("requestTime"), &rtt, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(NULL, qm, "__construct", NULL, 19, _15);
	zephir_check_call_status();
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_16, response, "getbody", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(_9);
	ZVAL_BOOL(_9, ZEPHIR_IS_STRING(_16, "true"));
	zephir_array_fast_append(return_value, _9);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key_param = NULL, *q, *data = NULL, *_0, *_1;
	zval *key = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &key_param, &q);

	zephir_get_strval(key, key_param);


	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "deleteitem", NULL, 29, key, _0, q);
	zephir_check_call_status();
	zephir_create_array(return_value, 1, 0 TSRMLS_CC);
	ZEPHIR_OBS_VAR(_1);
	zephir_array_fetch_long(&_1, data, 1, PH_NOISY, "consulate/api/kv.zep", 196 TSRMLS_CC);
	zephir_array_fast_append(return_value, _1);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, deleteCAS) {

	zval *_1 = NULL;
	zval *params;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, *q, *_0 = NULL, *_2 = NULL, *_3;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(params);
	array_init(params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getmodifyindex", NULL, 0);
	zephir_check_call_status();
	zephir_get_strval(_1, _0);
	zephir_array_update_string(&params, SL("cas"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(&_2, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(_3);
	array_init(_3);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "deleteitem", NULL, 29, _2, _3, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, deleteTree) {

	zval *_0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *prefix_param = NULL, *q, *data = NULL;
	zval *prefix = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &prefix_param, &q);

	zephir_get_strval(prefix, prefix_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	add_assoc_stringl_ex(_0, SS("recurse"), SL(""), 1);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "deleteitem", NULL, 29, prefix, _0, q);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Api_Kv, deleteItem) {

	HashTable *_5;
	HashPosition _4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *params = NULL, *_9;
	zval *key_param = NULL, *params_param = NULL, *q, *r = NULL, *k = NULL, *v = NULL, *data = NULL, *rtt = NULL, *response = NULL, *qm = NULL, *_0, _1, *_2, *_3 = NULL, **_6, *_8 = NULL, *_10 = NULL, *_7$$3 = NULL;
	zval *key = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &key_param, &params_param, &q);

	zephir_get_strval(key, key_param);
	zephir_get_arrval(params, params_param);


	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_STRING(&_1, "/", 0);
	zephir_fast_trim(_0, key, &_1, ZEPHIR_TRIM_BOTH TSRMLS_CC);
	ZEPHIR_INIT_VAR(_2);
	ZEPHIR_CONCAT_SV(_2, "v1/kv/", _0);
	ZEPHIR_INIT_VAR(_3);
	ZVAL_STRING(_3, "DELETE", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, _3, _2, params);
	zephir_check_temp_parameter(_3);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, r, "setwriteoptions", NULL, 0, q);
	zephir_check_call_status();
	zephir_is_iterable(params, &_5, &_4, 0, 0, "consulate/api/kv.zep", 222);
	for (
	  ; zend_hash_get_current_data_ex(_5, (void**) &_6, &_4) == SUCCESS
	  ; zend_hash_move_forward_ex(_5, &_4)
	) {
		ZEPHIR_GET_HMKEY(k, _5, _4);
		ZEPHIR_GET_HVALUE(v, _6);
		ZEPHIR_OBS_NVAR(_7$$3);
		zephir_read_property(&_7$$3, r, SL("params"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(NULL, _7$$3, "set", NULL, 0, k, v);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_8, this_ptr, "dorequest", NULL, 0, r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, _8);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(rtt);
	zephir_array_fetch_long(&rtt, data, 0, PH_NOISY, "consulate/api/kv.zep", 223 TSRMLS_CC);
	ZEPHIR_OBS_VAR(response);
	zephir_array_fetch_long(&response, data, 1, PH_NOISY, "consulate/api/kv.zep", 223 TSRMLS_CC);
	ZEPHIR_INIT_VAR(qm);
	object_init_ex(qm, consulate_writemeta_ce);
	ZEPHIR_INIT_VAR(_9);
	zephir_create_array(_9, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&_9, SL("requestTime"), &rtt, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(NULL, qm, "__construct", NULL, 19, _9);
	zephir_check_call_status();
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_10, response, "getbody", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(_3);
	ZVAL_BOOL(_3, ZEPHIR_IS_STRING(_10, "true"));
	zephir_array_fast_append(return_value, _3);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

