
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


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_SampledValue) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, SampledValue, consulate, api_agent_sampledvalue, consulate_model_ce, consulate_api_agent_sampledvalue_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_sampledvalue_ce, SL("name"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_sampledvalue_ce, SL("count"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_double(consulate_api_agent_sampledvalue_ce, SL("sum"), 0.0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_double(consulate_api_agent_sampledvalue_ce, SL("min"), 0.0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_double(consulate_api_agent_sampledvalue_ce, SL("max"), 0.0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_double(consulate_api_agent_sampledvalue_ce, SL("mean"), 0.0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_double(consulate_api_agent_sampledvalue_ce, SL("stddev"), 0.0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_sampledvalue_ce, SL("labels"), ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_sampledvalue_ce->create_object = zephir_init_properties_Consulate_Api_Agent_SampledValue;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getName) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setName) {

	zval *name, name_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_zval(this_ptr, SL("name"), name);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getCount) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "count");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setCount) {

	zval *count, count_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&count_sub);

	zephir_fetch_params(0, 1, 0, &count);



	zephir_update_property_zval(this_ptr, SL("count"), count);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getSum) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "sum");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setSum) {

	zval *sum, sum_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&sum_sub);

	zephir_fetch_params(0, 1, 0, &sum);



	zephir_update_property_zval(this_ptr, SL("sum"), sum);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getMin) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "min");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setMin) {

	zval *min, min_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&min_sub);

	zephir_fetch_params(0, 1, 0, &min);



	zephir_update_property_zval(this_ptr, SL("min"), min);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getMax) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "max");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setMax) {

	zval *max, max_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&max_sub);

	zephir_fetch_params(0, 1, 0, &max);



	zephir_update_property_zval(this_ptr, SL("max"), max);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getMean) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "mean");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setMean) {

	zval *mean, mean_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&mean_sub);

	zephir_fetch_params(0, 1, 0, &mean);



	zephir_update_property_zval(this_ptr, SL("mean"), mean);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getStddev) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "stddev");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setStddev) {

	zval *stddev, stddev_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&stddev_sub);

	zephir_fetch_params(0, 1, 0, &stddev);



	zephir_update_property_zval(this_ptr, SL("stddev"), stddev);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getLabels) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "labels");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setLabels) {

	zval *labels, labels_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&labels_sub);

	zephir_fetch_params(0, 1, 0, &labels);



	zephir_update_property_zval(this_ptr, SL("labels"), labels);
	RETURN_THISW();

}

zend_object *zephir_init_properties_Consulate_Api_Agent_SampledValue(zend_class_entry *class_type TSRMLS_DC) {

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

