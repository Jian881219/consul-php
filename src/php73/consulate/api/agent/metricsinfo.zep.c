
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "timestamp");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setTimestamp) {

	zval *timestamp, timestamp_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&timestamp_sub);

	zephir_fetch_params(0, 1, 0, &timestamp);



	zephir_update_property_zval(this_ptr, SL("timestamp"), timestamp);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getGauges) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "gauges");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setGauges) {

	zval *gauges, gauges_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&gauges_sub);

	zephir_fetch_params(0, 1, 0, &gauges);



	zephir_update_property_zval(this_ptr, SL("gauges"), gauges);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getPoints) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "points");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setPoints) {

	zval *points, points_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&points_sub);

	zephir_fetch_params(0, 1, 0, &points);



	zephir_update_property_zval(this_ptr, SL("points"), points);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getCounters) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "counters");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setCounters) {

	zval *counters, counters_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&counters_sub);

	zephir_fetch_params(0, 1, 0, &counters);



	zephir_update_property_zval(this_ptr, SL("counters"), counters);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getSamples) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "samples");

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setSamples) {

	zval *samples, samples_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&samples_sub);

	zephir_fetch_params(0, 1, 0, &samples);



	zephir_update_property_zval(this_ptr, SL("samples"), samples);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, __construct) {

	zend_string *_9$$3, *_20$$8, *_30$$13, *_40$$18;
	zend_ulong _8$$3, _19$$8, _29$$13, _39$$18;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL, *_3 = NULL, *_11 = NULL;
	zval *data_param = NULL, idx, value, _1, _2, _4, _13, _14, _15, _23, _24, _25, _33, _34, _35, _5$$3, *_6$$3, _7$$3, _10$$5, _12$$7, _16$$8, *_17$$8, _18$$8, _21$$10, _22$$12, _26$$13, *_27$$13, _28$$13, _31$$15, _32$$17, _36$$18, *_37$$18, _38$$18, _41$$20, _42$$22;
	zval data;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_15);
	ZVAL_UNDEF(&_23);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_25);
	ZVAL_UNDEF(&_33);
	ZVAL_UNDEF(&_34);
	ZVAL_UNDEF(&_35);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_12$$7);
	ZVAL_UNDEF(&_16$$8);
	ZVAL_UNDEF(&_18$$8);
	ZVAL_UNDEF(&_21$$10);
	ZVAL_UNDEF(&_22$$12);
	ZVAL_UNDEF(&_26$$13);
	ZVAL_UNDEF(&_28$$13);
	ZVAL_UNDEF(&_31$$15);
	ZVAL_UNDEF(&_32$$17);
	ZVAL_UNDEF(&_36$$18);
	ZVAL_UNDEF(&_38$$18);
	ZVAL_UNDEF(&_41$$20);
	ZVAL_UNDEF(&_42$$22);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &data_param);

	zephir_get_arrval(&data, data_param);


	ZEPHIR_CALL_PARENT(NULL, consulate_api_agent_metricsinfo_ce, getThis(), "__construct", &_0, 0, &data);
	zephir_check_call_status();
	zephir_read_property(&_1, this_ptr, SL("gauges"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_2, "array_filter", &_3, 2, &_1);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("gauges"), &_2);
	zephir_read_property(&_4, this_ptr, SL("gauges"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_count_int(&_4 TSRMLS_CC) > 0) {
		zephir_read_property(&_5$$3, this_ptr, SL("gauges"), PH_NOISY_CC | PH_READONLY);
		zephir_is_iterable(&_5$$3, 0, "consulate/api/agent/metricsinfo.zep", 38);
		if (Z_TYPE_P(&_5$$3) == IS_ARRAY) {
			ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_5$$3), _8$$3, _9$$3, _6$$3)
			{
				ZEPHIR_INIT_NVAR(&idx);
				if (_9$$3 != NULL) { 
					ZVAL_STR_COPY(&idx, _9$$3);
				} else {
					ZVAL_LONG(&idx, _8$$3);
				}
				ZEPHIR_INIT_NVAR(&value);
				ZVAL_COPY(&value, _6$$3);
				if (!(zephir_instance_of_ev(&value, consulate_api_agent_gaugevalue_ce TSRMLS_CC))) {
					ZEPHIR_INIT_NVAR(&_10$$5);
					object_init_ex(&_10$$5, consulate_api_agent_gaugevalue_ce);
					ZEPHIR_CALL_METHOD(NULL, &_10$$5, "__construct", &_11, 19, &value);
					zephir_check_call_status();
					zephir_update_property_array(this_ptr, SL("gauges"), &idx, &_10$$5);
					ZEPHIR_INIT_NVAR(&_10$$5);
				}
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &_5$$3, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_7$$3, &_5$$3, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_7$$3)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&idx, &_5$$3, "key", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&value, &_5$$3, "current", NULL, 0);
				zephir_check_call_status();
					if (!(zephir_instance_of_ev(&value, consulate_api_agent_gaugevalue_ce TSRMLS_CC))) {
						ZEPHIR_INIT_NVAR(&_12$$7);
						object_init_ex(&_12$$7, consulate_api_agent_gaugevalue_ce);
						ZEPHIR_CALL_METHOD(NULL, &_12$$7, "__construct", &_11, 19, &value);
						zephir_check_call_status();
						zephir_update_property_array(this_ptr, SL("gauges"), &idx, &_12$$7);
						ZEPHIR_INIT_NVAR(&_12$$7);
					}
				ZEPHIR_CALL_METHOD(NULL, &_5$$3, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&value);
		ZEPHIR_INIT_NVAR(&idx);
	}
	zephir_read_property(&_13, this_ptr, SL("points"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_14, "array_filter", &_3, 2, &_13);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("points"), &_14);
	zephir_read_property(&_15, this_ptr, SL("points"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_count_int(&_15 TSRMLS_CC) > 0) {
		zephir_read_property(&_16$$8, this_ptr, SL("points"), PH_NOISY_CC | PH_READONLY);
		zephir_is_iterable(&_16$$8, 0, "consulate/api/agent/metricsinfo.zep", 47);
		if (Z_TYPE_P(&_16$$8) == IS_ARRAY) {
			ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_16$$8), _19$$8, _20$$8, _17$$8)
			{
				ZEPHIR_INIT_NVAR(&idx);
				if (_20$$8 != NULL) { 
					ZVAL_STR_COPY(&idx, _20$$8);
				} else {
					ZVAL_LONG(&idx, _19$$8);
				}
				ZEPHIR_INIT_NVAR(&value);
				ZVAL_COPY(&value, _17$$8);
				if (!(zephir_instance_of_ev(&value, consulate_api_agent_pointvalue_ce TSRMLS_CC))) {
					ZEPHIR_INIT_NVAR(&_21$$10);
					object_init_ex(&_21$$10, consulate_api_agent_pointvalue_ce);
					ZEPHIR_CALL_METHOD(NULL, &_21$$10, "__construct", &_11, 19, &value);
					zephir_check_call_status();
					zephir_update_property_array(this_ptr, SL("points"), &idx, &_21$$10);
					ZEPHIR_INIT_NVAR(&_21$$10);
				}
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &_16$$8, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_18$$8, &_16$$8, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_18$$8)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&idx, &_16$$8, "key", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&value, &_16$$8, "current", NULL, 0);
				zephir_check_call_status();
					if (!(zephir_instance_of_ev(&value, consulate_api_agent_pointvalue_ce TSRMLS_CC))) {
						ZEPHIR_INIT_NVAR(&_22$$12);
						object_init_ex(&_22$$12, consulate_api_agent_pointvalue_ce);
						ZEPHIR_CALL_METHOD(NULL, &_22$$12, "__construct", &_11, 19, &value);
						zephir_check_call_status();
						zephir_update_property_array(this_ptr, SL("points"), &idx, &_22$$12);
						ZEPHIR_INIT_NVAR(&_22$$12);
					}
				ZEPHIR_CALL_METHOD(NULL, &_16$$8, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&value);
		ZEPHIR_INIT_NVAR(&idx);
	}
	zephir_read_property(&_23, this_ptr, SL("counters"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_24, "array_filter", &_3, 2, &_23);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("counters"), &_24);
	zephir_read_property(&_25, this_ptr, SL("counters"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_count_int(&_25 TSRMLS_CC) > 0) {
		zephir_read_property(&_26$$13, this_ptr, SL("counters"), PH_NOISY_CC | PH_READONLY);
		zephir_is_iterable(&_26$$13, 0, "consulate/api/agent/metricsinfo.zep", 56);
		if (Z_TYPE_P(&_26$$13) == IS_ARRAY) {
			ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_26$$13), _29$$13, _30$$13, _27$$13)
			{
				ZEPHIR_INIT_NVAR(&idx);
				if (_30$$13 != NULL) { 
					ZVAL_STR_COPY(&idx, _30$$13);
				} else {
					ZVAL_LONG(&idx, _29$$13);
				}
				ZEPHIR_INIT_NVAR(&value);
				ZVAL_COPY(&value, _27$$13);
				if (!(zephir_instance_of_ev(&value, consulate_api_agent_sampledvalue_ce TSRMLS_CC))) {
					ZEPHIR_INIT_NVAR(&_31$$15);
					object_init_ex(&_31$$15, consulate_api_agent_sampledvalue_ce);
					ZEPHIR_CALL_METHOD(NULL, &_31$$15, "__construct", &_11, 19, &value);
					zephir_check_call_status();
					zephir_update_property_array(this_ptr, SL("counters"), &idx, &_31$$15);
					ZEPHIR_INIT_NVAR(&_31$$15);
				}
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &_26$$13, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_28$$13, &_26$$13, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_28$$13)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&idx, &_26$$13, "key", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&value, &_26$$13, "current", NULL, 0);
				zephir_check_call_status();
					if (!(zephir_instance_of_ev(&value, consulate_api_agent_sampledvalue_ce TSRMLS_CC))) {
						ZEPHIR_INIT_NVAR(&_32$$17);
						object_init_ex(&_32$$17, consulate_api_agent_sampledvalue_ce);
						ZEPHIR_CALL_METHOD(NULL, &_32$$17, "__construct", &_11, 19, &value);
						zephir_check_call_status();
						zephir_update_property_array(this_ptr, SL("counters"), &idx, &_32$$17);
						ZEPHIR_INIT_NVAR(&_32$$17);
					}
				ZEPHIR_CALL_METHOD(NULL, &_26$$13, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&value);
		ZEPHIR_INIT_NVAR(&idx);
	}
	zephir_read_property(&_33, this_ptr, SL("samples"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_34, "array_filter", &_3, 2, &_33);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("samples"), &_34);
	zephir_read_property(&_35, this_ptr, SL("samples"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_count_int(&_35 TSRMLS_CC) > 0) {
		zephir_read_property(&_36$$18, this_ptr, SL("samples"), PH_NOISY_CC | PH_READONLY);
		zephir_is_iterable(&_36$$18, 0, "consulate/api/agent/metricsinfo.zep", 65);
		if (Z_TYPE_P(&_36$$18) == IS_ARRAY) {
			ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_36$$18), _39$$18, _40$$18, _37$$18)
			{
				ZEPHIR_INIT_NVAR(&idx);
				if (_40$$18 != NULL) { 
					ZVAL_STR_COPY(&idx, _40$$18);
				} else {
					ZVAL_LONG(&idx, _39$$18);
				}
				ZEPHIR_INIT_NVAR(&value);
				ZVAL_COPY(&value, _37$$18);
				if (!(zephir_instance_of_ev(&value, consulate_api_agent_sampledvalue_ce TSRMLS_CC))) {
					ZEPHIR_INIT_NVAR(&_41$$20);
					object_init_ex(&_41$$20, consulate_api_agent_sampledvalue_ce);
					ZEPHIR_CALL_METHOD(NULL, &_41$$20, "__construct", &_11, 19, &value);
					zephir_check_call_status();
					zephir_update_property_array(this_ptr, SL("samples"), &idx, &_41$$20);
					ZEPHIR_INIT_NVAR(&_41$$20);
				}
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &_36$$18, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_38$$18, &_36$$18, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_38$$18)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&idx, &_36$$18, "key", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&value, &_36$$18, "current", NULL, 0);
				zephir_check_call_status();
					if (!(zephir_instance_of_ev(&value, consulate_api_agent_sampledvalue_ce TSRMLS_CC))) {
						ZEPHIR_INIT_NVAR(&_42$$22);
						object_init_ex(&_42$$22, consulate_api_agent_sampledvalue_ce);
						ZEPHIR_CALL_METHOD(NULL, &_42$$22, "__construct", &_11, 19, &value);
						zephir_check_call_status();
						zephir_update_property_array(this_ptr, SL("samples"), &idx, &_42$$22);
						ZEPHIR_INIT_NVAR(&_42$$22);
					}
				ZEPHIR_CALL_METHOD(NULL, &_36$$18, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&value);
		ZEPHIR_INIT_NVAR(&idx);
	}
	ZEPHIR_MM_RESTORE();

}

zend_object *zephir_init_properties_Consulate_Api_Agent_MetricsInfo(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _2, _4, _6, _1$$3, _3$$4, _5$$5, _7$$6;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_7$$6);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("samples"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("samples"), &_1$$3);
		}
		zephir_read_property(&_2, this_ptr, SL("counters"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_3$$4);
			array_init(&_3$$4);
			zephir_update_property_zval(this_ptr, SL("counters"), &_3$$4);
		}
		zephir_read_property(&_4, this_ptr, SL("points"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_4) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_5$$5);
			array_init(&_5$$5);
			zephir_update_property_zval(this_ptr, SL("points"), &_5$$5);
		}
		zephir_read_property(&_6, this_ptr, SL("gauges"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_6) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_7$$6);
			array_init(&_7$$6);
			zephir_update_property_zval(this_ptr, SL("gauges"), &_7$$6);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

