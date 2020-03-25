
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


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_Check) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, Check, consulate, api_agent_check, consulate_model_ce, consulate_api_agent_check_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_check_ce, SL("node"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_check_ce, SL("checkID"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_check_ce, SL("name"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_check_ce, SL("status"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_check_ce, SL("notes"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_check_ce, SL("output"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_check_ce, SL("serviceID"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_check_ce, SL("serviceName"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_check_ce, SL("serviceTags"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_check_ce, SL("createIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_check_ce, SL("modifyIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_check_ce->create_object = zephir_init_properties_Consulate_Api_Agent_Check;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_Check, getNode) {

	

	RETURN_MEMBER(getThis(), "node");

}

PHP_METHOD(Consulate_Api_Agent_Check, setNode) {

	zval *node;

	zephir_fetch_params(0, 1, 0, &node);



	zephir_update_property_this(getThis(), SL("node"), node TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getCheckID) {

	

	RETURN_MEMBER(getThis(), "checkID");

}

PHP_METHOD(Consulate_Api_Agent_Check, setCheckID) {

	zval *checkID;

	zephir_fetch_params(0, 1, 0, &checkID);



	zephir_update_property_this(getThis(), SL("checkID"), checkID TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getName) {

	

	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_Check, setName) {

	zval *name;

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_this(getThis(), SL("name"), name TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getStatus) {

	

	RETURN_MEMBER(getThis(), "status");

}

PHP_METHOD(Consulate_Api_Agent_Check, setStatus) {

	zval *status;

	zephir_fetch_params(0, 1, 0, &status);



	zephir_update_property_this(getThis(), SL("status"), status TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getNotes) {

	

	RETURN_MEMBER(getThis(), "notes");

}

PHP_METHOD(Consulate_Api_Agent_Check, setNotes) {

	zval *notes;

	zephir_fetch_params(0, 1, 0, &notes);



	zephir_update_property_this(getThis(), SL("notes"), notes TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getOutput) {

	

	RETURN_MEMBER(getThis(), "output");

}

PHP_METHOD(Consulate_Api_Agent_Check, setOutput) {

	zval *output;

	zephir_fetch_params(0, 1, 0, &output);



	zephir_update_property_this(getThis(), SL("output"), output TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getServiceID) {

	

	RETURN_MEMBER(getThis(), "serviceID");

}

PHP_METHOD(Consulate_Api_Agent_Check, setServiceID) {

	zval *serviceID;

	zephir_fetch_params(0, 1, 0, &serviceID);



	zephir_update_property_this(getThis(), SL("serviceID"), serviceID TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getServiceName) {

	

	RETURN_MEMBER(getThis(), "serviceName");

}

PHP_METHOD(Consulate_Api_Agent_Check, setServiceName) {

	zval *serviceName;

	zephir_fetch_params(0, 1, 0, &serviceName);



	zephir_update_property_this(getThis(), SL("serviceName"), serviceName TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getServiceTags) {

	

	RETURN_MEMBER(getThis(), "serviceTags");

}

PHP_METHOD(Consulate_Api_Agent_Check, setServiceTags) {

	zval *serviceTags;

	zephir_fetch_params(0, 1, 0, &serviceTags);



	zephir_update_property_this(getThis(), SL("serviceTags"), serviceTags TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getCreateIndex) {

	

	RETURN_MEMBER(getThis(), "createIndex");

}

PHP_METHOD(Consulate_Api_Agent_Check, setCreateIndex) {

	zval *createIndex;

	zephir_fetch_params(0, 1, 0, &createIndex);



	zephir_update_property_this(getThis(), SL("createIndex"), createIndex TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Check, getModifyIndex) {

	

	RETURN_MEMBER(getThis(), "modifyIndex");

}

PHP_METHOD(Consulate_Api_Agent_Check, setModifyIndex) {

	zval *modifyIndex;

	zephir_fetch_params(0, 1, 0, &modifyIndex);



	zephir_update_property_this(getThis(), SL("modifyIndex"), modifyIndex TSRMLS_CC);
	RETURN_THISW();

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_Check(zend_class_entry *class_type TSRMLS_DC) {

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("serviceTags"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("serviceTags"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

