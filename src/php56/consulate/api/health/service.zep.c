
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

	

	RETURN_MEMBER(getThis(), "node");

}

PHP_METHOD(Consulate_Api_Health_Service, getService) {

	

	RETURN_MEMBER(getThis(), "service");

}

PHP_METHOD(Consulate_Api_Health_Service, getChecks) {

	

	RETURN_MEMBER(getThis(), "checks");

}

PHP_METHOD(Consulate_Api_Health_Service, __construct) {

	HashTable *_12$$5;
	HashPosition _11$$5;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *data_param = NULL, *idx = NULL, *item = NULL, *_1, *_4, *_7, *_8 = NULL, *_9, *_2$$3, *_3$$3, *_5$$4, *_6$$4, *_10$$5, **_13$$5, *_14$$6 = NULL;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &data_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(data);
		array_init(data);
	} else {
		zephir_get_arrval(data, data_param);
	}


	ZEPHIR_CALL_PARENT(NULL, consulate_api_health_service_ce, getThis(), "__construct", &_0, 19, data);
	zephir_check_call_status();
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("node"), PH_NOISY_CC);
	if (Z_TYPE_P(_1) != IS_NULL) {
		ZEPHIR_INIT_VAR(_2$$3);
		object_init_ex(_2$$3, consulate_api_catalog_node_ce);
		_3$$3 = zephir_fetch_nproperty_this(this_ptr, SL("node"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(NULL, _2$$3, "__construct", NULL, 19, _3$$3);
		zephir_check_call_status();
		zephir_update_property_this(getThis(), SL("node"), _2$$3 TSRMLS_CC);
	}
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("service"), PH_NOISY_CC);
	if (Z_TYPE_P(_4) != IS_NULL) {
		ZEPHIR_INIT_VAR(_5$$4);
		object_init_ex(_5$$4, consulate_api_agent_service_ce);
		_6$$4 = zephir_fetch_nproperty_this(this_ptr, SL("service"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(NULL, _5$$4, "__construct", NULL, 19, _6$$4);
		zephir_check_call_status();
		zephir_update_property_this(getThis(), SL("service"), _5$$4 TSRMLS_CC);
	}
	_7 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(&_8, "array_filter", NULL, 2, _7);
	zephir_check_call_status();
	zephir_update_property_this(getThis(), SL("checks"), _8 TSRMLS_CC);
	_9 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
	if (zephir_fast_count_int(_9 TSRMLS_CC) > 0) {
		_10$$5 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
		zephir_is_iterable(_10$$5, &_12$$5, &_11$$5, 0, 0, "consulate/api/health/service.zep", 34);
		for (
		  ; zend_hash_get_current_data_ex(_12$$5, (void**) &_13$$5, &_11$$5) == SUCCESS
		  ; zend_hash_move_forward_ex(_12$$5, &_11$$5)
		) {
			ZEPHIR_GET_HMKEY(idx, _12$$5, _11$$5);
			ZEPHIR_GET_HVALUE(item, _13$$5);
			ZEPHIR_INIT_NVAR(_14$$6);
			object_init_ex(_14$$6, consulate_api_health_check_ce);
			ZEPHIR_CALL_METHOD(NULL, _14$$6, "__construct", NULL, 19, item);
			zephir_check_call_status();
			zephir_update_property_array(this_ptr, SL("checks"), idx, _14$$6 TSRMLS_CC);
		}
	}
	ZEPHIR_MM_RESTORE();

}

