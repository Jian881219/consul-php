
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
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Agent) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api, Agent, consulate, api_agent, consulate_api_endpoint_ce, consulate_api_agent_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_ce, SL("_nodeName"), "", ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent, self) {

	zval r, response, data, _0, _1, _2, _3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "GET");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/self");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_3, &response, 1, PH_NOISY | PH_READONLY, "consulate/api/agent.zep", 19 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_CCTOR(&data);

}

PHP_METHOD(Consulate_Api_Agent, metrics) {

	zval r, response, data, _0, _1, _2, _3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "GET");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/metrics");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_3, &response, 1, PH_NOISY | PH_READONLY, "consulate/api/agent.zep", 35 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, &_3);
	zephir_check_call_status();
	object_init_ex(return_value, consulate_api_agent_metricsinfo_ce);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 18, &data);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, reload) {

	zval r, _0, _1, _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "PUT");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/reload");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Api_Agent, nodeName) {

	zval _3;
	zval _0, info, name, _1, _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&info);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("_nodeName"), PH_NOISY_CC | PH_READONLY);
	if (!ZEPHIR_IS_STRING(&_0, "")) {
		RETURN_MM_MEMBER(getThis(), "_nodeName");
	}
	ZEPHIR_CALL_METHOD(&info, this_ptr, "self", NULL, 0);
	zephir_check_call_status();
	zephir_array_fetch_string(&_1, &info, SL("Config"), PH_NOISY | PH_READONLY, "consulate/api/agent.zep", 63 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&_2);
	zephir_array_fetch_string(&_2, &_1, SL("NodeName"), PH_NOISY, "consulate/api/agent.zep", 63 TSRMLS_CC);
	zephir_get_strval(&_3, &_2);
	ZEPHIR_CPY_WRT(&name, &_3);
	zephir_update_property_zval(this_ptr, SL("_nodeName"), &name);
	RETURN_CCTOR(&name);

}

PHP_METHOD(Consulate_Api_Agent, members) {

	zend_string *_12;
	zend_ulong _11;
	zephir_fcall_cache_entry *_14 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval segment;
	zval *wan_param = NULL, *segment_param = NULL, r, response, data, id, item, out, _0, _1, _7, _8, *_9, _10, _2$$3, _3$$3, _4$$3, _5$$4, _6$$4, _13$$5, _15$$6;
	zend_bool wan;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&id);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&out);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_13$$5);
	ZVAL_UNDEF(&_15$$6);
	ZVAL_UNDEF(&segment);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &wan_param, &segment_param);

	if (!wan_param) {
		wan = 0;
	} else {
		wan = zephir_get_boolval(wan_param);
	}
	if (!segment_param) {
		ZEPHIR_INIT_VAR(&segment);
		ZVAL_STRING(&segment, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(segment_param) != IS_STRING && Z_TYPE_P(segment_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'segment' must be of the type string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(segment_param) == IS_STRING)) {
		zephir_get_strval(&segment, segment_param);
	} else {
		ZEPHIR_INIT_VAR(&segment);
		ZVAL_EMPTY_STRING(&segment);
	}
	}


	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "GET");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/members");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	if (wan) {
		zephir_read_property(&_2$$3, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_STRING(&_3$$3, "wan");
		ZEPHIR_INIT_VAR(&_4$$3);
		ZVAL_STRING(&_4$$3, "1");
		ZEPHIR_CALL_METHOD(NULL, &_2$$3, "set", NULL, 0, &_3$$3, &_4$$3);
		zephir_check_call_status();
	}
	if (!ZEPHIR_IS_STRING(&segment, "")) {
		zephir_read_property(&_5$$4, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_6$$4);
		ZVAL_STRING(&_6$$4, "segment");
		ZEPHIR_CALL_METHOD(NULL, &_5$$4, "set", NULL, 0, &_6$$4, &segment);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_7, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_7);
	zephir_check_call_status();
	zephir_array_fetch_long(&_8, &response, 1, PH_NOISY | PH_READONLY, "consulate/api/agent.zep", 90 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, &_8);
	zephir_check_call_status();
	zephir_is_iterable(&data, 0, "consulate/api/agent.zep", 96);
	if (Z_TYPE_P(&data) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&data), _11, _12, _9)
		{
			ZEPHIR_INIT_NVAR(&id);
			if (_12 != NULL) { 
				ZVAL_STR_COPY(&id, _12);
			} else {
				ZVAL_LONG(&id, _11);
			}
			ZEPHIR_INIT_NVAR(&item);
			ZVAL_COPY(&item, _9);
			ZEPHIR_INIT_NVAR(&_13$$5);
			object_init_ex(&_13$$5, consulate_api_agent_member_ce);
			ZEPHIR_CALL_METHOD(NULL, &_13$$5, "__construct", &_14, 19, &item);
			zephir_check_call_status();
			zephir_array_update_zval(&out, &id, &_13$$5, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &data, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_10, &data, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_10)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&id, &data, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&item, &data, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_15$$6);
				object_init_ex(&_15$$6, consulate_api_agent_member_ce);
				ZEPHIR_CALL_METHOD(NULL, &_15$$6, "__construct", &_14, 19, &item);
				zephir_check_call_status();
				zephir_array_update_zval(&out, &id, &_15$$6, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &data, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&id);
	RETURN_CCTOR(&out);

}

PHP_METHOD(Consulate_Api_Agent, maintenance) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval reason;
	zval *enable_param = NULL, *reason_param = NULL, r, _0, _1, _2, _3, _6, _4$$3, _5$$3;
	zend_bool enable;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&reason);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &enable_param, &reason_param);

	if (!enable_param) {
		enable = 0;
	} else {
		enable = zephir_get_boolval(enable_param);
	}
	if (!reason_param) {
		ZEPHIR_INIT_VAR(&reason);
		ZVAL_STRING(&reason, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(reason_param) != IS_STRING && Z_TYPE_P(reason_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'reason' must be of the type string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(reason_param) == IS_STRING)) {
		zephir_get_strval(&reason, reason_param);
	} else {
		ZEPHIR_INIT_VAR(&reason);
		ZVAL_EMPTY_STRING(&reason);
	}
	}


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "PUT");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/service/maintenance");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	zephir_read_property(&_2, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "enable");
	if (enable) {
		ZVAL_BOOL(&_3, 1);
	} else {
		ZVAL_BOOL(&_3, 0);
	}
	ZEPHIR_CALL_METHOD(NULL, &_2, "set", NULL, 0, &_0, &_3);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&reason, "")) {
		zephir_read_property(&_4$$3, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_5$$3);
		ZVAL_STRING(&_5$$3, "reason");
		ZEPHIR_CALL_METHOD(NULL, &_4$$3, "set", NULL, 0, &_5$$3, &reason);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_6, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_6);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, monitor) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *loglevel_param = NULL, *q, q_sub, r, response, _0, _1, _4, _2$$3, _3$$3;
	zval loglevel;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&loglevel);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &loglevel_param, &q);

	if (!loglevel_param) {
		ZEPHIR_INIT_VAR(&loglevel);
		ZVAL_STRING(&loglevel, "");
	} else {
		zephir_get_strval(&loglevel, loglevel_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "PUT");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/monitor");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setqueryoptions", NULL, 0, q);
	zephir_check_call_status();
	if (!(ZEPHIR_IS_EMPTY(&loglevel))) {
		zephir_read_property(&_2$$3, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_STRING(&_3$$3, "loglevel");
		ZEPHIR_CALL_METHOD(NULL, &_2$$3, "set", NULL, 0, &_3$$3, &loglevel);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_4, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_4);
	zephir_check_call_status();
	RETURN_CCTOR(&response);

}

PHP_METHOD(Consulate_Api_Agent, join) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wan;
	zval *address_param = NULL, *wan_param = NULL, r, _1, _5, _2$$3, _3$$3, _4$$3;
	zval address, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&address);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &address_param, &wan_param);

	zephir_get_strval(&address, address_param);
	if (!wan_param) {
		wan = 0;
	} else {
		wan = zephir_get_boolval(wan_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "v1/agent/join/", &address);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "PUT");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_0);
	zephir_check_call_status();
	if (wan) {
		zephir_read_property(&_2$$3, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_STRING(&_3$$3, "wan");
		ZEPHIR_INIT_VAR(&_4$$3);
		ZVAL_STRING(&_4$$3, "1");
		ZEPHIR_CALL_METHOD(NULL, &_2$$3, "set", NULL, 0, &_3$$3, &_4$$3);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_5, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_5);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, leave) {

	zval r, _0, _1, _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "PUT");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/leave");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, forceLeave) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *node_param = NULL, r, _1, _2;
	zval node, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&node);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &node_param);

	zephir_get_strval(&node, node_param);


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "v1/agent/force-leave/", &node);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "PUT");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, updateACLToken) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *token_param = NULL, *q, q_sub, _0;
	zval token;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&token);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &token_param, &q);

	zephir_get_strval(&token, token_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "acl_token");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updatetoken", NULL, 20, &_0, &token, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, updateACLAgentToken) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *token_param = NULL, *q, q_sub, _0;
	zval token;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&token);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &token_param, &q);

	zephir_get_strval(&token, token_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "acl_agent_token");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updatetoken", NULL, 20, &_0, &token, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, updateACLAgentMasterToken) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *token_param = NULL, *q, q_sub, _0;
	zval token;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&token);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &token_param, &q);

	zephir_get_strval(&token, token_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "acl_agent_master_token");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updatetoken", NULL, 20, &_0, &token, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, updateACLReplicationToken) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *token_param = NULL, *q, q_sub, _0;
	zval token;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&token);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &token_param, &q);

	zephir_get_strval(&token, token_param);


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "acl_replication_token");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "updatetoken", NULL, 20, &_0, &token, q);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, updateToken) {

	zval _0, _4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *target_param = NULL, *token_param = NULL, *q, q_sub, r, response, _1, _2, _3, _5;
	zval target, token;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&target);
	ZVAL_UNDEF(&token);
	ZVAL_UNDEF(&q_sub);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &target_param, &token_param, &q);

	zephir_get_strval(&target, target_param);
	zephir_get_strval(&token, token_param);


	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&_0, SL("Token"), &token, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/token/%s");
	ZEPHIR_CALL_FUNCTION(&_2, "sprintf", NULL, 10, &_1, &target, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "PUT");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_2);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &r, "setwriteoptions", NULL, 0, q);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_3);
	zephir_check_call_status();
	object_init_ex(return_value, consulate_writemeta_ce);
	ZEPHIR_INIT_VAR(&_4);
	zephir_create_array(&_4, 1, 0 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&_5);
	zephir_array_fetch_long(&_5, &response, 0, PH_NOISY, "consulate/api/agent.zep", 199 TSRMLS_CC);
	zephir_array_update_string(&_4, SL("requestTime"), &_5, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 19, &_4);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, services) {

	zend_string *_7;
	zend_ulong _6;
	zval r, response, data, id, item, out, _0, _1, _2, _3, *_4, _5, _8$$3, _10$$4;
	zephir_fcall_cache_entry *_9 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&id);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&out);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_10$$4);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "GET");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/services");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_3, &response, 1, PH_NOISY | PH_READONLY, "consulate/api/agent.zep", 212 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, &_3);
	zephir_check_call_status();
	zephir_is_iterable(&data, 0, "consulate/api/agent.zep", 218);
	if (Z_TYPE_P(&data) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&data), _6, _7, _4)
		{
			ZEPHIR_INIT_NVAR(&id);
			if (_7 != NULL) { 
				ZVAL_STR_COPY(&id, _7);
			} else {
				ZVAL_LONG(&id, _6);
			}
			ZEPHIR_INIT_NVAR(&item);
			ZVAL_COPY(&item, _4);
			ZEPHIR_INIT_NVAR(&_8$$3);
			object_init_ex(&_8$$3, consulate_api_agent_service_ce);
			ZEPHIR_CALL_METHOD(NULL, &_8$$3, "__construct", &_9, 19, &item);
			zephir_check_call_status();
			zephir_array_update_zval(&out, &id, &_8$$3, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &data, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_5, &data, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_5)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&id, &data, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&item, &data, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_10$$4);
				object_init_ex(&_10$$4, consulate_api_agent_service_ce);
				ZEPHIR_CALL_METHOD(NULL, &_10$$4, "__construct", &_9, 19, &item);
				zephir_check_call_status();
				zephir_array_update_zval(&out, &id, &_10$$4, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &data, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&id);
	RETURN_CCTOR(&out);

}

PHP_METHOD(Consulate_Api_Agent, serviceRegister) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *service, service_sub, r, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&service_sub);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &service);



	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "PUT");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/service/register");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1, service);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, serviceDeregister) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *serviceId_param = NULL, r, _1, _2;
	zval serviceId, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&serviceId);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &serviceId_param);

	zephir_get_strval(&serviceId, serviceId_param);


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "v1/agent/service/deregister/", &serviceId);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "PUT");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, checks) {

	zend_string *_7;
	zend_ulong _6;
	zval r, response, data, id, item, out, _0, _1, _2, _3, *_4, _5, _8$$3, _10$$4;
	zephir_fcall_cache_entry *_9 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&id);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&out);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_10$$4);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "GET");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/checks");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_3, &response, 1, PH_NOISY | PH_READONLY, "consulate/api/agent.zep", 258 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&data, this_ptr, "decodebody", NULL, 0, &_3);
	zephir_check_call_status();
	zephir_is_iterable(&data, 0, "consulate/api/agent.zep", 264);
	if (Z_TYPE_P(&data) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&data), _6, _7, _4)
		{
			ZEPHIR_INIT_NVAR(&id);
			if (_7 != NULL) { 
				ZVAL_STR_COPY(&id, _7);
			} else {
				ZVAL_LONG(&id, _6);
			}
			ZEPHIR_INIT_NVAR(&item);
			ZVAL_COPY(&item, _4);
			ZEPHIR_INIT_NVAR(&_8$$3);
			object_init_ex(&_8$$3, consulate_api_agent_check_ce);
			ZEPHIR_CALL_METHOD(NULL, &_8$$3, "__construct", &_9, 19, &item);
			zephir_check_call_status();
			zephir_array_update_zval(&out, &id, &_8$$3, PH_COPY | PH_SEPARATE);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &data, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_5, &data, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_5)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&id, &data, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&item, &data, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_10$$4);
				object_init_ex(&_10$$4, consulate_api_agent_check_ce);
				ZEPHIR_CALL_METHOD(NULL, &_10$$4, "__construct", &_9, 19, &item);
				zephir_check_call_status();
				zephir_array_update_zval(&out, &id, &_10$$4, PH_COPY | PH_SEPARATE);
			ZEPHIR_CALL_METHOD(NULL, &data, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&id);
	RETURN_CCTOR(&out);

}

PHP_METHOD(Consulate_Api_Agent, passTTL) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *checkId_param = NULL, *note_param = NULL, _0;
	zval checkId, note;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&checkId);
	ZVAL_UNDEF(&note);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &checkId_param, &note_param);

	zephir_get_strval(&checkId, checkId_param);
	if (!note_param) {
		ZEPHIR_INIT_VAR(&note);
		ZVAL_STRING(&note, "");
	} else {
		zephir_get_strval(&note, note_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "pass");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "_updatettl", NULL, 21, &checkId, &note, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, warnTTL) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *checkId_param = NULL, *note_param = NULL, _0;
	zval checkId, note;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&checkId);
	ZVAL_UNDEF(&note);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &checkId_param, &note_param);

	zephir_get_strval(&checkId, checkId_param);
	if (!note_param) {
		ZEPHIR_INIT_VAR(&note);
		ZVAL_STRING(&note, "");
	} else {
		zephir_get_strval(&note, note_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "warn");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "_updatettl", NULL, 21, &checkId, &note, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, failTTL) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *checkId_param = NULL, *note_param = NULL, _0;
	zval checkId, note;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&checkId);
	ZVAL_UNDEF(&note);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &checkId_param, &note_param);

	zephir_get_strval(&checkId, checkId_param);
	if (!note_param) {
		ZEPHIR_INIT_VAR(&note);
		ZVAL_STRING(&note, "");
	} else {
		zephir_get_strval(&note, note_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "fail");
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "_updatettl", NULL, 21, &checkId, &note, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Agent, _updateTTL) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_5 = NULL;
	zval *checkId_param = NULL, *note_param = NULL, *status_param = NULL, _1, uri, r, _6, _7, _2$$3, _3$$3, _4$$3;
	zval checkId, note, status;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&checkId);
	ZVAL_UNDEF(&note);
	ZVAL_UNDEF(&status);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&uri);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &checkId_param, &note_param, &status_param);

	zephir_get_strval(&checkId, checkId_param);
	zephir_get_strval(&status, status_param);
	if (!note_param) {
		ZEPHIR_INIT_VAR(&note);
		ZVAL_STRING(&note, "");
	} else {
		zephir_get_strval(&note, note_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 3, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "pass");
	zephir_array_fast_append(&_0, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "warn");
	zephir_array_fast_append(&_0, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "fail");
	zephir_array_fast_append(&_0, &_1);
	if (!(zephir_fast_in_array(&status, &_0 TSRMLS_CC))) {
		ZEPHIR_INIT_VAR(&_2$$3);
		object_init_ex(&_2$$3, consulate_api_agent_exception_ce);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_STRING(&_3$$3, "Invalid status: %s");
		ZEPHIR_CALL_FUNCTION(&_4$$3, "sprintf", &_5, 10, &_3$$3, &status);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, &_2$$3, "__construct", NULL, 11, &_4$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_2$$3, "consulate/api/agent.zep", 310 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/check/%s/%s");
	ZEPHIR_CALL_FUNCTION(&uri, "sprintf", &_5, 10, &_1, &status, &checkId);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "PUT");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &uri);
	zephir_check_call_status();
	zephir_read_property(&_6, &r, SL("params"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "note");
	ZEPHIR_CALL_METHOD(NULL, &_6, "set", NULL, 0, &_1, &note);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_7, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_7);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, updateTTL) {

	zval _5;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *checkId_param = NULL, *output_param = NULL, *status_param = NULL, _0$$6, _1$$6, _2$$6, uri, r, _4, _6;
	zval checkId, output, status;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&checkId);
	ZVAL_UNDEF(&output);
	ZVAL_UNDEF(&status);
	ZVAL_UNDEF(&_0$$6);
	ZVAL_UNDEF(&_1$$6);
	ZVAL_UNDEF(&_2$$6);
	ZVAL_UNDEF(&uri);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &checkId_param, &output_param, &status_param);

	zephir_get_strval(&checkId, checkId_param);
	if (!output_param) {
		ZEPHIR_INIT_VAR(&output);
		ZVAL_STRING(&output, "");
	} else {
		zephir_get_strval(&output, output_param);
	}
	if (!status_param) {
		ZEPHIR_INIT_VAR(&status);
		ZVAL_STRING(&status, "");
	} else {
		zephir_get_strval(&status, status_param);
	}


	do {
		if (ZEPHIR_IS_STRING(&status, "pass") || ZEPHIR_IS_STRING(&status, "passing")) {
			ZEPHIR_INIT_NVAR(&status);
			ZVAL_STRING(&status, "passing");
			break;
		}
		if (ZEPHIR_IS_STRING(&status, "warn") || ZEPHIR_IS_STRING(&status, "warning")) {
			ZEPHIR_INIT_NVAR(&status);
			ZVAL_STRING(&status, "warning");
			break;
		}
		if (ZEPHIR_IS_STRING(&status, "fail") || ZEPHIR_IS_STRING(&status, "critical")) {
			ZEPHIR_INIT_NVAR(&status);
			ZVAL_STRING(&status, "critical");
			break;
		}
		ZEPHIR_INIT_VAR(&_0$$6);
		object_init_ex(&_0$$6, consulate_api_agent_exception_ce);
		ZEPHIR_INIT_VAR(&_1$$6);
		ZVAL_STRING(&_1$$6, "Invalid status: %s");
		ZEPHIR_CALL_FUNCTION(&_2$$6, "sprintf", &_3, 10, &_1$$6, &status);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, &_0$$6, "__construct", NULL, 11, &_2$$6);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_0$$6, "consulate/api/agent.zep", 345 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	} while(0);

	ZEPHIR_INIT_VAR(&_4);
	ZVAL_STRING(&_4, "v1/agent/check/update/%s");
	ZEPHIR_CALL_FUNCTION(&uri, "sprintf", &_3, 10, &_4, &checkId);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_5);
	zephir_create_array(&_5, 2, 0 TSRMLS_CC);
	zephir_array_update_string(&_5, SL("Status"), &status, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&_5, SL("Output"), &output, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(&_4);
	ZVAL_STRING(&_4, "PUT");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_4, &uri, &_5);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_6, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_6);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, checkRegister) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *check, check_sub, r, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&check_sub);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &check);



	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "PUT");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/agent/check/register");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1, check);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

PHP_METHOD(Consulate_Api_Agent, checkDeregister) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *checkId_param = NULL, r, _1, _2;
	zval checkId, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&checkId);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &checkId_param);

	zephir_get_strval(&checkId, checkId_param);


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "v1/agent/check/deregister/", &checkId);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "PUT");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_1, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM_BOOL(1);

}

