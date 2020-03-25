
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
#include "kernel/operators.h"
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_ServiceCheck) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, ServiceCheck, consulate, api_agent_servicecheck, consulate_model_ce, consulate_api_agent_servicecheck_method_entry, 0);

	zend_declare_property_null(consulate_api_agent_servicecheck_ce, SL("args"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("script"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("dockerContainerId"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("shell"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("interval"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("timeout"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("ttl"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("http"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_servicecheck_ce, SL("header"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("method"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("tcp"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("status"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("notes"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_api_agent_servicecheck_ce, SL("TLSSkipVerify"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_servicecheck_ce, SL("deregisterCriticalServiceAfter"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_servicecheck_ce->create_object = zephir_init_properties_Consulate_Api_Agent_ServiceCheck;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getArgs) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "args");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setArgs) {

	zval *args, args_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&args_sub);

	zephir_fetch_params(0, 1, 0, &args);



	zephir_update_property_zval(this_ptr, SL("args"), args);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getScript) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "script");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setScript) {

	zval *script, script_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&script_sub);

	zephir_fetch_params(0, 1, 0, &script);



	zephir_update_property_zval(this_ptr, SL("script"), script);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getDockerContainerId) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "dockerContainerId");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setDockerContainerId) {

	zval *dockerContainerId, dockerContainerId_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&dockerContainerId_sub);

	zephir_fetch_params(0, 1, 0, &dockerContainerId);



	zephir_update_property_zval(this_ptr, SL("dockerContainerId"), dockerContainerId);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getShell) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "shell");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setShell) {

	zval *shell, shell_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&shell_sub);

	zephir_fetch_params(0, 1, 0, &shell);



	zephir_update_property_zval(this_ptr, SL("shell"), shell);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getInterval) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "interval");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setInterval) {

	zval *interval, interval_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&interval_sub);

	zephir_fetch_params(0, 1, 0, &interval);



	zephir_update_property_zval(this_ptr, SL("interval"), interval);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTimeout) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "timeout");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTimeout) {

	zval *timeout, timeout_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&timeout_sub);

	zephir_fetch_params(0, 1, 0, &timeout);



	zephir_update_property_zval(this_ptr, SL("timeout"), timeout);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTtl) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "ttl");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTtl) {

	zval *ttl, ttl_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&ttl_sub);

	zephir_fetch_params(0, 1, 0, &ttl);



	zephir_update_property_zval(this_ptr, SL("ttl"), ttl);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getHttp) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "http");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setHttp) {

	zval *http, http_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&http_sub);

	zephir_fetch_params(0, 1, 0, &http);



	zephir_update_property_zval(this_ptr, SL("http"), http);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getHeader) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "header");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setHeader) {

	zval *header, header_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&header_sub);

	zephir_fetch_params(0, 1, 0, &header);



	zephir_update_property_zval(this_ptr, SL("header"), header);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getMethod) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "method");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setMethod) {

	zval *method, method_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&method_sub);

	zephir_fetch_params(0, 1, 0, &method);



	zephir_update_property_zval(this_ptr, SL("method"), method);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTcp) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "tcp");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTcp) {

	zval *tcp, tcp_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&tcp_sub);

	zephir_fetch_params(0, 1, 0, &tcp);



	zephir_update_property_zval(this_ptr, SL("tcp"), tcp);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getStatus) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "status");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setStatus) {

	zval *status, status_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&status_sub);

	zephir_fetch_params(0, 1, 0, &status);



	zephir_update_property_zval(this_ptr, SL("status"), status);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getNotes) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "notes");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setNotes) {

	zval *notes, notes_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&notes_sub);

	zephir_fetch_params(0, 1, 0, &notes);



	zephir_update_property_zval(this_ptr, SL("notes"), notes);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTLSSkipVerify) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "TLSSkipVerify");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTLSSkipVerify) {

	zval *TLSSkipVerify, TLSSkipVerify_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&TLSSkipVerify_sub);

	zephir_fetch_params(0, 1, 0, &TLSSkipVerify);



	zephir_update_property_zval(this_ptr, SL("TLSSkipVerify"), TLSSkipVerify);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getDeregisterCriticalServiceAfter) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "deregisterCriticalServiceAfter");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setDeregisterCriticalServiceAfter) {

	zval *deregisterCriticalServiceAfter, deregisterCriticalServiceAfter_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&deregisterCriticalServiceAfter_sub);

	zephir_fetch_params(0, 1, 0, &deregisterCriticalServiceAfter);



	zephir_update_property_zval(this_ptr, SL("deregisterCriticalServiceAfter"), deregisterCriticalServiceAfter);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, jsonSerialize) {

	zval out, _0, _2, _4, _6, _8, _10, _12, _14, _16, _18, _20, _22, _24, _26, _28, _1$$3, _3$$4, _5$$5, _7$$6, _9$$7, _11$$8, _13$$9, _15$$10, _17$$11, _19$$12, _21$$13, _23$$14, _25$$15, _27$$16, _29$$17;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&out);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_18);
	ZVAL_UNDEF(&_20);
	ZVAL_UNDEF(&_22);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_26);
	ZVAL_UNDEF(&_28);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_7$$6);
	ZVAL_UNDEF(&_9$$7);
	ZVAL_UNDEF(&_11$$8);
	ZVAL_UNDEF(&_13$$9);
	ZVAL_UNDEF(&_15$$10);
	ZVAL_UNDEF(&_17$$11);
	ZVAL_UNDEF(&_19$$12);
	ZVAL_UNDEF(&_21$$13);
	ZVAL_UNDEF(&_23$$14);
	ZVAL_UNDEF(&_25$$15);
	ZVAL_UNDEF(&_27$$16);
	ZVAL_UNDEF(&_29$$17);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	zephir_read_property(&_0, this_ptr, SL("args"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_0))) {
		zephir_read_property(&_1$$3, this_ptr, SL("args"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Args"), &_1$$3, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_2, this_ptr, SL("script"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_2))) {
		zephir_read_property(&_3$$4, this_ptr, SL("script"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Script"), &_3$$4, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_4, this_ptr, SL("dockerContainerId"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_4))) {
		zephir_read_property(&_5$$5, this_ptr, SL("dockerContainerId"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("DockerContainerID"), &_5$$5, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_6, this_ptr, SL("shell"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_6))) {
		zephir_read_property(&_7$$6, this_ptr, SL("shell"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Shell"), &_7$$6, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_8, this_ptr, SL("interval"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_8))) {
		zephir_read_property(&_9$$7, this_ptr, SL("interval"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Interval"), &_9$$7, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_10, this_ptr, SL("timeout"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_10))) {
		zephir_read_property(&_11$$8, this_ptr, SL("timeout"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Timeout"), &_11$$8, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_12, this_ptr, SL("ttl"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_12))) {
		zephir_read_property(&_13$$9, this_ptr, SL("ttl"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("TTL"), &_13$$9, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_14, this_ptr, SL("http"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_14))) {
		zephir_read_property(&_15$$10, this_ptr, SL("http"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("HTTP"), &_15$$10, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_16, this_ptr, SL("header"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_16))) {
		zephir_read_property(&_17$$11, this_ptr, SL("header"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Header"), &_17$$11, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_18, this_ptr, SL("method"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_18))) {
		zephir_read_property(&_19$$12, this_ptr, SL("method"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Method"), &_19$$12, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_20, this_ptr, SL("tcp"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_20))) {
		zephir_read_property(&_21$$13, this_ptr, SL("tcp"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("TCP"), &_21$$13, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_22, this_ptr, SL("status"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_22))) {
		zephir_read_property(&_23$$14, this_ptr, SL("status"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Status"), &_23$$14, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_24, this_ptr, SL("notes"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_24))) {
		zephir_read_property(&_25$$15, this_ptr, SL("notes"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Notes"), &_25$$15, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_26, this_ptr, SL("TLSSkipVerify"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_TRUE(&_26)) {
		zephir_read_property(&_27$$16, this_ptr, SL("TLSSkipVerify"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("TLSSkipVerify"), &_27$$16, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_28, this_ptr, SL("deregisterCriticalServiceAfter"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_28))) {
		zephir_read_property(&_29$$17, this_ptr, SL("deregisterCriticalServiceAfter"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("DeregisterCriticalServiceAfter"), &_29$$17, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(&out);

}

zend_object *zephir_init_properties_Consulate_Api_Agent_ServiceCheck(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _2, _1$$3, _3$$4;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_3$$4);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("header"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("header"), &_1$$3);
		}
		zephir_read_property(&_2, this_ptr, SL("args"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_3$$4);
			array_init(&_3$$4);
			zephir_update_property_zval(this_ptr, SL("args"), &_3$$4);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

