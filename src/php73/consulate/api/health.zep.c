
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
#include "kernel/concat.h"
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Health) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api, Health, consulate, api_health, consulate_api_endpoint_ce, consulate_api_health_method_entry, 0);

	zephir_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_ANY"), "any");

	zephir_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_PASSING"), "passing");

	zephir_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_WARNING"), "warning");

	zephir_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_CRITICAL"), "critical");

	zephir_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_MAINT"), "maintenance");

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Health, node) {

	zend_string *_10;
	zend_ulong _9;
	zephir_fcall_cache_entry *_12 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *node_param = NULL, *q = NULL, q_sub, __$null, r, response, data, qm, idx, item, output, _1, _2, _3, _4, _5, _6, *_7, _8, _11$$3, _13$$4;
	zval node, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&node);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&output);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_13$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &node_param, &q);

	zephir_get_strval(&node, node_param);
	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	ZEPHIR_INIT_VAR(&output);
	array_init(&output);
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "/v1/health/node/", &node);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "GET");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&qm);
	object_init_ex(&qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(&_1);
	array_init(&_1);
	ZEPHIR_CALL_METHOD(NULL, &qm, "__construct", NULL, 22, &_1);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 24 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "parsequerymeta", NULL, 0, &_4, &qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(&qm, &_3);
	zephir_array_fetch_long(&_5, &data, 0, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 25 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, &qm, "setrequesttime", NULL, 23, &_5);
	zephir_check_call_status();
	zephir_array_fetch_long(&_6, &data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 27 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&response, this_ptr, "decodebody", NULL, 0, &_6);
	zephir_check_call_status();
	zephir_is_iterable(&response, 0, "consulate/api/health.zep", 33);
	if (Z_TYPE_P(&response) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&response), _9, _10, _7)
		{
			ZEPHIR_INIT_NVAR(&idx);
			if (_10 != NULL) { 
				ZVAL_STR_COPY(&idx, _10);
			} else {
				ZVAL_LONG(&idx, _9);
			}
			ZEPHIR_INIT_NVAR(&item);
			ZVAL_COPY(&item, _7);
			ZEPHIR_INIT_NVAR(&_11$$3);
			object_init_ex(&_11$$3, consulate_api_health_check_ce);
			ZEPHIR_CALL_METHOD(NULL, &_11$$3, "__construct", &_12, 19, &item);
			zephir_check_call_status();
			zephir_array_update_zval(&output, &idx, &_11$$3, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &response, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_8, &response, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_8)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&idx, &response, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&item, &response, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_13$$4);
				object_init_ex(&_13$$4, consulate_api_health_check_ce);
				ZEPHIR_CALL_METHOD(NULL, &_13$$4, "__construct", &_12, 19, &item);
				zephir_check_call_status();
				zephir_array_update_zval(&output, &idx, &_13$$4, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &response, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&idx);
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, &output);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Health, checks) {

	zend_string *_10;
	zend_ulong _9;
	zephir_fcall_cache_entry *_12 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *service_param = NULL, *q = NULL, q_sub, __$null, r, response, data, qm, idx, item, output, _1, _2, _3, _4, _5, _6, *_7, _8, _11$$3, _13$$4;
	zval service, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&output);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_13$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &service_param, &q);

	zephir_get_strval(&service, service_param);
	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	ZEPHIR_INIT_VAR(&output);
	array_init(&output);
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "/v1/health/checks/", &service);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "GET");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&qm);
	object_init_ex(&qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(&_1);
	array_init(&_1);
	ZEPHIR_CALL_METHOD(NULL, &qm, "__construct", NULL, 22, &_1);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, &data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 46 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "parsequerymeta", NULL, 0, &_4, &qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(&qm, &_3);
	zephir_array_fetch_long(&_5, &data, 0, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 47 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, &qm, "setrequesttime", NULL, 23, &_5);
	zephir_check_call_status();
	zephir_array_fetch_long(&_6, &data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 49 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&response, this_ptr, "decodebody", NULL, 0, &_6);
	zephir_check_call_status();
	zephir_is_iterable(&response, 0, "consulate/api/health.zep", 55);
	if (Z_TYPE_P(&response) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&response), _9, _10, _7)
		{
			ZEPHIR_INIT_NVAR(&idx);
			if (_10 != NULL) { 
				ZVAL_STR_COPY(&idx, _10);
			} else {
				ZVAL_LONG(&idx, _9);
			}
			ZEPHIR_INIT_NVAR(&item);
			ZVAL_COPY(&item, _7);
			ZEPHIR_INIT_NVAR(&_11$$3);
			object_init_ex(&_11$$3, consulate_api_health_check_ce);
			ZEPHIR_CALL_METHOD(NULL, &_11$$3, "__construct", &_12, 19, &item);
			zephir_check_call_status();
			zephir_array_update_zval(&output, &idx, &_11$$3, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &response, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_8, &response, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_8)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&idx, &response, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&item, &response, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_13$$4);
				object_init_ex(&_13$$4, consulate_api_health_check_ce);
				ZEPHIR_CALL_METHOD(NULL, &_13$$4, "__construct", &_12, 19, &item);
				zephir_check_call_status();
				zephir_array_update_zval(&output, &idx, &_13$$4, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &response, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&idx);
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, &output);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Health, service) {

	zend_string *_15;
	zend_ulong _14;
	zephir_fcall_cache_entry *_17 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool passingOnly;
	zval *service_param = NULL, *tag_param = NULL, *passingOnly_param = NULL, *q = NULL, q_sub, __$null, r, response, data, qm, idx, item, output, _1, _7, _8, _9, _10, _11, *_12, _13, _2$$3, _3$$3, _4$$4, _5$$4, _6$$4, _16$$5, _18$$6;
	zval service, tag, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&tag);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&q_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&output);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_18$$6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 3, &service_param, &tag_param, &passingOnly_param, &q);

	zephir_get_strval(&service, service_param);
	if (!tag_param) {
		ZEPHIR_INIT_VAR(&tag);
		ZVAL_STRING(&tag, "");
	} else {
		zephir_get_strval(&tag, tag_param);
	}
	if (!passingOnly_param) {
		passingOnly = 0;
	} else {
		passingOnly = zephir_get_boolval(passingOnly_param);
	}
	if (!q) {
		q = &q_sub;
		q = &__$null;
	}


	ZEPHIR_INIT_VAR(&output);
	array_init(&output);
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "/v1/health/service/", &service);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "GET");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	if (!(ZEPHIR_IS_EMPTY(&tag))) {
		zephir_read_property(&_2$$3, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_STRING(&_3$$3, "tag");
		ZEPHIR_CALL_METHOD(NULL, &_2$$3, "set", NULL, 0, &_3$$3, &tag);
		zephir_check_call_status();
	}
	if (passingOnly) {
		zephir_read_property(&_4$$4, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_5$$4);
		ZVAL_STRING(&_5$$4, "passing");
		ZEPHIR_INIT_VAR(&_6$$4);
		ZVAL_STRING(&_6$$4, "1");
		ZEPHIR_CALL_METHOD(NULL, &_4$$4, "set", NULL, 0, &_5$$4, &_6$$4);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_7, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, &_7);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&qm);
	object_init_ex(&qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(&_1);
	array_init(&_1);
	ZEPHIR_CALL_METHOD(NULL, &qm, "__construct", NULL, 22, &_1);
	zephir_check_call_status();
	zephir_array_fetch_long(&_9, &data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 76 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_8, this_ptr, "parsequerymeta", NULL, 0, &_9, &qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(&qm, &_8);
	zephir_array_fetch_long(&_10, &data, 0, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 77 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, &qm, "setrequesttime", NULL, 23, &_10);
	zephir_check_call_status();
	zephir_array_fetch_long(&_11, &data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 79 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&response, this_ptr, "decodebody", NULL, 0, &_11);
	zephir_check_call_status();
	zephir_is_iterable(&response, 0, "consulate/api/health.zep", 85);
	if (Z_TYPE_P(&response) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&response), _14, _15, _12)
		{
			ZEPHIR_INIT_NVAR(&idx);
			if (_15 != NULL) { 
				ZVAL_STR_COPY(&idx, _15);
			} else {
				ZVAL_LONG(&idx, _14);
			}
			ZEPHIR_INIT_NVAR(&item);
			ZVAL_COPY(&item, _12);
			ZEPHIR_INIT_NVAR(&_16$$5);
			object_init_ex(&_16$$5, consulate_api_health_service_ce);
			ZEPHIR_CALL_METHOD(NULL, &_16$$5, "__construct", &_17, 24, &item);
			zephir_check_call_status();
			zephir_array_update_zval(&output, &idx, &_16$$5, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &response, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_13, &response, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_13)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&idx, &response, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&item, &response, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_18$$6);
				object_init_ex(&_18$$6, consulate_api_health_service_ce);
				ZEPHIR_CALL_METHOD(NULL, &_18$$6, "__construct", &_17, 24, &item);
				zephir_check_call_status();
				zephir_array_update_zval(&output, &idx, &_18$$6, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &response, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&idx);
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, &output);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Health, state) {

	zend_string *_14;
	zend_ulong _13;
	zephir_fcall_cache_entry *_16 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *state_param = NULL, *q, q_sub, __$true, r, response, data, qm, idx, item, output, states, _0, _1, _6, _7, _8, _9, _10, *_11, _12, _2$$3, _3$$3, _4$$3, _15$$4, _17$$5;
	zval state, _5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&state);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&q_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&qm);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&output);
	ZVAL_UNDEF(&states);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_15$$4);
	ZVAL_UNDEF(&_17$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &state_param, &q);

	zephir_get_strval(&state, state_param);


	ZEPHIR_INIT_VAR(&output);
	array_init(&output);
	ZEPHIR_INIT_VAR(&states);
	zephir_create_array(&states, 5, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "passing");
	zephir_array_fast_append(&states, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "any");
	zephir_array_fast_append(&states, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "maintenance");
	zephir_array_fast_append(&states, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "warning");
	zephir_array_fast_append(&states, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "critical");
	zephir_array_fast_append(&states, &_0);
	ZEPHIR_CALL_FUNCTION(&_1, "in_array", NULL, 25, &state, &states, &__$true);
	zephir_check_call_status();
	if (!zephir_is_true(&_1)) {
		ZEPHIR_INIT_VAR(&_2$$3);
		object_init_ex(&_2$$3, consulate_api_health_exception_ce);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_STRING(&_3$$3, "Health: Unspported state: %s");
		ZEPHIR_CALL_FUNCTION(&_4$$3, "sprintf", NULL, 10, &_3$$3, &state);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, &_2$$3, "__construct", NULL, 11, &_4$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_2$$3, "consulate/api/health.zep", 100 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_VAR(&_5);
	ZEPHIR_CONCAT_SV(&_5, "/v1/health/state/", &state);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "GET");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_5);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_6, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, &_6);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&qm);
	object_init_ex(&qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(&_0);
	array_init(&_0);
	ZEPHIR_CALL_METHOD(NULL, &qm, "__construct", NULL, 22, &_0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_8, &data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 109 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_7, this_ptr, "parsequerymeta", NULL, 0, &_8, &qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(&qm, &_7);
	zephir_array_fetch_long(&_9, &data, 0, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 110 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, &qm, "setrequesttime", NULL, 23, &_9);
	zephir_check_call_status();
	zephir_array_fetch_long(&_10, &data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 112 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&response, this_ptr, "decodebody", NULL, 0, &_10);
	zephir_check_call_status();
	zephir_is_iterable(&response, 0, "consulate/api/health.zep", 118);
	if (Z_TYPE_P(&response) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&response), _13, _14, _11)
		{
			ZEPHIR_INIT_NVAR(&idx);
			if (_14 != NULL) { 
				ZVAL_STR_COPY(&idx, _14);
			} else {
				ZVAL_LONG(&idx, _13);
			}
			ZEPHIR_INIT_NVAR(&item);
			ZVAL_COPY(&item, _11);
			ZEPHIR_INIT_NVAR(&_15$$4);
			object_init_ex(&_15$$4, consulate_api_health_check_ce);
			ZEPHIR_CALL_METHOD(NULL, &_15$$4, "__construct", &_16, 19, &item);
			zephir_check_call_status();
			zephir_array_update_zval(&output, &idx, &_15$$4, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &response, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_12, &response, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_12)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&idx, &response, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&item, &response, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_17$$5);
				object_init_ex(&_17$$5, consulate_api_health_check_ce);
				ZEPHIR_CALL_METHOD(NULL, &_17$$5, "__construct", &_16, 19, &item);
				zephir_check_call_status();
				zephir_array_update_zval(&output, &idx, &_17$$5, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &response, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&idx);
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, &output);
	zephir_array_fast_append(return_value, &qm);
	RETURN_MM();

}

