
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "ext/spl/spl_iterators.h"
#include "kernel/array.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Consulate_Values) {

	ZEPHIR_REGISTER_CLASS(Consulate, Values, consulate, values, consulate_values_method_entry, 0);

	zend_declare_property_null(consulate_values_ce, SL("values"), ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_values_ce->create_object = zephir_init_properties_Consulate_Values;

	zend_class_implements(consulate_values_ce TSRMLS_CC, 1, zephir_get_internal_ce(SS("jsonserializable") TSRMLS_CC));
	zend_class_implements(consulate_values_ce TSRMLS_CC, 1, spl_ce_Countable);
	return SUCCESS;

}

PHP_METHOD(Consulate_Values, get) {

	zval *key_param = NULL, *values = NULL, *_0, *_1$$3;
	zval *key = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &key_param);

	zephir_get_strval(key, key_param);


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("values"), PH_NOISY_CC);
	if (zephir_array_isset_fetch(&values, _0, key, 1 TSRMLS_CC)) {
		zephir_array_fetch_long(&_1$$3, values, 0, PH_NOISY | PH_READONLY, "consulate/values.zep", 9 TSRMLS_CC);
		RETURN_CTOR(_1$$3);
	}
	RETURN_MM_STRING("", 1);

}

PHP_METHOD(Consulate_Values, getAll) {

	zval *key_param = NULL, *values = NULL, *_0;
	zval *key = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &key_param);

	zephir_get_strval(key, key_param);


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("values"), PH_NOISY_CC);
	if (zephir_array_isset_fetch(&values, _0, key, 1 TSRMLS_CC)) {
		RETURN_CTOR(values);
	}
	array_init(return_value);
	RETURN_MM();

}

PHP_METHOD(Consulate_Values, set) {

	zval *_2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key_param = NULL, *value, *_0, *_1 = NULL, *_3$$4, *_4$$4, _5$$4, *_6$$4 = NULL;
	zval *key = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &key_param, &value);

	zephir_get_strval(key, key_param);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "string", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_MAKE_REF(value);
	ZEPHIR_CALL_FUNCTION(&_1, "settype", NULL, 17, value, _0);
	zephir_check_temp_parameter(_0);
	ZEPHIR_UNREF(value);
	zephir_check_call_status();
	if (zephir_is_true(_1)) {
		ZEPHIR_INIT_VAR(_2$$3);
		zephir_create_array(_2$$3, 1, 0 TSRMLS_CC);
		zephir_array_fast_append(_2$$3, value);
		zephir_update_property_array(this_ptr, SL("values"), key, _2$$3 TSRMLS_CC);
	} else {
		ZEPHIR_INIT_VAR(_3$$4);
		object_init_ex(_3$$4, consulate_exception_ce);
		ZEPHIR_INIT_VAR(_4$$4);
		zephir_gettype(_4$$4, value TSRMLS_CC);
		ZEPHIR_SINIT_VAR(_5$$4);
		ZVAL_STRING(&_5$$4, "$value must be castable to string, saw \"%s\".", 0);
		ZEPHIR_CALL_FUNCTION(&_6$$4, "sprintf", NULL, 10, &_5$$4, _4$$4);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, _3$$4, "__construct", NULL, 11, _6$$4);
		zephir_check_call_status();
		zephir_throw_exception_debug(_3$$4, "consulate/values.zep", 28 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Values, add) {

	zval *_3$$5;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key_param = NULL, *value, *_0, *_1 = NULL, *_2$$3, *_4$$6, *_5$$6, _6$$6, *_7$$6 = NULL;
	zval *key = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &key_param, &value);

	zephir_get_strval(key, key_param);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "string", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_MAKE_REF(value);
	ZEPHIR_CALL_FUNCTION(&_1, "settype", NULL, 17, value, _0);
	zephir_check_temp_parameter(_0);
	ZEPHIR_UNREF(value);
	zephir_check_call_status();
	if (zephir_is_true(_1)) {
		_2$$3 = zephir_fetch_nproperty_this(this_ptr, SL("values"), PH_NOISY_CC);
		if (zephir_array_isset(_2$$3, key)) {
			zephir_update_property_array_multi(this_ptr, SL("values"), &value TSRMLS_CC, SL("za"), 2, key);
		} else {
			ZEPHIR_INIT_VAR(_3$$5);
			zephir_create_array(_3$$5, 1, 0 TSRMLS_CC);
			zephir_array_fast_append(_3$$5, value);
			zephir_update_property_array(this_ptr, SL("values"), key, _3$$5 TSRMLS_CC);
		}
	} else {
		ZEPHIR_INIT_VAR(_4$$6);
		object_init_ex(_4$$6, consulate_exception_ce);
		ZEPHIR_INIT_VAR(_5$$6);
		zephir_gettype(_5$$6, value TSRMLS_CC);
		ZEPHIR_SINIT_VAR(_6$$6);
		ZVAL_STRING(&_6$$6, "$value must be castable to string, saw \"%s\".", 0);
		ZEPHIR_CALL_FUNCTION(&_7$$6, "sprintf", NULL, 10, &_6$$6, _5$$6);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, _4$$6, "__construct", NULL, 11, _7$$6);
		zephir_check_call_status();
		zephir_throw_exception_debug(_4$$6, "consulate/values.zep", 40 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Values, delete) {

	zval *key_param = NULL, *_0;
	zval *key = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &key_param);

	zephir_get_strval(key, key_param);


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("values"), PH_NOISY_CC);
	zephir_array_unset(&_0, key, PH_SEPARATE);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Values, count) {

	zval *_0;


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("values"), PH_NOISY_CC);
	RETURN_LONG(zephir_fast_count_int(_0 TSRMLS_CC));

}

PHP_METHOD(Consulate_Values, jsonSerialize) {

	

	RETURN_MEMBER(getThis(), "values");

}

PHP_METHOD(Consulate_Values, toArray) {

	

	RETURN_MEMBER(getThis(), "values");

}

PHP_METHOD(Consulate_Values, __toString) {

	HashTable *_2, *_5$$3;
	HashPosition _1, _4$$3;
	zval *str = NULL;
	zval *k = NULL, *v = NULL, *vs = NULL, *_0, **_3, **_6$$3, _7$$4 = zval_used_for_init, _8$$4 = zval_used_for_init, *_9$$7 = NULL, _11$$7 = zval_used_for_init, *_12$$7 = NULL;
	zephir_fcall_cache_entry *_10 = NULL, *_13 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(str);
	ZVAL_EMPTY_STRING(str);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("values"), PH_NOISY_CC);
	zephir_is_iterable(_0, &_2, &_1, 0, 0, "consulate/values.zep", 78);
	for (
	  ; zend_hash_get_current_data_ex(_2, (void**) &_3, &_1) == SUCCESS
	  ; zend_hash_move_forward_ex(_2, &_1)
	) {
		ZEPHIR_GET_HMKEY(k, _2, _1);
		ZEPHIR_GET_HVALUE(vs, _3);
		zephir_is_iterable(vs, &_5$$3, &_4$$3, 0, 0, "consulate/values.zep", 77);
		for (
		  ; zend_hash_get_current_data_ex(_5$$3, (void**) &_6$$3, &_4$$3) == SUCCESS
		  ; zend_hash_move_forward_ex(_5$$3, &_4$$3)
		) {
			ZEPHIR_GET_HVALUE(v, _6$$3);
			ZEPHIR_SINIT_NVAR(_7$$4);
			ZVAL_STRING(&_7$$4, "", 0);
			if (!ZEPHIR_IS_IDENTICAL(&_7$$4, str)) {
				zephir_concat_self_str(&str, "&", sizeof("&")-1 TSRMLS_CC);
			}
			ZEPHIR_SINIT_NVAR(_8$$4);
			ZVAL_STRING(&_8$$4, "", 0);
			if (ZEPHIR_IS_IDENTICAL(&_8$$4, v)) {
				zephir_concat_self(&str, k TSRMLS_CC);
			} else {
				ZEPHIR_CALL_METHOD(&_9$$7, this_ptr, "encode", &_10, 0, v);
				zephir_check_call_status();
				ZEPHIR_SINIT_NVAR(_11$$7);
				ZVAL_STRING(&_11$$7, "%s=%s", 0);
				ZEPHIR_CALL_FUNCTION(&_12$$7, "sprintf", &_13, 10, &_11$$7, k, _9$$7);
				zephir_check_call_status();
				zephir_concat_self(&str, _12$$7 TSRMLS_CC);
			}
		}
	}
	RETURN_CTOR(str);

}

PHP_METHOD(Consulate_Values, encode) {

	zval *v;

	zephir_fetch_params(0, 1, 0, &v);



	RETVAL_ZVAL(v, 1, 0);
	return;

}

zend_object_value zephir_init_properties_Consulate_Values(zend_class_entry *class_type TSRMLS_DC) {

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("values"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("values"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

