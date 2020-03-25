
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "id");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setId) {

	zval *id, id_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&id_sub);

	zephir_fetch_params(0, 1, 0, &id);



	zephir_update_property_zval(this_ptr, SL("id"), id);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getName) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setName) {

	zval *name, name_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_zval(this_ptr, SL("name"), name);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getTags) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "tags");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setTags) {

	zval *tags, tags_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&tags_sub);

	zephir_fetch_params(0, 1, 0, &tags);



	zephir_update_property_zval(this_ptr, SL("tags"), tags);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getPort) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "port");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setPort) {

	zval *port, port_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&port_sub);

	zephir_fetch_params(0, 1, 0, &port);



	zephir_update_property_zval(this_ptr, SL("port"), port);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getAddress) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "address");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setAddress) {

	zval *address, address_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&address_sub);

	zephir_fetch_params(0, 1, 0, &address);



	zephir_update_property_zval(this_ptr, SL("address"), address);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getEnableTagOverride) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "enableTagOverride");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setEnableTagOverride) {

	zval *enableTagOverride, enableTagOverride_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&enableTagOverride_sub);

	zephir_fetch_params(0, 1, 0, &enableTagOverride);



	zephir_update_property_zval(this_ptr, SL("enableTagOverride"), enableTagOverride);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getCheck) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "check");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, getChecks) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "checks");

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, __construct) {

	zend_string *_13$$4;
	zend_ulong _12$$4;
	zend_bool _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *data_param = NULL, idx, item, _1, _3, _6, _7, _8, _4$$3, _5$$3, _9$$4, *_10$$4, _11$$4, _14$$6, _15$$8;
	zval data;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&idx);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_14$$6);
	ZVAL_UNDEF(&_15$$8);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &data_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(&data);
		array_init(&data);
	} else {
		zephir_get_arrval(&data, data_param);
	}


	ZEPHIR_CALL_PARENT(NULL, consulate_api_agent_serviceregistration_ce, getThis(), "__construct", &_0, 0, &data);
	zephir_check_call_status();
	zephir_read_property(&_1, this_ptr, SL("check"), PH_NOISY_CC | PH_READONLY);
	_2 = Z_TYPE_P(&_1) != IS_NULL;
	if (_2) {
		ZEPHIR_OBS_VAR(&_3);
		zephir_read_property(&_3, this_ptr, SL("check"), PH_NOISY_CC);
		_2 = !(zephir_instance_of_ev(&_3, consulate_api_agent_servicecheck_ce TSRMLS_CC));
	}
	if (_2) {
		ZEPHIR_INIT_VAR(&_4$$3);
		object_init_ex(&_4$$3, consulate_api_agent_servicecheck_ce);
		zephir_read_property(&_5$$3, this_ptr, SL("check"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(NULL, &_4$$3, "__construct", NULL, 19, &_5$$3);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("check"), &_4$$3);
	}
	zephir_read_property(&_6, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(&_7, "array_filter", NULL, 2, &_6);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("checks"), &_7);
	zephir_read_property(&_8, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_count_int(&_8 TSRMLS_CC) > 0) {
		zephir_read_property(&_9$$4, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
		zephir_is_iterable(&_9$$4, 0, "consulate/api/agent/serviceregistration.zep", 51);
		if (Z_TYPE_P(&_9$$4) == IS_ARRAY) {
			ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_9$$4), _12$$4, _13$$4, _10$$4)
			{
				ZEPHIR_INIT_NVAR(&idx);
				if (_13$$4 != NULL) { 
					ZVAL_STR_COPY(&idx, _13$$4);
				} else {
					ZVAL_LONG(&idx, _12$$4);
				}
				ZEPHIR_INIT_NVAR(&item);
				ZVAL_COPY(&item, _10$$4);
				if (!(zephir_instance_of_ev(&item, consulate_api_agent_servicecheck_ce TSRMLS_CC))) {
					ZEPHIR_INIT_NVAR(&_14$$6);
					object_init_ex(&_14$$6, consulate_api_agent_servicecheck_ce);
					ZEPHIR_CALL_METHOD(NULL, &_14$$6, "__construct", NULL, 19, &item);
					zephir_check_call_status();
					zephir_update_property_array(this_ptr, SL("checks"), &idx, &_14$$6);
					ZEPHIR_INIT_NVAR(&_14$$6);
				}
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &_9$$4, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_11$$4, &_9$$4, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_11$$4)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&idx, &_9$$4, "key", NULL, 0);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&item, &_9$$4, "current", NULL, 0);
				zephir_check_call_status();
					if (!(zephir_instance_of_ev(&item, consulate_api_agent_servicecheck_ce TSRMLS_CC))) {
						ZEPHIR_INIT_NVAR(&_15$$8);
						object_init_ex(&_15$$8, consulate_api_agent_servicecheck_ce);
						ZEPHIR_CALL_METHOD(NULL, &_15$$8, "__construct", NULL, 19, &item);
						zephir_check_call_status();
						zephir_update_property_array(this_ptr, SL("checks"), &idx, &_15$$8);
						ZEPHIR_INIT_NVAR(&_15$$8);
					}
				ZEPHIR_CALL_METHOD(NULL, &_9$$4, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&item);
		ZEPHIR_INIT_NVAR(&idx);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setCheck) {

	zval *check, check_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&check_sub);

	zephir_fetch_params(0, 1, 0, &check);



	zephir_update_property_zval(this_ptr, SL("check"), check);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, setChecks) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *checks_param = NULL, check, _0, *_1$$3, _2$$3;
	zval checks;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&checks);
	ZVAL_UNDEF(&check);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &checks_param);

	zephir_get_arrval(&checks, checks_param);


	if (zephir_fast_count_int(&checks TSRMLS_CC) > 0) {
		zephir_is_iterable(&checks, 0, "consulate/api/agent/serviceregistration.zep", 67);
		if (Z_TYPE_P(&checks) == IS_ARRAY) {
			ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&checks), _1$$3)
			{
				ZEPHIR_INIT_NVAR(&check);
				ZVAL_COPY(&check, _1$$3);
				if (zephir_instance_of_ev(&check, consulate_api_agent_servicecheck_ce TSRMLS_CC)) {
					zephir_update_property_array_append(this_ptr, SL("checks"), &check);
				}
			} ZEND_HASH_FOREACH_END();
		} else {
			ZEPHIR_CALL_METHOD(NULL, &checks, "rewind", NULL, 0);
			zephir_check_call_status();
			while (1) {
				ZEPHIR_CALL_METHOD(&_2$$3, &checks, "valid", NULL, 0);
				zephir_check_call_status();
				if (!zend_is_true(&_2$$3)) {
					break;
				}
				ZEPHIR_CALL_METHOD(&check, &checks, "current", NULL, 0);
				zephir_check_call_status();
					if (zephir_instance_of_ev(&check, consulate_api_agent_servicecheck_ce TSRMLS_CC)) {
						zephir_update_property_array_append(this_ptr, SL("checks"), &check);
					}
				ZEPHIR_CALL_METHOD(NULL, &checks, "next", NULL, 0);
				zephir_check_call_status();
			}
		}
		ZEPHIR_INIT_NVAR(&check);
	}
	RETURN_THIS();

}

PHP_METHOD(Consulate_Api_Agent_ServiceRegistration, jsonSerialize) {

	zval out, _0, _2, _4, _6, _8, _10, _12, _14, _1$$3, _3$$4, _5$$5, _7$$6, _9$$7, _11$$8, _13$$9, _15$$10;
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
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_5$$5);
	ZVAL_UNDEF(&_7$$6);
	ZVAL_UNDEF(&_9$$7);
	ZVAL_UNDEF(&_11$$8);
	ZVAL_UNDEF(&_13$$9);
	ZVAL_UNDEF(&_15$$10);

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
	zephir_read_property(&_4, this_ptr, SL("tags"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_4))) {
		zephir_read_property(&_5$$5, this_ptr, SL("tags"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Tags"), &_5$$5, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_6, this_ptr, SL("port"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_GT_LONG(&_6, 0)) {
		zephir_read_property(&_7$$6, this_ptr, SL("port"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Port"), &_7$$6, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_8, this_ptr, SL("address"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_8))) {
		zephir_read_property(&_9$$7, this_ptr, SL("address"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Address"), &_9$$7, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_10, this_ptr, SL("enableTagOverride"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_TRUE(&_10)) {
		zephir_read_property(&_11$$8, this_ptr, SL("enableTagOverride"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("EnableTagOverride"), &_11$$8, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_12, this_ptr, SL("check"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_12))) {
		zephir_read_property(&_13$$9, this_ptr, SL("check"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Check"), &_13$$9, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_14, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
	if (!(ZEPHIR_IS_EMPTY(&_14))) {
		zephir_read_property(&_15$$10, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
		zephir_array_update_string(&out, SL("Checks"), &_15$$10, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(&out);

}

zend_object *zephir_init_properties_Consulate_Api_Agent_ServiceRegistration(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _2, _1$$3, _3$$4;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_3$$4);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("checks"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("checks"), &_1$$3);
		}
		zephir_read_property(&_2, this_ptr, SL("tags"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_3$$4);
			array_init(&_3$$4);
			zephir_update_property_zval(this_ptr, SL("tags"), &_3$$4);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

