
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


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_PointValue) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, PointValue, consulate, api_agent_pointvalue, consulate_model_ce, consulate_api_agent_pointvalue_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_pointvalue_ce, SL("name"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_pointvalue_ce, SL("points"), ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_pointvalue_ce->create_object = zephir_init_properties_Consulate_Api_Agent_PointValue;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_PointValue, getName) {

	

	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_PointValue, setName) {

	zval *name;

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_this(getThis(), SL("name"), name TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_PointValue, getPoints) {

	

	RETURN_MEMBER(getThis(), "points");

}

PHP_METHOD(Consulate_Api_Agent_PointValue, setPoints) {

	zval *points;

	zephir_fetch_params(0, 1, 0, &points);



	zephir_update_property_this(getThis(), SL("points"), points TSRMLS_CC);
	RETURN_THISW();

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_PointValue(zend_class_entry *class_type TSRMLS_DC) {

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("points"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("points"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

