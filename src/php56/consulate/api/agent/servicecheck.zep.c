
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

	

	RETURN_MEMBER(getThis(), "args");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setArgs) {

	zval *args;

	zephir_fetch_params(0, 1, 0, &args);



	zephir_update_property_this(getThis(), SL("args"), args TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getScript) {

	

	RETURN_MEMBER(getThis(), "script");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setScript) {

	zval *script;

	zephir_fetch_params(0, 1, 0, &script);



	zephir_update_property_this(getThis(), SL("script"), script TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getDockerContainerId) {

	

	RETURN_MEMBER(getThis(), "dockerContainerId");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setDockerContainerId) {

	zval *dockerContainerId;

	zephir_fetch_params(0, 1, 0, &dockerContainerId);



	zephir_update_property_this(getThis(), SL("dockerContainerId"), dockerContainerId TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getShell) {

	

	RETURN_MEMBER(getThis(), "shell");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setShell) {

	zval *shell;

	zephir_fetch_params(0, 1, 0, &shell);



	zephir_update_property_this(getThis(), SL("shell"), shell TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getInterval) {

	

	RETURN_MEMBER(getThis(), "interval");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setInterval) {

	zval *interval;

	zephir_fetch_params(0, 1, 0, &interval);



	zephir_update_property_this(getThis(), SL("interval"), interval TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTimeout) {

	

	RETURN_MEMBER(getThis(), "timeout");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTimeout) {

	zval *timeout;

	zephir_fetch_params(0, 1, 0, &timeout);



	zephir_update_property_this(getThis(), SL("timeout"), timeout TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTtl) {

	

	RETURN_MEMBER(getThis(), "ttl");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTtl) {

	zval *ttl;

	zephir_fetch_params(0, 1, 0, &ttl);



	zephir_update_property_this(getThis(), SL("ttl"), ttl TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getHttp) {

	

	RETURN_MEMBER(getThis(), "http");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setHttp) {

	zval *http;

	zephir_fetch_params(0, 1, 0, &http);



	zephir_update_property_this(getThis(), SL("http"), http TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getHeader) {

	

	RETURN_MEMBER(getThis(), "header");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setHeader) {

	zval *header;

	zephir_fetch_params(0, 1, 0, &header);



	zephir_update_property_this(getThis(), SL("header"), header TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getMethod) {

	

	RETURN_MEMBER(getThis(), "method");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setMethod) {

	zval *method;

	zephir_fetch_params(0, 1, 0, &method);



	zephir_update_property_this(getThis(), SL("method"), method TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTcp) {

	

	RETURN_MEMBER(getThis(), "tcp");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTcp) {

	zval *tcp;

	zephir_fetch_params(0, 1, 0, &tcp);



	zephir_update_property_this(getThis(), SL("tcp"), tcp TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getStatus) {

	

	RETURN_MEMBER(getThis(), "status");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setStatus) {

	zval *status;

	zephir_fetch_params(0, 1, 0, &status);



	zephir_update_property_this(getThis(), SL("status"), status TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getNotes) {

	

	RETURN_MEMBER(getThis(), "notes");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setNotes) {

	zval *notes;

	zephir_fetch_params(0, 1, 0, &notes);



	zephir_update_property_this(getThis(), SL("notes"), notes TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getTLSSkipVerify) {

	

	RETURN_MEMBER(getThis(), "TLSSkipVerify");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setTLSSkipVerify) {

	zval *TLSSkipVerify;

	zephir_fetch_params(0, 1, 0, &TLSSkipVerify);



	zephir_update_property_this(getThis(), SL("TLSSkipVerify"), TLSSkipVerify TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, getDeregisterCriticalServiceAfter) {

	

	RETURN_MEMBER(getThis(), "deregisterCriticalServiceAfter");

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, setDeregisterCriticalServiceAfter) {

	zval *deregisterCriticalServiceAfter;

	zephir_fetch_params(0, 1, 0, &deregisterCriticalServiceAfter);



	zephir_update_property_this(getThis(), SL("deregisterCriticalServiceAfter"), deregisterCriticalServiceAfter TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceCheck, jsonSerialize) {

	zval *out = NULL, *_0, *_2, *_4, *_6, *_8, *_10, *_12, *_14, *_16, *_18, *_20, *_22, *_24, *_26, *_28, *_1$$3, *_3$$4, *_5$$5, *_7$$6, *_9$$7, *_11$$8, *_13$$9, *_15$$10, *_17$$11, *_19$$12, *_21$$13, *_23$$14, *_25$$15, *_27$$16, *_29$$17;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(out);
	array_init(out);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("args"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_0))) {
		_1$$3 = zephir_fetch_nproperty_this(this_ptr, SL("args"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Args"), &_1$$3, PH_COPY | PH_SEPARATE);
	}
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("script"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_2))) {
		_3$$4 = zephir_fetch_nproperty_this(this_ptr, SL("script"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Script"), &_3$$4, PH_COPY | PH_SEPARATE);
	}
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("dockerContainerId"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_4))) {
		_5$$5 = zephir_fetch_nproperty_this(this_ptr, SL("dockerContainerId"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("DockerContainerID"), &_5$$5, PH_COPY | PH_SEPARATE);
	}
	_6 = zephir_fetch_nproperty_this(this_ptr, SL("shell"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_6))) {
		_7$$6 = zephir_fetch_nproperty_this(this_ptr, SL("shell"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Shell"), &_7$$6, PH_COPY | PH_SEPARATE);
	}
	_8 = zephir_fetch_nproperty_this(this_ptr, SL("interval"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_8))) {
		_9$$7 = zephir_fetch_nproperty_this(this_ptr, SL("interval"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Interval"), &_9$$7, PH_COPY | PH_SEPARATE);
	}
	_10 = zephir_fetch_nproperty_this(this_ptr, SL("timeout"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_10))) {
		_11$$8 = zephir_fetch_nproperty_this(this_ptr, SL("timeout"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Timeout"), &_11$$8, PH_COPY | PH_SEPARATE);
	}
	_12 = zephir_fetch_nproperty_this(this_ptr, SL("ttl"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_12))) {
		_13$$9 = zephir_fetch_nproperty_this(this_ptr, SL("ttl"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("TTL"), &_13$$9, PH_COPY | PH_SEPARATE);
	}
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("http"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_14))) {
		_15$$10 = zephir_fetch_nproperty_this(this_ptr, SL("http"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("HTTP"), &_15$$10, PH_COPY | PH_SEPARATE);
	}
	_16 = zephir_fetch_nproperty_this(this_ptr, SL("header"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_16))) {
		_17$$11 = zephir_fetch_nproperty_this(this_ptr, SL("header"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Header"), &_17$$11, PH_COPY | PH_SEPARATE);
	}
	_18 = zephir_fetch_nproperty_this(this_ptr, SL("method"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_18))) {
		_19$$12 = zephir_fetch_nproperty_this(this_ptr, SL("method"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Method"), &_19$$12, PH_COPY | PH_SEPARATE);
	}
	_20 = zephir_fetch_nproperty_this(this_ptr, SL("tcp"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_20))) {
		_21$$13 = zephir_fetch_nproperty_this(this_ptr, SL("tcp"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("TCP"), &_21$$13, PH_COPY | PH_SEPARATE);
	}
	_22 = zephir_fetch_nproperty_this(this_ptr, SL("status"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_22))) {
		_23$$14 = zephir_fetch_nproperty_this(this_ptr, SL("status"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Status"), &_23$$14, PH_COPY | PH_SEPARATE);
	}
	_24 = zephir_fetch_nproperty_this(this_ptr, SL("notes"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_24))) {
		_25$$15 = zephir_fetch_nproperty_this(this_ptr, SL("notes"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Notes"), &_25$$15, PH_COPY | PH_SEPARATE);
	}
	_26 = zephir_fetch_nproperty_this(this_ptr, SL("TLSSkipVerify"), PH_NOISY_CC);
	if (ZEPHIR_IS_TRUE(_26)) {
		_27$$16 = zephir_fetch_nproperty_this(this_ptr, SL("TLSSkipVerify"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("TLSSkipVerify"), &_27$$16, PH_COPY | PH_SEPARATE);
	}
	_28 = zephir_fetch_nproperty_this(this_ptr, SL("deregisterCriticalServiceAfter"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_28))) {
		_29$$17 = zephir_fetch_nproperty_this(this_ptr, SL("deregisterCriticalServiceAfter"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("DeregisterCriticalServiceAfter"), &_29$$17, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(out);

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_ServiceCheck(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_2, *_1$$3, *_3$$4;

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("header"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("header"), _1$$3 TSRMLS_CC);
		}
		_2 = zephir_fetch_nproperty_this(this_ptr, SL("args"), PH_NOISY_CC);
		if (Z_TYPE_P(_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(_3$$4);
			array_init(_3$$4);
			zephir_update_property_this(getThis(), SL("args"), _3$$4 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

