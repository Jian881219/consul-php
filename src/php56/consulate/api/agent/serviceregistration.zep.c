
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
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_ServiceRegistration) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, ServiceRegistration, consulate, api_agent_serviceregistration, consulate_model_ce, consulate_api_agent_serviceregistration_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_serviceregistration_ce, SL("id"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_serviceregistration_ce, SL("name"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_serviceregistration_ce, SL("tags"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_serviceregistration_ce, SL("port"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_serviceregistration_ce, SL("address"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_api_agent_serviceregistration_ce, SL("enableTagOverride"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_serviceregistration_ce, SL("check"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_serviceregistration_ce, SL("checks"), ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_serviceregistration_ce->create_object = zephir_init_properties_Consulate_Api_Agent_ServiceRegistration;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getId) {

	

	RETURN_MEMBER(getThis(), "id");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setId) {

	zval *id;

	zephir_fetch_params(0, 1, 0, &id);



	zephir_update_property_this(getThis(), SL("id"), id TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getName) {

	

	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setName) {

	zval *name;

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_this(getThis(), SL("name"), name TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getTags) {

	

	RETURN_MEMBER(getThis(), "tags");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setTags) {

	zval *tags;

	zephir_fetch_params(0, 1, 0, &tags);



	zephir_update_property_this(getThis(), SL("tags"), tags TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getPort) {

	

	RETURN_MEMBER(getThis(), "port");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setPort) {

	zval *port;

	zephir_fetch_params(0, 1, 0, &port);



	zephir_update_property_this(getThis(), SL("port"), port TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getAddress) {

	

	RETURN_MEMBER(getThis(), "address");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setAddress) {

	zval *address;

	zephir_fetch_params(0, 1, 0, &address);



	zephir_update_property_this(getThis(), SL("address"), address TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getEnableTagOverride) {

	

	RETURN_MEMBER(getThis(), "enableTagOverride");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setEnableTagOverride) {

	zval *enableTagOverride;

	zephir_fetch_params(0, 1, 0, &enableTagOverride);



	zephir_update_property_this(getThis(), SL("enableTagOverride"), enableTagOverride TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getCheck) {

	

	RETURN_MEMBER(getThis(), "check");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getChecks) {

	

	RETURN_MEMBER(getThis(), "checks");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, __construct) {

	HashTable *_11$$4;
	HashPosition _10$$4;
	zend_bool _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *data_param = NULL, *idx = NULL, *item = NULL, *_1, *_3, *_6, *_7 = NULL, *_8, *_4$$3, *_5$$3, *_9$$4, **_12$$4, *_13$$6 = NULL;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &data_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(data);
		array_init(data);
	} else {
		zephir_get_arrval(data, data_param);
	}


	ZEPHIR_CALL_PARENT(NULL, consulate_api_agent_serviceregistration_ce, getThis(), "__construct", &_0, 19, data);
	zephir_check_call_status();
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("check"), PH_NOISY_CC);
	_2 = Z_TYPE_P(_1) != IS_NULL;
	if (_2) {
		ZEPHIR_OBS_VAR(_3);
		zephir_read_property_this(&_3, this_ptr, SL("check"), PH_NOISY_CC);
		_2 = !(zephir_instance_of_ev(_3, consulate_api_agent_servicecheck_ce TSRMLS_CC));
	}
	if (_2) {
		ZEPHIR_INIT_VAR(_4$$3);
		object_init_ex(_4$$3, consulate_api_agent_servicecheck_ce);
		_5$$3 = zephir_fetch_nproperty_this(this_ptr, SL("check"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(NULL, _4$$3, "__construct", NULL, 19, _5$$3);
		zephir_check_call_status();
		zephir_update_property_this(getThis(), SL("check"), _4$$3 TSRMLS_CC);
	}
	_6 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
	ZEPHIR_CALL_FUNCTION(&_7, "array_filter", NULL, 2, _6);
	zephir_check_call_status();
	zephir_update_property_this(getThis(), SL("checks"), _7 TSRMLS_CC);
	_8 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
	if (zephir_fast_count_int(_8 TSRMLS_CC) > 0) {
		_9$$4 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
		zephir_is_iterable(_9$$4, &_11$$4, &_10$$4, 0, 0, "consulate/api/agent/serviceregistration.zep", 51);
		for (
		  ; zend_hash_get_current_data_ex(_11$$4, (void**) &_12$$4, &_10$$4) == SUCCESS
		  ; zend_hash_move_forward_ex(_11$$4, &_10$$4)
		) {
			ZEPHIR_GET_HMKEY(idx, _11$$4, _10$$4);
			ZEPHIR_GET_HVALUE(item, _12$$4);
			if (!(zephir_instance_of_ev(item, consulate_api_agent_servicecheck_ce TSRMLS_CC))) {
				ZEPHIR_INIT_NVAR(_13$$6);
				object_init_ex(_13$$6, consulate_api_agent_servicecheck_ce);
				ZEPHIR_CALL_METHOD(NULL, _13$$6, "__construct", NULL, 19, item);
				zephir_check_call_status();
				zephir_update_property_array(this_ptr, SL("checks"), idx, _13$$6 TSRMLS_CC);
			}
		}
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setCheck) {

	zval *check;

	zephir_fetch_params(0, 1, 0, &check);



	zephir_update_property_this(getThis(), SL("check"), check TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setChecks) {

	HashTable *_2$$3;
	HashPosition _1$$3;
	zval *checks_param = NULL, *check = NULL, *_0 = NULL, **_3$$3;
	zval *checks = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &checks_param);

	zephir_get_arrval(checks, checks_param);


	if (zephir_fast_count_int(checks TSRMLS_CC) > 0) {
		zephir_is_iterable(checks, &_2$$3, &_1$$3, 0, 0, "consulate/api/agent/serviceregistration.zep", 67);
		for (
		  ; zend_hash_get_current_data_ex(_2$$3, (void**) &_3$$3, &_1$$3) == SUCCESS
		  ; zend_hash_move_forward_ex(_2$$3, &_1$$3)
		) {
			ZEPHIR_GET_HVALUE(check, _3$$3);
			if (zephir_instance_of_ev(check, consulate_api_agent_servicecheck_ce TSRMLS_CC)) {
				zephir_update_property_array_append(this_ptr, SL("checks"), check TSRMLS_CC);
			}
		}
	}
	RETURN_THIS();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, jsonSerialize) {

	zval *out = NULL, *_0, *_2, *_4, *_6, *_8, *_10, *_12, *_14, *_1$$3, *_3$$4, *_5$$5, *_7$$6, *_9$$7, *_11$$8, *_13$$9, *_15$$10;

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
	_4 = zephir_fetch_nproperty_this(this_ptr, SL("tags"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_4))) {
		_5$$5 = zephir_fetch_nproperty_this(this_ptr, SL("tags"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Tags"), &_5$$5, PH_COPY | PH_SEPARATE);
	}
	_6 = zephir_fetch_nproperty_this(this_ptr, SL("port"), PH_NOISY_CC);
	if (ZEPHIR_GT_LONG(_6, 0)) {
		_7$$6 = zephir_fetch_nproperty_this(this_ptr, SL("port"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Port"), &_7$$6, PH_COPY | PH_SEPARATE);
	}
	_8 = zephir_fetch_nproperty_this(this_ptr, SL("address"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_8))) {
		_9$$7 = zephir_fetch_nproperty_this(this_ptr, SL("address"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Address"), &_9$$7, PH_COPY | PH_SEPARATE);
	}
	_10 = zephir_fetch_nproperty_this(this_ptr, SL("enableTagOverride"), PH_NOISY_CC);
	if (ZEPHIR_IS_TRUE(_10)) {
		_11$$8 = zephir_fetch_nproperty_this(this_ptr, SL("enableTagOverride"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("EnableTagOverride"), &_11$$8, PH_COPY | PH_SEPARATE);
	}
	_12 = zephir_fetch_nproperty_this(this_ptr, SL("check"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_12))) {
		_13$$9 = zephir_fetch_nproperty_this(this_ptr, SL("check"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Check"), &_13$$9, PH_COPY | PH_SEPARATE);
	}
	_14 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
	if (!(ZEPHIR_IS_EMPTY(_14))) {
		_15$$10 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
		zephir_array_update_string(&out, SL("Checks"), &_15$$10, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(out);

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_ServiceRegistration(zend_class_entry *class_type TSRMLS_DC) {

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("checks"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("checks"), _1$$3 TSRMLS_CC);
		}
		_2 = zephir_fetch_nproperty_this(this_ptr, SL("tags"), PH_NOISY_CC);
		if (Z_TYPE_P(_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(_3$$4);
			array_init(_3$$4);
			zephir_update_property_this(getThis(), SL("tags"), _3$$4 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

