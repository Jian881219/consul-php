
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


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_GaugeValue) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, GaugeValue, consulate, api_agent_gaugevalue, consulate_model_ce, consulate_api_agent_gaugevalue_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_gaugevalue_ce, SL("name"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_double(consulate_api_agent_gaugevalue_ce, SL("value"), 0.0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_gaugevalue_ce, SL("labels"), ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_gaugevalue_ce->create_object = zephir_init_properties_Consulate_Api_Agent_GaugeValue;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, getName) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, setName) {

	zval *name, name_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_zval(this_ptr, SL("name"), name);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, getValue) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "value");

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, setValue) {

	zval *value, value_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&value_sub);

	zephir_fetch_params(0, 1, 0, &value);



	zephir_update_property_zval(this_ptr, SL("value"), value);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, getLabels) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "labels");

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, setLabels) {

	zval *labels, labels_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&labels_sub);

	zephir_fetch_params(0, 1, 0, &labels);



	zephir_update_property_zval(this_ptr, SL("labels"), labels);
	RETURN_THISW();

}

zend_object *zephir_init_properties_Consulate_Api_Agent_GaugeValue(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("labels"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("labels"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

