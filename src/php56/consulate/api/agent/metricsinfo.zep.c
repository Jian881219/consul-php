
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
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_MetricsInfo) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, MetricsInfo, consulate, api_agent_metricsinfo, consulate_model_ce, consulate_api_agent_metricsinfo_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_metricsinfo_ce, SL("timestamp"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_metricsinfo_ce, SL("gauges"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_metricsinfo_ce, SL("points"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_metricsinfo_ce, SL("counters"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_metricsinfo_ce, SL("samples"), ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_metricsinfo_ce->create_object = zephir_init_properties_Consulate_Api_Agent_MetricsInfo;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getTimestamp) {

	

	RETURN_MEMBER(getThis(), "timestamp");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setTimestamp) {

	zval *timestamp;

	zephir_fetch_params(0, 1, 0, &timestamp);



	zephir_update_property_this(getThis(), SL("timestamp"), timestamp TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getGauges) {

	

	RETURN_MEMBER(getThis(), "gauges");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setGauges) {

	zval *gauges;

	zephir_fetch_params(0, 1, 0, &gauges);



	zephir_update_property_this(getThis(), SL("gauges"), gauges TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getPoints) {

	

	RETURN_MEMBER(getThis(), "points");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setPoints) {

	zval *points;

	zephir_fetch_params(0, 1, 0, &points);



	zephir_update_property_this(getThis(), SL("points"), points TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getCounters) {

	

	RETURN_MEMBER(getThis(), "counters");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setCounters) {

	zval *counters;

	zephir_fetch_params(0, 1, 0, &counters);



	zephir_update_property_this(getThis(), SL("counters"), counters TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getSamples) {

	

	RETURN_MEMBER(getThis(), "samples");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setSamples) {

	zval *samples;

	zephir_fetch_params(0, 1, 0, &samples);



	zephir_update_property_this(getThis(), SL("samples"), samples TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, __construct) {

	HashTable *_7$$3, *_16$$6, *_24$$9, *_32$$12;
	HashPosition _6$$3, _15$$6, _23$$9, _31$$12;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL, *_3 = NULL, *_10 = NULL;
	zval *data_param = NULL, *idx = NULL, *value = NULL, *_1, *_2 = NULL, *_4, *_11, *_12 = NULL, *_13, *_19, *_20 = NULL, *_21, *_27, *_28 = NULL, *_29, *_5$$3, **_8$$3, *_9$$5 = NULL, *_14$$6, **_17$$6, *_18$$8 = NULL, *_22$$9, **_25$$9, *_26$$11 = NULL, *_30$$12, **_33$$12, *_34$$14 = NULL;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &data_param);

	zephir_get_arrval(data, data_param);


	ZEPHIR_CALL_PARENT(NULL, consulate_api_agent_metricsinfo_ce, getThis(), "__construct", &_0, 19, data);
	zephir_check_call_status();
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("gauges"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(&_2, "array_filter", &_3, 2, _1);
	zephir_check_call_status();
	zephir_update_property_this(getThis(), SL("gauges"), _2 TSRMLS_CC);
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("gauges"), PH_NOISY_CC);
	if (zephir_fast_count_int(_4 TSRMLS_CC) > 0) {
		_5$$3 = zephir_fetch_nproperty_this(this_ptr, SL("gauges"), PH_NOISY_CC);
		zephir_is_iterable(_5$$3, &_7$$3, &_6$$3, 0, 0, "consulate/api/agent/metricsinfo.zep", 38);
		for (
		  ; zend_hash_get_current_data_ex(_7$$3, (void**) &_8$$3, &_6$$3) == SUCCESS
		  ; zend_hash_move_forward_ex(_7$$3, &_6$$3)
		) {
			ZEPHIR_GET_HMKEY(idx, _7$$3, _6$$3);
			ZEPHIR_GET_HVALUE(value, _8$$3);
			if (!(zephir_instance_of_ev(value, consulate_api_agent_gaugevalue_ce TSRMLS_CC))) {
				ZEPHIR_INIT_NVAR(_9$$5);
				object_init_ex(_9$$5, consulate_api_agent_gaugevalue_ce);
				ZEPHIR_CALL_METHOD(NULL, _9$$5, "__construct", &_10, 19, value);
				zephir_check_call_status();
				zephir_update_property_array(this_ptr, SL("gauges"), idx, _9$$5 TSRMLS_CC);
			}
		}
	}
	_11 = zephir_fetch_nproperty_this(this_ptr, SL("points"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(&_12, "array_filter", &_3, 2, _11);
	zephir_check_call_status();
	zephir_update_property_this(getThis(), SL("points"), _12 TSRMLS_CC);
	_13 = zephir_fetch_nproperty_this(this_ptr, SL("points"), PH_NOISY_CC);
	if (zephir_fast_count_int(_13 TSRMLS_CC) > 0) {
		_14$$6 = zephir_fetch_nproperty_this(this_ptr, SL("points"), PH_NOISY_CC);
		zephir_is_iterable(_14$$6, &_16$$6, &_15$$6, 0, 0, "consulate/api/agent/metricsinfo.zep", 47);
		for (
		  ; zend_hash_get_current_data_ex(_16$$6, (void**) &_17$$6, &_15$$6) == SUCCESS
		  ; zend_hash_move_forward_ex(_16$$6, &_15$$6)
		) {
			ZEPHIR_GET_HMKEY(idx, _16$$6, _15$$6);
			ZEPHIR_GET_HVALUE(value, _17$$6);
			if (!(zephir_instance_of_ev(value, consulate_api_agent_pointvalue_ce TSRMLS_CC))) {
				ZEPHIR_INIT_NVAR(_18$$8);
				object_init_ex(_18$$8, consulate_api_agent_pointvalue_ce);
				ZEPHIR_CALL_METHOD(NULL, _18$$8, "__construct", &_10, 19, value);
				zephir_check_call_status();
				zephir_update_property_array(this_ptr, SL("points"), idx, _18$$8 TSRMLS_CC);
			}
		}
	}
	_19 = zephir_fetch_nproperty_this(this_ptr, SL("counters"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(&_20, "array_filter", &_3, 2, _19);
	zephir_check_call_status();
	zephir_update_property_this(getThis(), SL("counters"), _20 TSRMLS_CC);
	_21 = zephir_fetch_nproperty_this(this_ptr, SL("counters"), PH_NOISY_CC);
	if (zephir_fast_count_int(_21 TSRMLS_CC) > 0) {
		_22$$9 = zephir_fetch_nproperty_this(this_ptr, SL("counters"), PH_NOISY_CC);
		zephir_is_iterable(_22$$9, &_24$$9, &_23$$9, 0, 0, "consulate/api/agent/metricsinfo.zep", 56);
		for (
		  ; zend_hash_get_current_data_ex(_24$$9, (void**) &_25$$9, &_23$$9) == SUCCESS
		  ; zend_hash_move_forward_ex(_24$$9, &_23$$9)
		) {
			ZEPHIR_GET_HMKEY(idx, _24$$9, _23$$9);
			ZEPHIR_GET_HVALUE(value, _25$$9);
			if (!(zephir_instance_of_ev(value, consulate_api_agent_sampledvalue_ce TSRMLS_CC))) {
				ZEPHIR_INIT_NVAR(_26$$11);
				object_init_ex(_26$$11, consulate_api_agent_sampledvalue_ce);
				ZEPHIR_CALL_METHOD(NULL, _26$$11, "__construct", &_10, 19, value);
				zephir_check_call_status();
				zephir_update_property_array(this_ptr, SL("counters"), idx, _26$$11 TSRMLS_CC);
			}
		}
	}
	_27 = zephir_fetch_nproperty_this(this_ptr, SL("samples"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(&_28, "array_filter", &_3, 2, _27);
	zephir_check_call_status();
	zephir_update_property_this(getThis(), SL("samples"), _28 TSRMLS_CC);
	_29 = zephir_fetch_nproperty_this(this_ptr, SL("samples"), PH_NOISY_CC);
	if (zephir_fast_count_int(_29 TSRMLS_CC) > 0) {
		_30$$12 = zephir_fetch_nproperty_this(this_ptr, SL("samples"), PH_NOISY_CC);
		zephir_is_iterable(_30$$12, &_32$$12, &_31$$12, 0, 0, "consulate/api/agent/metricsinfo.zep", 65);
		for (
		  ; zend_hash_get_current_data_ex(_32$$12, (void**) &_33$$12, &_31$$12) == SUCCESS
		  ; zend_hash_move_forward_ex(_32$$12, &_31$$12)
		) {
			ZEPHIR_GET_HMKEY(idx, _32$$12, _31$$12);
			ZEPHIR_GET_HVALUE(value, _33$$12);
			if (!(zephir_instance_of_ev(value, consulate_api_agent_sampledvalue_ce TSRMLS_CC))) {
				ZEPHIR_INIT_NVAR(_34$$14);
				object_init_ex(_34$$14, consulate_api_agent_sampledvalue_ce);
				ZEPHIR_CALL_METHOD(NULL, _34$$14, "__construct", &_10, 19, value);
				zephir_check_call_status();
				zephir_update_property_array(this_ptr, SL("samples"), idx, _34$$14 TSRMLS_CC);
			}
		}
	}
	ZEPHIR_MM_RESTORE();

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_MetricsInfo(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_2, *_4, *_6, *_1$$3, *_3$$4, *_5$$5, *_7$$6;

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("samples"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("samples"), _1$$3 TSRMLS_CC);
		}
		_2 = zephir_fetch_nproperty_this(this_ptr, SL("counters"), PH_NOISY_CC);
		if (Z_TYPE_P(_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(_3$$4);
			array_init(_3$$4);
			zephir_update_property_this(getThis(), SL("counters"), _3$$4 TSRMLS_CC);
		}
		_4 = zephir_fetch_nproperty_this(this_ptr, SL("points"), PH_NOISY_CC);
		if (Z_TYPE_P(_4) == IS_NULL) {
			ZEPHIR_INIT_VAR(_5$$5);
			array_init(_5$$5);
			zephir_update_property_this(getThis(), SL("points"), _5$$5 TSRMLS_CC);
		}
		_6 = zephir_fetch_nproperty_this(this_ptr, SL("gauges"), PH_NOISY_CC);
		if (Z_TYPE_P(_6) == IS_NULL) {
			ZEPHIR_INIT_VAR(_7$$6);
			array_init(_7$$6);
			zephir_update_property_this(getThis(), SL("gauges"), _7$$6 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

