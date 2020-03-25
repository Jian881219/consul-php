
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

	

	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setName) {

	zval *name;

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_this(getThis(), SL("name"), name TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getCount) {

	

	RETURN_MEMBER(getThis(), "count");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setCount) {

	zval *count;

	zephir_fetch_params(0, 1, 0, &count);



	zephir_update_property_this(getThis(), SL("count"), count TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getSum) {

	

	RETURN_MEMBER(getThis(), "sum");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setSum) {

	zval *sum;

	zephir_fetch_params(0, 1, 0, &sum);



	zephir_update_property_this(getThis(), SL("sum"), sum TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getMin) {

	

	RETURN_MEMBER(getThis(), "min");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setMin) {

	zval *min;

	zephir_fetch_params(0, 1, 0, &min);



	zephir_update_property_this(getThis(), SL("min"), min TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getMax) {

	

	RETURN_MEMBER(getThis(), "max");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setMax) {

	zval *max;

	zephir_fetch_params(0, 1, 0, &max);



	zephir_update_property_this(getThis(), SL("max"), max TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getMean) {

	

	RETURN_MEMBER(getThis(), "mean");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setMean) {

	zval *mean;

	zephir_fetch_params(0, 1, 0, &mean);



	zephir_update_property_this(getThis(), SL("mean"), mean TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getStddev) {

	

	RETURN_MEMBER(getThis(), "stddev");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setStddev) {

	zval *stddev;

	zephir_fetch_params(0, 1, 0, &stddev);



	zephir_update_property_this(getThis(), SL("stddev"), stddev TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, getLabels) {

	

	RETURN_MEMBER(getThis(), "labels");

}

PHP_METHOD(Consulate_Api_Agent_SampledValue, setLabels) {

	zval *labels;

	zephir_fetch_params(0, 1, 0, &labels);



	zephir_update_property_this(getThis(), SL("labels"), labels TSRMLS_CC);
	RETURN_THISW();

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_SampledValue(zend_class_entry *class_type TSRMLS_DC) {

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

