
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

	

	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, setName) {

	zval *name;

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_this(getThis(), SL("name"), name TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, getValue) {

	

	RETURN_MEMBER(getThis(), "value");

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, setValue) {

	zval *value;

	zephir_fetch_params(0, 1, 0, &value);



	zephir_update_property_this(getThis(), SL("value"), value TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, getLabels) {

	

	RETURN_MEMBER(getThis(), "labels");

}

PHP_METHOD(Consulate_Api_Agent_GaugeValue, setLabels) {

	zval *labels;

	zephir_fetch_params(0, 1, 0, &labels);



	zephir_update_property_this(getThis(), SL("labels"), labels TSRMLS_CC);
	RETURN_THISW();

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_GaugeValue(zend_class_entry *class_type TSRMLS_DC) {

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("labels"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("labels"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

