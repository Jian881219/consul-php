
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

	zend_class_implements(consulate_values_ce TSRMLS_CC, 1, zephir_get_internal_ce(SL("jsonserializable")));
	zend_class_implements(consulate_values_ce TSRMLS_CC, 1, spl_ce_Countable);
	return SUCCESS;

}

PHP_METHOD(Consulate_Values, get) {

	zval *key_param = NULL, values, _0, _1$$3;
	zval key;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&values);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &key_param);

	zephir_get_strval(&key, key_param);


	zephir_read_property(&_0, this_ptr, SL("values"), PH_NOISY_CC | PH_READONLY);
	if (zephir_array_isset_fetch(&values, &_0, &key, 1 TSRMLS_CC)) {
		zephir_array_fetch_long(&_1$$3, &values, 0, PH_NOISY | PH_READONLY, "consulate/values.zep", 9 TSRMLS_CC);
		RETURN_CTOR(&_1$$3);
	}
	RETURN_MM_STRING("");

}

PHP_METHOD(Consulate_Values, getAll) {

	zval *key_param = NULL, values, _0;
	zval key;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&values);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &key_param);

	zephir_get_strval(&key, key_param);


	zephir_read_property(&_0, this_ptr, SL("values"), PH_NOISY_CC | PH_READONLY);
	if (zephir_array_isset_fetch(&values, &_0, &key, 1 TSRMLS_CC)) {
		RETURN_CTOR(&values);
	}
	array_init(return_value);
	RETURN_MM();

}

PHP_METHOD(Consulate_Values, set) {

	zval _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key_param = NULL, *value, value_sub, _0, _1, _3$$4, _4$$4, _5$$4, _6$$4;
	zval key;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &key_param, &value);

	zephir_get_strval(&key, key_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "string");
	ZEPHIR_MAKE_REF(value);
	ZEPHIR_CALL_FUNCTION(&_1, "settype", NULL, 17, value, &_0);
	ZEPHIR_UNREF(value);
	zephir_check_call_status();
	if (zephir_is_true(&_1)) {
		ZEPHIR_INIT_VAR(&_2$$3);
		zephir_create_array(&_2$$3, 1, 0 TSRMLS_CC);
		zephir_array_fast_append(&_2$$3, value);
		zephir_update_property_array(this_ptr, SL("values"), &key, &_2$$3);
		ZEPHIR_INIT_NVAR(&_2$$3);
	} else {
		ZEPHIR_INIT_VAR(&_3$$4);
		object_init_ex(&_3$$4, consulate_exception_ce);
		ZEPHIR_INIT_VAR(&_4$$4);
		zephir_gettype(&_4$$4, value TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_5$$4);
		ZVAL_STRING(&_5$$4, "$value must be castable to string, saw \"%s\".");
		ZEPHIR_CALL_FUNCTION(&_6$$4, "sprintf", NULL, 10, &_5$$4, &_4$$4);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, &_3$$4, "__construct", NULL, 11, &_6$$4);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_3$$4, "consulate/values.zep", 28 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Values, add) {

	zval _3$$5;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key_param = NULL, *value, value_sub, _0, _1, _2$$3, _4$$6, _5$$6, _6$$6, _7$$6;
	zval key;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_4$$6);
	ZVAL_UNDEF(&_5$$6);
	ZVAL_UNDEF(&_6$$6);
	ZVAL_UNDEF(&_7$$6);
	ZVAL_UNDEF(&_3$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &key_param, &value);

	zephir_get_strval(&key, key_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "string");
	ZEPHIR_MAKE_REF(value);
	ZEPHIR_CALL_FUNCTION(&_1, "settype", NULL, 17, value, &_0);
	ZEPHIR_UNREF(value);
	zephir_check_call_status();
	if (zephir_is_true(&_1)) {
		zephir_read_property(&_2$$3, this_ptr, SL("values"), PH_NOISY_CC | PH_READONLY);
		if (zephir_array_isset(&_2$$3, &key)) {
			zephir_update_property_array_multi(this_ptr, SL("values"), value TSRMLS_CC, SL("za"), 2, &key);
		} else {
			ZEPHIR_INIT_VAR(&_3$$5);
			zephir_create_array(&_3$$5, 1, 0 TSRMLS_CC);
			zephir_array_fast_append(&_3$$5, value);
			zephir_update_property_array(this_ptr, SL("values"), &key, &_3$$5);
			ZEPHIR_INIT_NVAR(&_3$$5);
		}
	} else {
		ZEPHIR_INIT_VAR(&_4$$6);
		object_init_ex(&_4$$6, consulate_exception_ce);
		ZEPHIR_INIT_VAR(&_5$$6);
		zephir_gettype(&_5$$6, value TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_6$$6);
		ZVAL_STRING(&_6$$6, "$value must be castable to string, saw \"%s\".");
		ZEPHIR_CALL_FUNCTION(&_7$$6, "sprintf", NULL, 10, &_6$$6, &_5$$6);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, &_4$$6, "__construct", NULL, 11, &_7$$6);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_4$$6, "consulate/values.zep", 40 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Values, delete) {

	zval *key_param = NULL, _0;
	zval key;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &key_param);

	zephir_get_strval(&key, key_param);


	zephir_read_property(&_0, this_ptr, SL("values"), PH_NOISY_CC | PH_READONLY);
	zephir_array_unset(&_0, &key, PH_SEPARATE);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Values, count) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);


	zephir_read_property(&_0, this_ptr, SL("values"), PH_NOISY_CC | PH_READONLY);
	RETURN_LONG(zephir_fast_count_int(&_0 TSRMLS_CC));

}

PHP_METHOD(Consulate_Values, jsonSerialize) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "values");

}

PHP_METHOD(Consulate_Values, toArray) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "values");

}

PHP_METHOD(Consulate_Values, __toString) {

	zend_string *_4;
	zend_ulong _3;
	zval str;
	zval k, v, vs, _0, *_1, _2, *_5$$3, _6$$3, _7$$4, _8$$4, _9$$7, _11$$7, _12$$7, _14$$8, _15$$8, _16$$11, _17$$11, _18$$11, *_19$$12, _20$$12, _21$$13, _22$$13, _23$$16, _24$$16, _25$$16, _26$$17, _27$$17, _28$$20, _29$$20, _30$$20;
	zephir_fcall_cache_entry *_10 = NULL, *_13 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&vs);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$7);
	ZVAL_UNDEF(&_11$$7);
	ZVAL_UNDEF(&_12$$7);
	ZVAL_UNDEF(&_14$$8);
	ZVAL_UNDEF(&_15$$8);
	ZVAL_UNDEF(&_16$$11);
	ZVAL_UNDEF(&_17$$11);
	ZVAL_UNDEF(&_18$$11);
	ZVAL_UNDEF(&_20$$12);
	ZVAL_UNDEF(&_21$$13);
	ZVAL_UNDEF(&_22$$13);
	ZVAL_UNDEF(&_23$$16);
	ZVAL_UNDEF(&_24$$16);
	ZVAL_UNDEF(&_25$$16);
	ZVAL_UNDEF(&_26$$17);
	ZVAL_UNDEF(&_27$$17);
	ZVAL_UNDEF(&_28$$20);
	ZVAL_UNDEF(&_29$$20);
	ZVAL_UNDEF(&_30$$20);
	ZVAL_UNDEF(&str);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&str);
	ZVAL_STRING(&str, "");
	zephir_read_property(&_0, this_ptr, SL("values"), PH_NOISY_CC | PH_READONLY);
	zephir_is_iterable(&_0, 0, "consulate/values.zep", 78);
	if (Z_TYPE_P(&_0) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_0), _3, _4, _1)
		{
			ZEPHIR_INIT_NVAR(&k);
			if (_4 != NULL) { 
				ZVAL_STR_COPY(&k, _4);
			} else {
				ZVAL_LONG(&k, _3);
			}
			ZEPHIR_INIT_NVAR(&vs);
			ZVAL_COPY(&vs, _1);
			zephir_is_iterable(&vs, 0, "consulate/values.zep", 77);
			if (Z_TYPE_P(&vs) == IS_ARRAY) {
				ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&vs), _5$$3)
				{
					ZEPHIR_INIT_NVAR(&v);
					ZVAL_COPY(&v, _5$$3);
					ZEPHIR_SINIT_NVAR(_7$$4);
					ZVAL_STRING(&_7$$4, "");
					if (!ZEPHIR_IS_IDENTICAL(&_7$$4, &str)) {
						zephir_concat_self_str(&str, "&", sizeof("&")-1 TSRMLS_CC);
					}
					ZEPHIR_SINIT_NVAR(_8$$4);
					ZVAL_STRING(&_8$$4, "");
					if (ZEPHIR_IS_IDENTICAL(&_8$$4, &v)) {
						zephir_concat_self(&str, &k TSRMLS_CC);
					} else {
						ZEPHIR_CALL_METHOD(&_9$$7, this_ptr, "encode", &_10, 0, &v);
						zephir_check_call_status();
						ZEPHIR_INIT_NVAR(&_11$$7);
						ZVAL_STRING(&_11$$7, "%s=%s");
						ZEPHIR_CALL_FUNCTION(&_12$$7, "sprintf", &_13, 10, &_11$$7, &k, &_9$$7);
						zephir_check_call_status();
						zephir_concat_self(&str, &_12$$7 TSRMLS_CC);
					}
				} ZEND_HASH_FOREACH_END();
			} else {
				ZEPHIR_CALL_METHOD(NULL, &vs, "rewind", NULL, 0);
				zephir_check_call_status();
				while (1) {
					ZEPHIR_CALL_METHOD(&_6$$3, &vs, "valid", NULL, 0);
					zephir_check_call_status();
					if (!zend_is_true(&_6$$3)) {
						break;
					}
					ZEPHIR_CALL_METHOD(&v, &vs, "current", NULL, 0);
					zephir_check_call_status();
						ZEPHIR_SINIT_NVAR(_14$$8);
						ZVAL_STRING(&_14$$8, "");
						if (!ZEPHIR_IS_IDENTICAL(&_14$$8, &str)) {
							zephir_concat_self_str(&str, "&", sizeof("&")-1 TSRMLS_CC);
						}
						ZEPHIR_SINIT_NVAR(_15$$8);
						ZVAL_STRING(&_15$$8, "");
						if (ZEPHIR_IS_IDENTICAL(&_15$$8, &v)) {
							zephir_concat_self(&str, &k TSRMLS_CC);
						} else {
							ZEPHIR_CALL_METHOD(&_16$$11, this_ptr, "encode", &_10, 0, &v);
							zephir_check_call_status();
							ZEPHIR_INIT_NVAR(&_17$$11);
							ZVAL_STRING(&_17$$11, "%s=%s");
							ZEPHIR_CALL_FUNCTION(&_18$$11, "sprintf", &_13, 10, &_17$$11, &k, &_16$$11);
							zephir_check_call_status();
							zephir_concat_self(&str, &_18$$11 TSRMLS_CC);
						}
					ZEPHIR_CALL_METHOD(NULL, &vs, "next", NULL, 0);
					zephir_check_call_status();
				}
			}
			ZEPHIR_INIT_NVAR(&v);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &_0, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_2, &_0, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_2)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&k, &_0, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&vs, &_0, "current", NULL, 0);
			zephir_check_call_status();
				zephir_is_iterable(&vs, 0, "consulate/values.zep", 77);
				if (Z_TYPE_P(&vs) == IS_ARRAY) {
					ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&vs), _19$$12)
					{
						ZEPHIR_INIT_NVAR(&v);
						ZVAL_COPY(&v, _19$$12);
						ZEPHIR_SINIT_NVAR(_21$$13);
						ZVAL_STRING(&_21$$13, "");
						if (!ZEPHIR_IS_IDENTICAL(&_21$$13, &str)) {
							zephir_concat_self_str(&str, "&", sizeof("&")-1 TSRMLS_CC);
						}
						ZEPHIR_SINIT_NVAR(_22$$13);
						ZVAL_STRING(&_22$$13, "");
						if (ZEPHIR_IS_IDENTICAL(&_22$$13, &v)) {
							zephir_concat_self(&str, &k TSRMLS_CC);
						} else {
							ZEPHIR_CALL_METHOD(&_23$$16, this_ptr, "encode", &_10, 0, &v);
							zephir_check_call_status();
							ZEPHIR_INIT_NVAR(&_24$$16);
							ZVAL_STRING(&_24$$16, "%s=%s");
							ZEPHIR_CALL_FUNCTION(&_25$$16, "sprintf", &_13, 10, &_24$$16, &k, &_23$$16);
							zephir_check_call_status();
							zephir_concat_self(&str, &_25$$16 TSRMLS_CC);
						}
					} ZEND_HASH_FOREACH_END();
				} else {
					ZEPHIR_CALL_METHOD(NULL, &vs, "rewind", NULL, 0);
					zephir_check_call_status();
					while (1) {
						ZEPHIR_CALL_METHOD(&_20$$12, &vs, "valid", NULL, 0);
						zephir_check_call_status();
						if (!zend_is_true(&_20$$12)) {
							break;
						}
						ZEPHIR_CALL_METHOD(&v, &vs, "current", NULL, 0);
						zephir_check_call_status();
							ZEPHIR_SINIT_NVAR(_26$$17);
							ZVAL_STRING(&_26$$17, "");
							if (!ZEPHIR_IS_IDENTICAL(&_26$$17, &str)) {
								zephir_concat_self_str(&str, "&", sizeof("&")-1 TSRMLS_CC);
							}
							ZEPHIR_SINIT_NVAR(_27$$17);
							ZVAL_STRING(&_27$$17, "");
							if (ZEPHIR_IS_IDENTICAL(&_27$$17, &v)) {
								zephir_concat_self(&str, &k TSRMLS_CC);
							} else {
								ZEPHIR_CALL_METHOD(&_28$$20, this_ptr, "encode", &_10, 0, &v);
								zephir_check_call_status();
								ZEPHIR_INIT_NVAR(&_29$$20);
								ZVAL_STRING(&_29$$20, "%s=%s");
								ZEPHIR_CALL_FUNCTION(&_30$$20, "sprintf", &_13, 10, &_29$$20, &k, &_28$$20);
								zephir_check_call_status();
								zephir_concat_self(&str, &_30$$20 TSRMLS_CC);
							}
						ZEPHIR_CALL_METHOD(NULL, &vs, "next", NULL, 0);
						zephir_check_call_status();
					}
				}
				ZEPHIR_INIT_NVAR(&v);
			ZEPHIR_CALL_METHOD(NULL, &_0, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&vs);
	ZEPHIR_INIT_NVAR(&k);
	RETURN_CTOR(&str);

}

PHP_METHOD(Consulate_Values, encode) {

	zval *v, v_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);

	zephir_fetch_params(0, 1, 0, &v);



	RETVAL_ZVAL(v, 1, 0);
	return;

}

zend_object *zephir_init_properties_Consulate_Values(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("values"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("values"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

