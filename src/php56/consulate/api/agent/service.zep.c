
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


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_Service) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, Service, consulate, api_agent_service, consulate_model_ce, consulate_api_agent_service_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_service_ce, SL("iD"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_service_ce, SL("service"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_service_ce, SL("tags"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_service_ce, SL("port"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_service_ce, SL("address"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_api_agent_service_ce, SL("enableTagOverride"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_service_ce, SL("createIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_service_ce, SL("modifyIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_service_ce->create_object = zephir_init_properties_Consulate_Api_Agent_Service;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_Service, getID) {

	

	RETURN_MEMBER(getThis(), "iD");

}

PHP_METHOD(Consulate_Api_Agent_Service, setID) {

	zval *iD;

	zephir_fetch_params(0, 1, 0, &iD);



	zephir_update_property_this(getThis(), SL("iD"), iD TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getService) {

	

	RETURN_MEMBER(getThis(), "service");

}

PHP_METHOD(Consulate_Api_Agent_Service, setService) {

	zval *service;

	zephir_fetch_params(0, 1, 0, &service);



	zephir_update_property_this(getThis(), SL("service"), service TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getTags) {

	

	RETURN_MEMBER(getThis(), "tags");

}

PHP_METHOD(Consulate_Api_Agent_Service, setTags) {

	zval *tags;

	zephir_fetch_params(0, 1, 0, &tags);



	zephir_update_property_this(getThis(), SL("tags"), tags TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getPort) {

	

	RETURN_MEMBER(getThis(), "port");

}

PHP_METHOD(Consulate_Api_Agent_Service, setPort) {

	zval *port;

	zephir_fetch_params(0, 1, 0, &port);



	zephir_update_property_this(getThis(), SL("port"), port TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getAddress) {

	

	RETURN_MEMBER(getThis(), "address");

}

PHP_METHOD(Consulate_Api_Agent_Service, setAddress) {

	zval *address;

	zephir_fetch_params(0, 1, 0, &address);



	zephir_update_property_this(getThis(), SL("address"), address TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getEnableTagOverride) {

	

	RETURN_MEMBER(getThis(), "enableTagOverride");

}

PHP_METHOD(Consulate_Api_Agent_Service, setEnableTagOverride) {

	zval *enableTagOverride;

	zephir_fetch_params(0, 1, 0, &enableTagOverride);



	zephir_update_property_this(getThis(), SL("enableTagOverride"), enableTagOverride TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getCreateIndex) {

	

	RETURN_MEMBER(getThis(), "createIndex");

}

PHP_METHOD(Consulate_Api_Agent_Service, setCreateIndex) {

	zval *createIndex;

	zephir_fetch_params(0, 1, 0, &createIndex);



	zephir_update_property_this(getThis(), SL("createIndex"), createIndex TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getModifyIndex) {

	

	RETURN_MEMBER(getThis(), "modifyIndex");

}

PHP_METHOD(Consulate_Api_Agent_Service, setModifyIndex) {

	zval *modifyIndex;

	zephir_fetch_params(0, 1, 0, &modifyIndex);



	zephir_update_property_this(getThis(), SL("modifyIndex"), modifyIndex TSRMLS_CC);
	RETURN_THISW();

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_Service(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_1$$3;

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("tags"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("tags"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

