
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "iD");

}

PHP_METHOD(Consulate_Api_Agent_Service, setID) {

	zval *iD, iD_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&iD_sub);

	zephir_fetch_params(0, 1, 0, &iD);



	zephir_update_property_zval(this_ptr, SL("iD"), iD);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getService) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "service");

}

PHP_METHOD(Consulate_Api_Agent_Service, setService) {

	zval *service, service_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&service_sub);

	zephir_fetch_params(0, 1, 0, &service);



	zephir_update_property_zval(this_ptr, SL("service"), service);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getTags) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "tags");

}

PHP_METHOD(Consulate_Api_Agent_Service, setTags) {

	zval *tags, tags_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&tags_sub);

	zephir_fetch_params(0, 1, 0, &tags);



	zephir_update_property_zval(this_ptr, SL("tags"), tags);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getPort) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "port");

}

PHP_METHOD(Consulate_Api_Agent_Service, setPort) {

	zval *port, port_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&port_sub);

	zephir_fetch_params(0, 1, 0, &port);



	zephir_update_property_zval(this_ptr, SL("port"), port);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getAddress) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "address");

}

PHP_METHOD(Consulate_Api_Agent_Service, setAddress) {

	zval *address, address_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&address_sub);

	zephir_fetch_params(0, 1, 0, &address);



	zephir_update_property_zval(this_ptr, SL("address"), address);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getEnableTagOverride) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "enableTagOverride");

}

PHP_METHOD(Consulate_Api_Agent_Service, setEnableTagOverride) {

	zval *enableTagOverride, enableTagOverride_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&enableTagOverride_sub);

	zephir_fetch_params(0, 1, 0, &enableTagOverride);



	zephir_update_property_zval(this_ptr, SL("enableTagOverride"), enableTagOverride);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getCreateIndex) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "createIndex");

}

PHP_METHOD(Consulate_Api_Agent_Service, setCreateIndex) {

	zval *createIndex, createIndex_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&createIndex_sub);

	zephir_fetch_params(0, 1, 0, &createIndex);



	zephir_update_property_zval(this_ptr, SL("createIndex"), createIndex);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Service, getModifyIndex) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "modifyIndex");

}

PHP_METHOD(Consulate_Api_Agent_Service, setModifyIndex) {

	zval *modifyIndex, modifyIndex_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&modifyIndex_sub);

	zephir_fetch_params(0, 1, 0, &modifyIndex);



	zephir_update_property_zval(this_ptr, SL("modifyIndex"), modifyIndex);
	RETURN_THISW();

}

zend_object *zephir_init_properties_Consulate_Api_Agent_Service(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("tags"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("tags"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

