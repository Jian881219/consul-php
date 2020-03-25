
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "id");

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setId) {

	zval *id, id_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&id_sub);

	zephir_fetch_params(0, 1, 0, &id);



	zephir_update_property_zval(this_ptr, SL("id"), id);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getName) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setName) {

	zval *name, name_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_zval(this_ptr, SL("name"), name);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getNotes) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "notes");

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setNotes) {

	zval *notes, notes_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&notes_sub);

	zephir_fetch_params(0, 1, 0, &notes);



	zephir_update_property_zval(this_ptr, SL("notes"), notes);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, getServiceId) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "serviceId");

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, setServiceId) {

	zval *serviceId, serviceId_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&serviceId_sub);

	zephir_fetch_params(0, 1, 0, &serviceId);



	zephir_update_property_zval(this_ptr, SL("serviceId"), serviceId);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_CheckRegistration, jsonSerialize) {

	zval out, _0, _2, _4, _6, _8, _10, _12, _14, _16, _18, _20, _22, _24, _26, _28, _30, _32, _34, _36, _1$$3, _3$$4, _5$$5, _7$$6, _9$$7, _11$$8, _13$$9, _15$$10, _17$$11, _19$$12, _21$$13, _23$$14, _25$$15, _27$$16, _29$$17, _31$$18, _33$$19, _35$$20, _37$$21;
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
	ZVAL_UNDEF(&_30);
	ZVAL_UNDEF(&_32);
	ZVAL_UNDEF(&_34);
	ZVAL_UNDEF(&_36);
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
	ZVAL_UNDEF(&_31$$18);
	ZVAL_UNDEF(&_33$$19);
	ZVAL_UNDEF(&_35$$20);
	ZVAL_UNDEF(&_37$$21);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	zephir_read_property(&_0, this_ptr, SL("id"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_0))) {
		zephir_read_property(&_1$$3, this_ptr, SL("id"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("ID"), &_1$$3, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_2, this_ptr, SL("name"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_2))) {
		zephir_read_property(&_3$$4, this_ptr, SL("name"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Name"), &_3$$4, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_4, this_ptr, SL("notes"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_4))) {
		zephir_read_property(&_5$$5, this_ptr, SL("notes"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Notes"), &_5$$5, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_6, this_ptr, SL("serviceId"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_6))) {
		zephir_read_property(&_7$$6, this_ptr, SL("serviceId"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("ServiceID"), &_7$$6, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_8, this_ptr, SL("args"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_8))) {
		zephir_read_property(&_9$$7, this_ptr, SL("args"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Args"), &_9$$7, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_10, this_ptr, SL("script"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_10))) {
		zephir_read_property(&_11$$8, this_ptr, SL("script"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Script"), &_11$$8, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_12, this_ptr, SL("dockerContainerId"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_12))) {
		zephir_read_property(&_13$$9, this_ptr, SL("dockerContainerId"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("DockerContainerID"), &_13$$9, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_14, this_ptr, SL("shell"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_14))) {
		zephir_read_property(&_15$$10, this_ptr, SL("shell"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Shell"), &_15$$10, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_16, this_ptr, SL("interval"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_16))) {
		zephir_read_property(&_17$$11, this_ptr, SL("interval"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Interval"), &_17$$11, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_18, this_ptr, SL("timeout"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_18))) {
		zephir_read_property(&_19$$12, this_ptr, SL("timeout"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Timeout"), &_19$$12, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_20, this_ptr, SL("ttl"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_20))) {
		zephir_read_property(&_21$$13, this_ptr, SL("ttl"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("TTL"), &_21$$13, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_22, this_ptr, SL("http"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_22))) {
		zephir_read_property(&_23$$14, this_ptr, SL("http"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("HTTP"), &_23$$14, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_24, this_ptr, SL("header"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_24))) {
		zephir_read_property(&_25$$15, this_ptr, SL("header"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Header"), &_25$$15, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_26, this_ptr, SL("method"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_26))) {
		zephir_read_property(&_27$$16, this_ptr, SL("method"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Method"), &_27$$16, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_28, this_ptr, SL("tcp"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_28))) {
		zephir_read_property(&_29$$17, this_ptr, SL("tcp"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("TCP"), &_29$$17, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_30, this_ptr, SL("status"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_30))) {
		zephir_read_property(&_31$$18, this_ptr, SL("status"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Status"), &_31$$18, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_32, this_ptr, SL("notes"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_32))) {
		zephir_read_property(&_33$$19, this_ptr, SL("notes"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Notes"), &_33$$19, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_34, this_ptr, SL("TLSSkipVerify"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_TRUE(&_34)) {
		zephir_read_property(&_35$$20, this_ptr, SL("TLSSkipVerify"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("TLSSkipVerify"), &_35$$20, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_36, this_ptr, SL("deregisterCriticalServiceAfter"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_36))) {
		zephir_read_property(&_37$$21, this_ptr, SL("deregisterCriticalServiceAfter"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("DeregisterCriticalServiceAfter"), &_37$$21, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(&out);

}

