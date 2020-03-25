
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

	zend_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_ANY"), "any" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_PASSING"), "passing" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_WARNING"), "warning" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_CRITICAL"), "critical" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_api_health_ce, SL("HEALTH_MAINT"), "maintenance" TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Health, node) {

	HashTable *_8;
	HashPosition _7;
	zephir_fcall_cache_entry *_11 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *node_param = NULL, *q = NULL, *r = NULL, *response = NULL, *data = NULL, *qm = NULL, *idx = NULL, *item = NULL, *output = NULL, *_1 = NULL, *_2 = NULL, *_3 = NULL, *_4, *_5, *_6, **_9, *_10$$3 = NULL;
	zval *node = NULL, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &node_param, &q);

	zephir_get_strval(node, node_param);
	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_INIT_VAR(output);
	array_init(output);
	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_CONCAT_SV(_0, "/v1/health/node/", node);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "GET", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, _1, _0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, _2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(qm);
	object_init_ex(qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(_1);
	array_init(_1);
	ZEPHIR_CALL_METHOD(NULL, qm, "__construct", NULL, 22, _1);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 24 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "parsequerymeta", NULL, 0, _4, qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(qm, _3);
	zephir_array_fetch_long(&_5, data, 0, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 25 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, qm, "setrequesttime", NULL, 23, _5);
	zephir_check_call_status();
	zephir_array_fetch_long(&_6, data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 27 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&response, this_ptr, "decodebody", NULL, 0, _6);
	zephir_check_call_status();
	zephir_is_iterable(response, &_8, &_7, 0, 0, "consulate/api/health.zep", 33);
	for (
	  ; zend_hash_get_current_data_ex(_8, (void**) &_9, &_7) == SUCCESS
	  ; zend_hash_move_forward_ex(_8, &_7)
	) {
		ZEPHIR_GET_HMKEY(idx, _8, _7);
		ZEPHIR_GET_HVALUE(item, _9);
		ZEPHIR_INIT_NVAR(_10$$3);
		object_init_ex(_10$$3, consulate_api_health_check_ce);
		ZEPHIR_CALL_METHOD(NULL, _10$$3, "__construct", &_11, 19, item);
		zephir_check_call_status();
		zephir_array_update_zval(&output, idx, &_10$$3, PH_COPY | PH_SEPARATE);
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, output);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Health, checks) {

	HashTable *_8;
	HashPosition _7;
	zephir_fcall_cache_entry *_11 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *service_param = NULL, *q = NULL, *r = NULL, *response = NULL, *data = NULL, *qm = NULL, *idx = NULL, *item = NULL, *output = NULL, *_1 = NULL, *_2 = NULL, *_3 = NULL, *_4, *_5, *_6, **_9, *_10$$3 = NULL;
	zval *service = NULL, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &service_param, &q);

	zephir_get_strval(service, service_param);
	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_INIT_VAR(output);
	array_init(output);
	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_CONCAT_SV(_0, "/v1/health/checks/", service);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "GET", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, _1, _0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, _2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(qm);
	object_init_ex(qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(_1);
	array_init(_1);
	ZEPHIR_CALL_METHOD(NULL, qm, "__construct", NULL, 22, _1);
	zephir_check_call_status();
	zephir_array_fetch_long(&_4, data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 46 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "parsequerymeta", NULL, 0, _4, qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(qm, _3);
	zephir_array_fetch_long(&_5, data, 0, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 47 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, qm, "setrequesttime", NULL, 23, _5);
	zephir_check_call_status();
	zephir_array_fetch_long(&_6, data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 49 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&response, this_ptr, "decodebody", NULL, 0, _6);
	zephir_check_call_status();
	zephir_is_iterable(response, &_8, &_7, 0, 0, "consulate/api/health.zep", 55);
	for (
	  ; zend_hash_get_current_data_ex(_8, (void**) &_9, &_7) == SUCCESS
	  ; zend_hash_move_forward_ex(_8, &_7)
	) {
		ZEPHIR_GET_HMKEY(idx, _8, _7);
		ZEPHIR_GET_HVALUE(item, _9);
		ZEPHIR_INIT_NVAR(_10$$3);
		object_init_ex(_10$$3, consulate_api_health_check_ce);
		ZEPHIR_CALL_METHOD(NULL, _10$$3, "__construct", &_11, 19, item);
		zephir_check_call_status();
		zephir_array_update_zval(&output, idx, &_10$$3, PH_COPY | PH_SEPARATE);
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, output);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Health, service) {

	HashTable *_13;
	HashPosition _12;
	zephir_fcall_cache_entry *_16 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool passingOnly;
	zval *service_param = NULL, *tag_param = NULL, *passingOnly_param = NULL, *q = NULL, *r = NULL, *response = NULL, *data = NULL, *qm = NULL, *idx = NULL, *item = NULL, *output = NULL, *_1 = NULL, *_7 = NULL, *_8 = NULL, *_9, *_10, *_11, **_14, *_2$$3, *_3$$3, *_4$$4, *_5$$4, *_6$$4, *_15$$5 = NULL;
	zval *service = NULL, *tag = NULL, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 3, &service_param, &tag_param, &passingOnly_param, &q);

	zephir_get_strval(service, service_param);
	if (!tag_param) {
		ZEPHIR_INIT_VAR(tag);
		ZVAL_STRING(tag, "", 1);
	} else {
		zephir_get_strval(tag, tag_param);
	}
	if (!passingOnly_param) {
		passingOnly = 0;
	} else {
		passingOnly = zephir_get_boolval(passingOnly_param);
	}
	if (!q) {
		q = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_INIT_VAR(output);
	array_init(output);
	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_CONCAT_SV(_0, "/v1/health/service/", service);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "GET", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, _1, _0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	if (!(ZEPHIR_IS_EMPTY(tag))) {
		ZEPHIR_OBS_VAR(_2$$3);
		zephir_read_property(&_2$$3, r, SL("params"), PH_NOISY_CC);
		ZEPHIR_INIT_VAR(_3$$3);
		ZVAL_STRING(_3$$3, "tag", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _2$$3, "set", NULL, 0, _3$$3, tag);
		zephir_check_temp_parameter(_3$$3);
		zephir_check_call_status();
	}
	if (passingOnly) {
		ZEPHIR_OBS_VAR(_4$$4);
		zephir_read_property(&_4$$4, r, SL("params"), PH_NOISY_CC);
		ZEPHIR_INIT_VAR(_5$$4);
		ZVAL_STRING(_5$$4, "passing", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_INIT_VAR(_6$$4);
		ZVAL_STRING(_6$$4, "1", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(NULL, _4$$4, "set", NULL, 0, _5$$4, _6$$4);
		zephir_check_temp_parameter(_5$$4);
		zephir_check_temp_parameter(_6$$4);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_7, this_ptr, "dorequest", NULL, 0, r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, _7);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(qm);
	object_init_ex(qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(_1);
	array_init(_1);
	ZEPHIR_CALL_METHOD(NULL, qm, "__construct", NULL, 22, _1);
	zephir_check_call_status();
	zephir_array_fetch_long(&_9, data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 76 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_8, this_ptr, "parsequerymeta", NULL, 0, _9, qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(qm, _8);
	zephir_array_fetch_long(&_10, data, 0, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 77 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, qm, "setrequesttime", NULL, 23, _10);
	zephir_check_call_status();
	zephir_array_fetch_long(&_11, data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 79 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&response, this_ptr, "decodebody", NULL, 0, _11);
	zephir_check_call_status();
	zephir_is_iterable(response, &_13, &_12, 0, 0, "consulate/api/health.zep", 85);
	for (
	  ; zend_hash_get_current_data_ex(_13, (void**) &_14, &_12) == SUCCESS
	  ; zend_hash_move_forward_ex(_13, &_12)
	) {
		ZEPHIR_GET_HMKEY(idx, _13, _12);
		ZEPHIR_GET_HVALUE(item, _14);
		ZEPHIR_INIT_NVAR(_15$$5);
		object_init_ex(_15$$5, consulate_api_health_service_ce);
		ZEPHIR_CALL_METHOD(NULL, _15$$5, "__construct", &_16, 24, item);
		zephir_check_call_status();
		zephir_array_update_zval(&output, idx, &_15$$5, PH_COPY | PH_SEPARATE);
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, output);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Health, state) {

	HashTable *_12;
	HashPosition _11;
	zephir_fcall_cache_entry *_15 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *state_param = NULL, *q, *r = NULL, *response = NULL, *data = NULL, *qm = NULL, *idx = NULL, *item = NULL, *output = NULL, *states = NULL, *_0 = NULL, *_1 = NULL, *_6 = NULL, *_7 = NULL, *_8, *_9, *_10, **_13, *_2$$3, _3$$3, *_4$$3 = NULL, *_14$$4 = NULL;
	zval *state = NULL, *_5;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &state_param, &q);

	zephir_get_strval(state, state_param);


	ZEPHIR_INIT_VAR(output);
	array_init(output);
	ZEPHIR_INIT_VAR(states);
	zephir_create_array(states, 5, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "passing", 1);
	zephir_array_fast_append(states, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "any", 1);
	zephir_array_fast_append(states, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "maintenance", 1);
	zephir_array_fast_append(states, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "warning", 1);
	zephir_array_fast_append(states, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "critical", 1);
	zephir_array_fast_append(states, _0);
	ZEPHIR_CALL_FUNCTION(&_1, "in_array", NULL, 25, state, states, ZEPHIR_GLOBAL(global_true));
	zephir_check_call_status();
	if (!zephir_is_true(_1)) {
		ZEPHIR_INIT_VAR(_2$$3);
		object_init_ex(_2$$3, consulate_api_health_exception_ce);
		ZEPHIR_SINIT_VAR(_3$$3);
		ZVAL_STRING(&_3$$3, "Health: Unspported state: %s", 0);
		ZEPHIR_CALL_FUNCTION(&_4$$3, "sprintf", NULL, 10, &_3$$3, state);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, _2$$3, "__construct", NULL, 11, _4$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(_2$$3, "consulate/api/health.zep", 100 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_VAR(_5);
	ZEPHIR_CONCAT_SV(_5, "/v1/health/state/", state);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "GET", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, _0, _5);
	zephir_check_temp_parameter(_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_6, this_ptr, "dorequest", NULL, 0, r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&data, this_ptr, "requireok", NULL, 0, _6);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(qm);
	object_init_ex(qm, consulate_querymeta_ce);
	ZEPHIR_INIT_NVAR(_0);
	array_init(_0);
	ZEPHIR_CALL_METHOD(NULL, qm, "__construct", NULL, 22, _0);
	zephir_check_call_status();
	zephir_array_fetch_long(&_8, data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 109 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_7, this_ptr, "parsequerymeta", NULL, 0, _8, qm);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(qm, _7);
	zephir_array_fetch_long(&_9, data, 0, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 110 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, qm, "setrequesttime", NULL, 23, _9);
	zephir_check_call_status();
	zephir_array_fetch_long(&_10, data, 1, PH_NOISY | PH_READONLY, "consulate/api/health.zep", 112 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&response, this_ptr, "decodebody", NULL, 0, _10);
	zephir_check_call_status();
	zephir_is_iterable(response, &_12, &_11, 0, 0, "consulate/api/health.zep", 118);
	for (
	  ; zend_hash_get_current_data_ex(_12, (void**) &_13, &_11) == SUCCESS
	  ; zend_hash_move_forward_ex(_12, &_11)
	) {
		ZEPHIR_GET_HMKEY(idx, _12, _11);
		ZEPHIR_GET_HVALUE(item, _13);
		ZEPHIR_INIT_NVAR(_14$$4);
		object_init_ex(_14$$4, consulate_api_health_check_ce);
		ZEPHIR_CALL_METHOD(NULL, _14$$4, "__construct", &_15, 19, item);
		zephir_check_call_status();
		zephir_array_update_zval(&output, idx, &_14$$4, PH_COPY | PH_SEPARATE);
	}
	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(return_value, output);
	zephir_array_fast_append(return_value, qm);
	RETURN_MM();

}

