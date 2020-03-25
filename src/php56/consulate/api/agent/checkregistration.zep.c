
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


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_CheckRegistration) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, CheckRegistration, consulate, api_agent_checkregistration, consulate_api_agent_servicecheck_ce, consulate_api_agent_checkregistration_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_checkregistration_ce, SL("id"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_checkregistration_ce, SL("name"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_checkregistration_ce, SL("notes"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_checkregistration_ce, SL("serviceId"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getId) {

	

	RETURN_MEMBER(getThis(), "id");

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setId) {

	zval *id;

	zephir_fetch_params(0, 1, 0, &id);



	zephir_update_property_this(getThis(), SL("id"), id TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getName) {

	

	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setName) {

	zval *name;

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_this(getThis(), SL("name"), name TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getNotes) {

	

	RETURN_MEMBER(getThis(), "notes");

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setNotes) {

	zval *notes;

	zephir_fetch_params(0, 1, 0, &notes);



	zephir_update_property_this(getThis(), SL("notes"), notes TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getServiceId) {

	

	RETURN_MEMBER(getThis(), "serviceId");

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setServiceId) {

	zval *serviceId;

	zephir_fetch_params(0, 1, 0, &serviceId);



	zephir_update_property_this(getThis(), SL("serviceId"), serviceId TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, jsonSerialize) {

	zval *out = NULL, *_0, *_2, *_4, *_6, *_8, *_10, *_12, *_14, *_16, *_18, *_20, *_22, *_24, *_26, *_28, *_30, *_32, *_34, *_36, *_1$$3, *_3$$4, *_5$$5, *_7$$6, *_9$$7, *_11$$8, *_13$$9, *_15$$10, *_17$$11, *_19$$12, *_21$$13, *_23$$14, *_25$$15, *_27$$16, *_29$$17, *_31$$18, *_33$$19, *_35$$20, *_37$$21;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(out);
	array_init(out);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("id"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_0))) {
		_1$$3 = zephir_fetch_nproperty_this(this_ptr, SL("id"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("ID"), &_1$$3, PH_COPY | PH_SEPARATE);
	}
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("name"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_2))) {
		_3$$4 = zephir_fetch_nproperty_this(this_ptr, SL("name"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Name"), &_3$$4, PH_COPY | PH_SEPARATE);
	}
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("notes"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_4))) {
		_5$$5 = zephir_fetch_nproperty_this(this_ptr, SL("notes"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Notes"), &_5$$5, PH_COPY | PH_SEPARATE);
	}
	_6 = zephir_fetch_nproperty_this(this_ptr, SL("serviceId"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_6))) {
		_7$$6 = zephir_fetch_nproperty_this(this_ptr, SL("serviceId"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("ServiceID"), &_7$$6, PH_COPY | PH_SEPARATE);
	}
	_8 = zephir_fetch_nproperty_this(this_ptr, SL("args"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_8))) {
		_9$$7 = zephir_fetch_nproperty_this(this_ptr, SL("args"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Args"), &_9$$7, PH_COPY | PH_SEPARATE);
	}
	_10 = zephir_fetch_nproperty_this(this_ptr, SL("script"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_10))) {
		_11$$8 = zephir_fetch_nproperty_this(this_ptr, SL("script"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Script"), &_11$$8, PH_COPY | PH_SEPARATE);
	}
	_12 = zephir_fetch_nproperty_this(this_ptr, SL("dockerContainerId"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_12))) {
		_13$$9 = zephir_fetch_nproperty_this(this_ptr, SL("dockerContainerId"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("DockerContainerID"), &_13$$9, PH_COPY | PH_SEPARATE);
	}
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("shell"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_14))) {
		_15$$10 = zephir_fetch_nproperty_this(this_ptr, SL("shell"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Shell"), &_15$$10, PH_COPY | PH_SEPARATE);
	}
	_16 = zephir_fetch_nproperty_this(this_ptr, SL("interval"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_16))) {
		_17$$11 = zephir_fetch_nproperty_this(this_ptr, SL("interval"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Interval"), &_17$$11, PH_COPY | PH_SEPARATE);
	}
	_18 = zephir_fetch_nproperty_this(this_ptr, SL("timeout"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_18))) {
		_19$$12 = zephir_fetch_nproperty_this(this_ptr, SL("timeout"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Timeout"), &_19$$12, PH_COPY | PH_SEPARATE);
	}
	_20 = zephir_fetch_nproperty_this(this_ptr, SL("ttl"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_20))) {
		_21$$13 = zephir_fetch_nproperty_this(this_ptr, SL("ttl"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("TTL"), &_21$$13, PH_COPY | PH_SEPARATE);
	}
	_22 = zephir_fetch_nproperty_this(this_ptr, SL("http"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_22))) {
		_23$$14 = zephir_fetch_nproperty_this(this_ptr, SL("http"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("HTTP"), &_23$$14, PH_COPY | PH_SEPARATE);
	}
	_24 = zephir_fetch_nproperty_this(this_ptr, SL("header"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_24))) {
		_25$$15 = zephir_fetch_nproperty_this(this_ptr, SL("header"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Header"), &_25$$15, PH_COPY | PH_SEPARATE);
	}
	_26 = zephir_fetch_nproperty_this(this_ptr, SL("method"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_26))) {
		_27$$16 = zephir_fetch_nproperty_this(this_ptr, SL("method"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Method"), &_27$$16, PH_COPY | PH_SEPARATE);
	}
	_28 = zephir_fetch_nproperty_this(this_ptr, SL("tcp"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_28))) {
		_29$$17 = zephir_fetch_nproperty_this(this_ptr, SL("tcp"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("TCP"), &_29$$17, PH_COPY | PH_SEPARATE);
	}
	_30 = zephir_fetch_nproperty_this(this_ptr, SL("status"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_30))) {
		_31$$18 = zephir_fetch_nproperty_this(this_ptr, SL("status"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Status"), &_31$$18, PH_COPY | PH_SEPARATE);
	}
	_32 = zephir_fetch_nproperty_this(this_ptr, SL("notes"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_32))) {
		_33$$19 = zephir_fetch_nproperty_this(this_ptr, SL("notes"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Notes"), &_33$$19, PH_COPY | PH_SEPARATE);
	}
	_34 = zephir_fetch_nproperty_this(this_ptr, SL("TLSSkipVerify"), PH_NOISY_CC);
	if (ZEPHIR_IS_TRUE(_34)) {
		_35$$20 = zephir_fetch_nproperty_this(this_ptr, SL("TLSSkipVerify"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("TLSSkipVerify"), &_35$$20, PH_COPY | PH_SEPARATE);
	}
	_36 = zephir_fetch_nproperty_this(this_ptr, SL("deregisterCriticalServiceAfter"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_36))) {
		_37$$21 = zephir_fetch_nproperty_this(this_ptr, SL("deregisterCriticalServiceAfter"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("DeregisterCriticalServiceAfter"), &_37$$21, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(out);

}

