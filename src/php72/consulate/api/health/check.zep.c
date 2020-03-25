
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


ZEPHIR_INIT_CLASS(Consulate_Api_Health_Check) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Health, Check, consulate, api_health_check, consulate_model_ce, consulate_api_health_check_method_entry, 0);

	zend_declare_property_string(consulate_api_health_check_ce, SL("node"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_health_check_ce, SL("checkID"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_health_check_ce, SL("name"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_health_check_ce, SL("status"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_health_check_ce, SL("notes"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_health_check_ce, SL("output"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_health_check_ce, SL("serviceID"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_health_check_ce, SL("serviceName"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_health_check_ce, SL("serviceTags"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_health_check_ce, SL("createIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_health_check_ce, SL("modifyIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_health_check_ce->create_object = zephir_init_properties_Consulate_Api_Health_Check;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Health_Check, getNode) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "node");

}

PHP_METHOD(Consulate_Api_Health_Check, setNode) {

	zval *node, node_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&node_sub);

	zephir_fetch_params(0, 1, 0, &node);



	zephir_update_property_zval(this_ptr, SL("node"), node);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getCheckID) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "checkID");

}

PHP_METHOD(Consulate_Api_Health_Check, setCheckID) {

	zval *checkID, checkID_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&checkID_sub);

	zephir_fetch_params(0, 1, 0, &checkID);



	zephir_update_property_zval(this_ptr, SL("checkID"), checkID);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getName) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Health_Check, setName) {

	zval *name, name_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_zval(this_ptr, SL("name"), name);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getStatus) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "status");

}

PHP_METHOD(Consulate_Api_Health_Check, setStatus) {

	zval *status, status_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&status_sub);

	zephir_fetch_params(0, 1, 0, &status);



	zephir_update_property_zval(this_ptr, SL("status"), status);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getNotes) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "notes");

}

PHP_METHOD(Consulate_Api_Health_Check, setNotes) {

	zval *notes, notes_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&notes_sub);

	zephir_fetch_params(0, 1, 0, &notes);



	zephir_update_property_zval(this_ptr, SL("notes"), notes);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getOutput) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "output");

}

PHP_METHOD(Consulate_Api_Health_Check, setOutput) {

	zval *output, output_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&output_sub);

	zephir_fetch_params(0, 1, 0, &output);



	zephir_update_property_zval(this_ptr, SL("output"), output);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getServiceID) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "serviceID");

}

PHP_METHOD(Consulate_Api_Health_Check, setServiceID) {

	zval *serviceID, serviceID_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&serviceID_sub);

	zephir_fetch_params(0, 1, 0, &serviceID);



	zephir_update_property_zval(this_ptr, SL("serviceID"), serviceID);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getServiceName) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "serviceName");

}

PHP_METHOD(Consulate_Api_Health_Check, setServiceName) {

	zval *serviceName, serviceName_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&serviceName_sub);

	zephir_fetch_params(0, 1, 0, &serviceName);



	zephir_update_property_zval(this_ptr, SL("serviceName"), serviceName);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getServiceTags) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "serviceTags");

}

PHP_METHOD(Consulate_Api_Health_Check, setServiceTags) {

	zval *serviceTags, serviceTags_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&serviceTags_sub);

	zephir_fetch_params(0, 1, 0, &serviceTags);



	zephir_update_property_zval(this_ptr, SL("serviceTags"), serviceTags);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getCreateIndex) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "createIndex");

}

PHP_METHOD(Consulate_Api_Health_Check, setCreateIndex) {

	zval *createIndex, createIndex_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&createIndex_sub);

	zephir_fetch_params(0, 1, 0, &createIndex);



	zephir_update_property_zval(this_ptr, SL("createIndex"), createIndex);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Health_Check, getModifyIndex) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "modifyIndex");

}

PHP_METHOD(Consulate_Api_Health_Check, setModifyIndex) {

	zval *modifyIndex, modifyIndex_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&modifyIndex_sub);

	zephir_fetch_params(0, 1, 0, &modifyIndex);



	zephir_update_property_zval(this_ptr, SL("modifyIndex"), modifyIndex);
	RETURN_THISW();

}

zend_object *zephir_init_properties_Consulate_Api_Health_Check(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("serviceTags"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("serviceTags"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

