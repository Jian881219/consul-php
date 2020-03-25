
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
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Health_Service) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Health, Service, consulate, api_health_service, consulate_model_ce, consulate_api_health_service_method_entry, 0);

	zend_declare_property_null(consulate_api_health_service_ce, SL("node"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_health_service_ce, SL("service"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_health_service_ce, SL("checks"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Health_Service, getNode) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "node");

}

PHP_METHOD(Consulate_Api_Health_Service, getService) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "service");

}

PHP_METHOD(Consulate_Api_Health_Service, getChecks) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "checks");

}

PHP_METHOD(Consulate_Api_Health_Service, __construct) {

	zend_string *_14$$5;
	zend_ulong _13$$5;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *data_param = NULL, idx, item, _1, _4, _7, _8, _9, _2$$3, _3$$3, _5$$4, _6$$4, _10$$5, *_11$$5, _12$$5, _15$$6, _16$$7;
	zval data;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_12$$5);
	ZVAL_UNDEF(&_15$$6);
	ZVAL_UNDEF(&_16$$7);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &data_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(&data);
		array_init(&data);
	} else {
		zephir_get_arrval(&data, data_param);
	}


	ZEPHIR_CALL_PARENT(NULL, consulate_api_health_service_ce, getThis(), "__construct", &_0, 0, &data);
	zephir_check_call_status();
	zephir_read_property(&_1, this_ptr, SL("node"), PH_NOISY_CC | PH_READONLY);
	if (Z_TYPE_P(&_1) != IS_NULL) {
		ZEPHIR_INIT_VAR(&_2$$3);
		object_init_ex(&_2$$3, consulate_api_catalog_node_ce);
		zephir_read_property(&_3$$3, this_ptr, SL("node"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(NULL, &_2$$3, "__construct", NULL, 19, &_3$$3);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("node"), &_2$$3);
	}
	zephir_read_property(&_4, this_ptr, SL("service"), PH_NOISY_CC | PH_READONLY);
	if (Z_TYPE_P(&_4) != IS_NULL) {
		ZEPHIR_INIT_VAR(&_5$$4);
		object_init_ex(&_5$$4, consulate_api_agent_service_ce);
		zephir_read_property(&_6$$4, this_ptr, SL("service"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(NULL, &_5$$4, "__construct", NULL, 19, &_6$$4);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("service"), &_5$$4);
	}
	zephir_read_property(&_7, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_8, "array_filter", NULL, 2, &_7);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("checks"), &_8);
	zephir_read_property(&_9, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_count_int(&_9 TSRMLS_CC) > 0) {
		zephir_read_property(&_10$$5, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
		zephir_is_iterable(&_10$$5, 0, "consulate/api/health/service.zep", 34);
		if (Z_TYPE_P(&_10$$5) == IS_ARRAY) {
			ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_10$$5), _13$$5, _14$$5, _11$$5)
			{
				ZEPHIR_INIT_NVAR(&idx);
				if (_14$$5 != NULL) { 
					ZVAL_STR_COPY(&idx, _14$$5);
				} else {
					ZVAL_LONG(&idx, _13$$5);
				}
				ZEPHIR_INIT_NVAR(&item);
				ZVAL_COPY(&item, _11$$5);
				ZEPHIR_INIT_NVAR(&_15$$6);
				object_init_ex(&_15$$6, consulate_api_health_check_ce);
				ZEPHIR_CALL_METHOD(NULL, &_15$$6, "__construct", NULL, 19, &item);
				zephir_check_call_status();
				zephir_update_property_array(this_ptr, SL("checks"), &idx, &_15$$6);
				ZEPHIR_INIT_NVAR(&_15$$6);
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &_10$$5, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_12$$5, &_10$$5, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_12$$5)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&idx, &_10$$5, "key", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&item, &_10$$5, "current", NULL, 0);
				zephir_check_call_status();
					ZEPHIR_INIT_NVAR(&_16$$7);
					object_init_ex(&_16$$7, consulate_api_health_check_ce);
					ZEPHIR_CALL_METHOD(NULL, &_16$$7, "__construct", NULL, 19, &item);
					zephir_check_call_status();
					zephir_update_property_array(this_ptr, SL("checks"), &idx, &_16$$7);
					ZEPHIR_INIT_NVAR(&_16$$7);
				ZEPHIR_CALL_METHOD(NULL, &_10$$5, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&item);
		ZEPHIR_INIT_NVAR(&idx);
	}
	ZEPHIR_MM_RESTORE();

}

