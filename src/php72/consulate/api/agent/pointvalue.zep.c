
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_PointValue, setName) {

	zval *name, name_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_zval(this_ptr, SL("name"), name);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_PointValue, getPoints) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "points");

}

PHP_METHOD(Consulate_Api_Agent_PointValue, setPoints) {

	zval *points, points_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&points_sub);

	zephir_fetch_params(0, 1, 0, &points);



	zephir_update_property_zval(this_ptr, SL("points"), points);
	RETURN_THISW();

}

zend_object *zephir_init_properties_Consulate_Api_Agent_PointValue(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("points"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("points"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

