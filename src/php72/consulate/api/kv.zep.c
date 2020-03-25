
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

	zend_string *_4;
	zend_ulong _3;
	zval entries;
	zephir_fcall_cache_entry *_7 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key_param = NULL, *q = NULL, q_sub, __$null, r, response, qm, data, idx, entry, _0, *_1, _2, _5$$4, _6$$4, _8$$5, _9$$5, _10$$6;
	zval key;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&entry);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$6);
	ZVAL_UNDEF(&entries);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &key_param, &q);

	zephir_get_strval(&key, key_param);
	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	ZEPHIR_INIT_VAR(&entries);
	array_init(&entries);
	ZEPHIR_INIT_VAR(&_0);
	array_init(&_0);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "getitem", NULL, 26, &key, &_0, q);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&response);
	zephir_array_fetch_long(&response, &r, 0, PH_NOISY, "consulate/api/kv.zep", 13 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&qm);
	zephir_array_fetch_long(&qm, &r, 1, PH_NOISY, "consulate/api/kv.zep", 13 TSRMLS_CC);
	if (Z_TYPE_P(&response) == IS_NULL) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, &__$null);
		zephir_array_fast_append(return_value, &qm);
		RETURN_MM();
	}
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, &response);
	zephir_check_call_status();
	zephir_is_iterable(&data, 0, "consulate/api/kv.zep", 25);
	if (Z_TYPE_P(&data) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&data), _3, _4, _1)
		{
			ZEPHIR_INIT_NVAR(&idx);
			if (_4 != NULL) { 
				ZVAL_STR_COPY(&idx, _4);
			} else {
				ZVAL_LONG(&idx, _3);
			}
			ZEPHIR_INIT_NVAR(&entry);
			ZVAL_COPY(&entry, _1);
			ZEPHIR_INIT_NVAR(&_5$$4);
			object_init_ex(&_5$$4, consulate_api_kv_pair_ce);
			ZVAL_BOOL(&_6$$4, 1);
			ZEPHIR_CALL_METHOD(NULL, &_5$$4, "__construct", &_7, 27, &entry, &_6$$4);
			zephir_check_call_status();
			zephir_array_update_zval(&entries, &idx, &_5$$4, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &data, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_2, &data, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_2)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&idx, &data, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&entry, &data, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_8$$5);
				object_init_ex(&_8$$5, consulate_api_kv_pair_ce);
				ZVAL_BOOL(&_9$$5, 1);
				ZEPHIR_CALL_METHOD(NULL, &_8$$5, "__construct", &_7, 27, &entry, &_9$$5);
				zephir_check_call_status();
				zephir_array_update_zval(&entries, &idx, &_8$$5, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &data, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&entry);
	ZEPHIR_INIT_NVAR(&idx);
	if (zephir_fast_count_int(&entries TSRMLS_CC) > 0) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		ZEPHIR_OBS_VAR(&_10$$6);
		zephir_array_fetch_long(&_10$$6, &entries, 0, PH_NOISY, "consulate/api/kv.zep", 26 TSRMLS_CC);
		zephir_array_fast_append(return_value, &_10$$6);
		zephir_array_fast_append(return_value, &qm);
		RETURN_MM();
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, &__$null);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, list) {

	zend_string *_4;
	zend_ulong _3;
	zval entries, _0;
	zephir_fcall_cache_entry *_7 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *prefix_param = NULL, *q = NULL, q_sub, __$null, r, response, qm, data, idx, entry, *_1, _2, _5$$4, _6$$4, _8$$5, _9$$5;
	zval prefix;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&prefix);
	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&entry);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&entries);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &prefix_param, &q);

	zephir_get_strval(&prefix, prefix_param);
	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	ZEPHIR_INIT_VAR(&entries);
	array_init(&entries);
	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 1, 0 TSRMLS_CC);
	add_assoc_stringl_ex(&_0, SL("recurse"), SL(""));
	ZEPHIR_CALL_METHOD(&r, this_ptr, "getitem", NULL, 26, &prefix, &_0, q);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&response);
	zephir_array_fetch_long(&response, &r, 0, PH_NOISY, "consulate/api/kv.zep", 39 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&qm);
	zephir_array_fetch_long(&qm, &r, 1, PH_NOISY, "consulate/api/kv.zep", 39 TSRMLS_CC);
	if (Z_TYPE_P(&response) == IS_NULL) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, &__$null);
		zephir_array_fast_append(return_value, &qm);
		RETURN_MM();
	}
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, &response);
	zephir_check_call_status();
	zephir_is_iterable(&data, 0, "consulate/api/kv.zep", 51);
	if (Z_TYPE_P(&data) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&data), _3, _4, _1)
		{
			ZEPHIR_INIT_NVAR(&idx);
			if (_4 != NULL) { 
				ZVAL_STR_COPY(&idx, _4);
			} else {
				ZVAL_LONG(&idx, _3);
			}
			ZEPHIR_INIT_NVAR(&entry);
			ZVAL_COPY(&entry, _1);
			ZEPHIR_INIT_NVAR(&_5$$4);
			object_init_ex(&_5$$4, consulate_api_kv_pair_ce);
			ZVAL_BOOL(&_6$$4, 1);
			ZEPHIR_CALL_METHOD(NULL, &_5$$4, "__construct", &_7, 27, &entry, &_6$$4);
			zephir_check_call_status();
			zephir_array_update_zval(&entries, &idx, &_5$$4, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &data, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_2, &data, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_2)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&idx, &data, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&entry, &data, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_8$$5);
				object_init_ex(&_8$$5, consulate_api_kv_pair_ce);
				ZVAL_BOOL(&_9$$5, 1);
				ZEPHIR_CALL_METHOD(NULL, &_8$$5, "__construct", &_7, 27, &entry, &_9$$5);
				zephir_check_call_status();
				zephir_array_update_zval(&entries, &idx, &_8$$5, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &data, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&entry);
	ZEPHIR_INIT_NVAR(&idx);
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, &entries);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, keys) {

	zend_string *_4;
	zend_ulong _3;
	zval entries;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *prefix_param = NULL, *separator_param = NULL, *q = NULL, q_sub, __$null, params, r, response, qm, data, idx, entry, *_1, _2, _0$$3;
	zval prefix, separator;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&prefix);
	ZVAL_UNDEF(&separator);
	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&params);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&entry);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&entries);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 3, &prefix_param, &separator_param, &q);

	if (!prefix_param) {
		ZEPHIR_INIT_VAR(&prefix);
		ZVAL_STRING(&prefix, "");
	} else {
		zephir_get_strval(&prefix, prefix_param);
	}
	if (!separator_param) {
		ZEPHIR_INIT_VAR(&separator);
		ZVAL_STRING(&separator, "");
	} else {
		zephir_get_strval(&separator, separator_param);
	}
	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	ZEPHIR_INIT_VAR(&entries);
	array_init(&entries);
	ZEPHIR_INIT_VAR(&params);
	zephir_create_array(&params, 1, 0 TSRMLS_CC);
	add_assoc_stringl_ex(&params, SL("keys"), SL(""));
	if (!ZEPHIR_IS_STRING(&separator, "")) {
		ZEPHIR_INIT_VAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "");
		zephir_array_update_string(&params, SL("separator"), &_0$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&r, this_ptr, "getitem", NULL, 26, &prefix, &params, q);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&response);
	zephir_array_fetch_long(&response, &r, 0, PH_NOISY, "consulate/api/kv.zep", 69 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&qm);
	zephir_array_fetch_long(&qm, &r, 1, PH_NOISY, "consulate/api/kv.zep", 69 TSRMLS_CC);
	if (Z_TYPE_P(&response) == IS_NULL) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, &__$null);
		zephir_array_fast_append(return_value, &qm);
		RETURN_MM();
	}
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, &response);
	zephir_check_call_status();
	zephir_is_iterable(&data, 0, "consulate/api/kv.zep", 81);
	if (Z_TYPE_P(&data) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&data), _3, _4, _1)
		{
			ZEPHIR_INIT_NVAR(&idx);
			if (_4 != NULL) { 
				ZVAL_STR_COPY(&idx, _4);
			} else {
				ZVAL_LONG(&idx, _3);
			}
			ZEPHIR_INIT_NVAR(&entry);
			ZVAL_COPY(&entry, _1);
			zephir_array_update_zval(&entries, &idx, &entry, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &data, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_2, &data, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_2)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&idx, &data, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&entry, &data, "current", NULL, 0);
			zephir_check_call_status();
				zephir_array_update_zval(&entries, &idx, &entry, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &data, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&entry);
	ZEPHIR_INIT_NVAR(&idx);
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, &entries);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, getItem) {

	zend_string *_5;
	zend_ulong _4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval params;
	zval *key_param = NULL, *params_param = NULL, *q = NULL, q_sub, __$null, r, k, v, qm, data, response, rtt, statusCode, _1, *_2, _3, _8, _6$$3, _7$$4;
	zval key, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&rtt);
	ZVAL_UNDEF(&statusCode);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&params);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &key_param, &params_param, &q);

	zephir_get_strval(&key, key_param);
	if (!params_param) {
		ZEPHIR_INIT_VAR(&params);
		array_init(&params);
	} else {
		zephir_get_arrval(&params, params_param);
	}
	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "v1/kv/", &key);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "GET");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	zephir_is_iterable(&params, 0, "consulate/api/kv.zep", 96);
	if (Z_TYPE_P(&params) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&params), _4, _5, _2)
		{
			ZEPHIR_INIT_NVAR(&k);
			if (_5 != NULL) { 
				ZVAL_STR_COPY(&k, _5);
			} else {
				ZVAL_LONG(&k, _4);
			}
			ZEPHIR_INIT_NVAR(&v);
			ZVAL_COPY(&v, _2);
			zephir_read_property(&_6$$3, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(NULL, &_6$$3, "set", NULL, 0, &k, &v);
			zephir_check_call_status();
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &params, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_3, &params, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_3)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&k, &params, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&v, &params, "current", NULL, 0);
			zephir_check_call_status();
				zephir_read_property(&_7$$4, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
				ZEPHIR_CALL_METHOD(NULL, &_7$$4, "set", NULL, 0, &k, &v);
				zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &params, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&v);
	ZEPHIR_INIT_NVAR(&k);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&rtt);
	zephir_array_fetch_long(&rtt, &data, 0, PH_NOISY, "consulate/api/kv.zep", 98 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&response);
	zephir_array_fetch_long(&response, &data, 1, PH_NOISY, "consulate/api/kv.zep", 99 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&qm);
	object_init_ex(&qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(&_1);
	array_init(&_1);
	ZEPHIR_CALL_METHOD(NULL, &qm, "__construct", NULL, 22, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_8, this_ptr, "parsequerymeta", NULL, 0, &response, &qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(&qm, &_8);
	ZEPHIR_CALL_METHOD(NULL, &qm, "setrequesttime", NULL, 23, &rtt);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&statusCode, &response, "getstatuscode", NULL, 0);
	zephir_check_call_status();
	if (ZEPHIR_IS_LONG(&statusCode, 404)) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, &__$null);
		zephir_array_fast_append(return_value, &qm);
		RETURN_MM();
	} else if (!ZEPHIR_IS_LONG(&statusCode, 200)) {
		zephir_create_array(return_value, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(return_value, &__$null);
		zephir_array_fast_append(return_value, &__$null);
		RETURN_MM();
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, &response);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, put) {

	zval _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, pair_sub, *q, q_sub, params, data, _0, _3, _4, _5, _1$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pair_sub);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&params);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(&params);
	array_init(&params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getflags", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(&_0, 0)) {
		ZEPHIR_CALL_METHOD(&_1$$3, pair, "getflags", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(&_2$$3, &_1$$3);
		zephir_array_update_string(&params, SL("flags"), &_2$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&_3, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_4, pair, "getvalue", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "updateitem", NULL, 28, &_3, &params, &_4, q);
	zephir_check_call_status();
	zephir_create_array(return_value, 1, 0 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&_5);
	zephir_array_fetch_long(&_5, &data, 1, PH_NOISY, "consulate/api/kv.zep", 127 TSRMLS_CC);
	zephir_array_fast_append(return_value, &_5);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, cas) {

	zval _4, _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, pair_sub, *q, q_sub, params, _0, _3, _5, _6, _1$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pair_sub);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&params);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(&params);
	array_init(&params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getflags", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(&_0, 0)) {
		ZEPHIR_CALL_METHOD(&_1$$3, pair, "getflags", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(&_2$$3, &_1$$3);
		zephir_array_update_string(&params, SL("flags"), &_2$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&_3, pair, "getmodifyindex", NULL, 0);
	zephir_check_call_status();
	zephir_get_strval(&_4, &_3);
	zephir_array_update_string(&params, SL("cas"), &_4, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(&_5, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_6, pair, "getvalue", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updateitem", NULL, 28, &_5, &params, &_6, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, acquire) {

	zval _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, pair_sub, *q, q_sub, params, _0, _3, _4, _5, _1$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pair_sub);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&params);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(&params);
	array_init(&params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getflags", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(&_0, 0)) {
		ZEPHIR_CALL_METHOD(&_1$$3, pair, "getflags", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(&_2$$3, &_1$$3);
		zephir_array_update_string(&params, SL("flags"), &_2$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&_3, pair, "getsession", NULL, 0);
	zephir_check_call_status();
	zephir_array_update_string(&params, SL("acquire"), &_3, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(&_4, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_5, pair, "getvalue", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updateitem", NULL, 28, &_4, &params, &_5, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, release) {

	zval _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, pair_sub, *q, q_sub, params, _0, _3, _4, _5, _1$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pair_sub);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&params);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(&params);
	array_init(&params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getflags", NULL, 0);
	zephir_check_call_status();
	if (!ZEPHIR_IS_LONG(&_0, 0)) {
		ZEPHIR_CALL_METHOD(&_1$$3, pair, "getflags", NULL, 0);
		zephir_check_call_status();
		zephir_get_strval(&_2$$3, &_1$$3);
		zephir_array_update_string(&params, SL("flags"), &_2$$3, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_CALL_METHOD(&_3, pair, "getsession", NULL, 0);
	zephir_check_call_status();
	zephir_array_update_string(&params, SL("release"), &_3, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(&_4, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_5, pair, "getvalue", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updateitem", NULL, 28, &_4, &params, &_5, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, updateItem) {

	zend_string *_13;
	zend_ulong _12;
	zend_bool _1;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval params, _17;
	zval *key_param = NULL, *params_param = NULL, *value = NULL, value_sub, *q, q_sub, __$null, _0, _2, _3, _4, r, data, k, v, response, rtt, qm, _9, *_10, _11, _16, _18, _5$$3, _6$$3, _7$$3, _14$$4, _15$$5;
	zval key, _8;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&rtt);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_18);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_14$$4);
	ZVAL_UNDEF(&_15$$5);
	ZVAL_UNDEF(&params);
	ZVAL_UNDEF(&_17);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 2, &key_param, &params_param, &value, &q);

	zephir_get_strval(&key, key_param);
	if (!params_param) {
		ZEPHIR_INIT_VAR(&params);
		array_init(&params);
	} else {
		zephir_get_arrval(&params, params_param);
	}
	if (!value) {
		value = &value_sub;
		value = &__$null;
	}


	_1 = zephir_fast_strlen_ev(&key) > 0;
	if (_1) {
		ZVAL_LONG(&_2, 0);
		ZVAL_LONG(&_3, 1);
		ZEPHIR_INIT_VAR(&_4);
		zephir_substr(&_4, &key, 0 , 1 , 0);
		_1 = ZEPHIR_IS_STRING(&_4, "/");
	}
	if (_1) {
		ZEPHIR_INIT_VAR(&_5$$3);
		object_init_ex(&_5$$3, consulate_api_kv_exception_ce);
		ZEPHIR_INIT_VAR(&_6$$3);
		ZVAL_STRING(&_6$$3, "Invalid key. Key must not begin with a '/': %s");
		ZEPHIR_CALL_FUNCTION(&_7$$3, "sprintf", NULL, 10, &_6$$3, &key);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, &_5$$3, "__construct", NULL, 11, &_7$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_5$$3, "consulate/api/kv.zep", 168 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_VAR(&_8);
	ZEPHIR_CONCAT_SV(&_8, "v1/kv/", &key);
	ZEPHIR_INIT_VAR(&_9);
	ZVAL_STRING(&_9, "PUT");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_9, &_8, value);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setwriteoptions", NULL, 0, q);
	zephir_check_call_status();
	zephir_is_iterable(&params, 0, "consulate/api/kv.zep", 180);
	if (Z_TYPE_P(&params) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&params), _12, _13, _10)
		{
			ZEPHIR_INIT_NVAR(&k);
			if (_13 != NULL) { 
				ZVAL_STR_COPY(&k, _13);
			} else {
				ZVAL_LONG(&k, _12);
			}
			ZEPHIR_INIT_NVAR(&v);
			ZVAL_COPY(&v, _10);
			zephir_read_property(&_14$$4, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(NULL, &_14$$4, "set", NULL, 0, &k, &v);
			zephir_check_call_status();
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &params, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_11, &params, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_11)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&k, &params, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&v, &params, "current", NULL, 0);
			zephir_check_call_status();
				zephir_read_property(&_15$$5, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
				ZEPHIR_CALL_METHOD(NULL, &_15$$5, "set", NULL, 0, &k, &v);
				zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &params, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&v);
	ZEPHIR_INIT_NVAR(&k);
	ZEPHIR_CALL_METHOD(&_16, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, &_16);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&rtt);
	zephir_array_fetch_long(&rtt, &data, 0, PH_NOISY, "consulate/api/kv.zep", 182 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&response);
	zephir_array_fetch_long(&response, &data, 1, PH_NOISY, "consulate/api/kv.zep", 182 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&qm);
	object_init_ex(&qm, consulate_writemeta_ce);
	ZEPHIR_INIT_VAR(&_17);
	zephir_create_array(&_17, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&_17, SL("requestTime"), &rtt, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(NULL, &qm, "__construct", NULL, 19, &_17);
	zephir_check_call_status();
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_18, &response, "getbody", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_9);
	ZVAL_BOOL(&_9, ZEPHIR_IS_STRING(&_18, "true"));
	zephir_array_fast_append(return_value, &_9);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key_param = NULL, *q, q_sub, data, _0, _1;
	zval key;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &key_param, &q);

	zephir_get_strval(&key, key_param);


	ZEPHIR_INIT_VAR(&_0);
	array_init(&_0);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "deleteitem", NULL, 29, &key, &_0, q);
	zephir_check_call_status();
	zephir_create_array(return_value, 1, 0 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&_1);
	zephir_array_fetch_long(&_1, &data, 1, PH_NOISY, "consulate/api/kv.zep", 196 TSRMLS_CC);
	zephir_array_fast_append(return_value, &_1);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, deleteCAS) {

	zval _1;
	zval params;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *pair, pair_sub, *q, q_sub, _0, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pair_sub);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&params);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &pair, &q);



	ZEPHIR_INIT_VAR(&params);
	array_init(&params);
	ZEPHIR_CALL_METHOD(&_0, pair, "getmodifyindex", NULL, 0);
	zephir_check_call_status();
	zephir_get_strval(&_1, &_0);
	zephir_array_update_string(&params, SL("cas"), &_1, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(&_2, pair, "getkey", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	array_init(&_3);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "deleteitem", NULL, 29, &_2, &_3, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Kv, deleteTree) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *prefix_param = NULL, *q, q_sub, data;
	zval prefix;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&prefix);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &prefix_param, &q);

	zephir_get_strval(&prefix, prefix_param);


	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 1, 0 TSRMLS_CC);
	add_assoc_stringl_ex(&_0, SL("recurse"), SL(""));
	ZEPHIR_CALL_METHOD(&data, this_ptr, "deleteitem", NULL, 29, &prefix, &_0, q);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Api_Kv, deleteItem) {

	zend_string *_7;
	zend_ulong _6;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval params, _11;
	zval *key_param = NULL, *params_param = NULL, *q, q_sub, r, k, v, data, rtt, response, qm, _0, _1, _2, _3, *_4, _5, _10, _12, _8$$3, _9$$4;
	zval key;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&rtt);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&params);
	ZVAL_UNDEF(&_11);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &key_param, &params_param, &q);

	zephir_get_strval(&key, key_param);
	zephir_get_arrval(&params, params_param);


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "/");
	zephir_fast_trim(&_0, &key, &_1, ZEPHIR_TRIM_BOTH TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SV(&_2, "v1/kv/", &_0);
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "DELETE");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_3, &_2, &params);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setwriteoptions", NULL, 0, q);
	zephir_check_call_status();
	zephir_is_iterable(&params, 0, "consulate/api/kv.zep", 222);
	if (Z_TYPE_P(&params) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&params), _6, _7, _4)
		{
			ZEPHIR_INIT_NVAR(&k);
			if (_7 != NULL) { 
				ZVAL_STR_COPY(&k, _7);
			} else {
				ZVAL_LONG(&k, _6);
			}
			ZEPHIR_INIT_NVAR(&v);
			ZVAL_COPY(&v, _4);
			zephir_read_property(&_8$$3, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(NULL, &_8$$3, "set", NULL, 0, &k, &v);
			zephir_check_call_status();
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &params, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_5, &params, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_5)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&k, &params, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&v, &params, "current", NULL, 0);
			zephir_check_call_status();
				zephir_read_property(&_9$$4, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
				ZEPHIR_CALL_METHOD(NULL, &_9$$4, "set", NULL, 0, &k, &v);
				zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &params, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&v);
	ZEPHIR_INIT_NVAR(&k);
	ZEPHIR_CALL_METHOD(&_10, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, &_10);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&rtt);
	zephir_array_fetch_long(&rtt, &data, 0, PH_NOISY, "consulate/api/kv.zep", 223 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&response);
	zephir_array_fetch_long(&response, &data, 1, PH_NOISY, "consulate/api/kv.zep", 223 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&qm);
	object_init_ex(&qm, consulate_writemeta_ce);
	ZEPHIR_INIT_VAR(&_11);
	zephir_create_array(&_11, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&_11, SL("requestTime"), &rtt, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(NULL, &qm, "__construct", NULL, 19, &_11);
	zephir_check_call_status();
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_12, &response, "getbody", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_BOOL(&_3, ZEPHIR_IS_STRING(&_12, "true"));
	zephir_array_fast_append(return_value, &_3);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

