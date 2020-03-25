
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Consulate_QueryOptions) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate, QueryOptions, consulate, queryoptions, consulate_model_ce, consulate_queryoptions_method_entry, 0);

	zend_declare_property_string(consulate_queryoptions_ce, SL("datacenter"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_queryoptions_ce, SL("allowStale"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_queryoptions_ce, SL("requireConsistent"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_queryoptions_ce, SL("waitIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_queryoptions_ce, SL("waitTime"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_queryoptions_ce, SL("token"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_queryoptions_ce, SL("near"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_queryoptions_ce, SL("nodeMeta"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_queryoptions_ce, SL("relayFactor"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_queryoptions_ce, SL("pretty"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_queryoptions_ce->create_object = zephir_init_properties_Consulate_QueryOptions;
	return SUCCESS;

}

PHP_METHOD(Consulate_QueryOptions, getDatacenter) {

	

	RETURN_MEMBER(getThis(), "datacenter");

}

PHP_METHOD(Consulate_QueryOptions, setDatacenter) {

	zval *datacenter;

	zephir_fetch_params(0, 1, 0, &datacenter);



	zephir_update_property_this(getThis(), SL("datacenter"), datacenter TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getAllowStale) {

	

	RETURN_MEMBER(getThis(), "allowStale");

}

PHP_METHOD(Consulate_QueryOptions, setAllowStale) {

	zval *allowStale;

	zephir_fetch_params(0, 1, 0, &allowStale);



	zephir_update_property_this(getThis(), SL("allowStale"), allowStale TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getRequireConsistent) {

	

	RETURN_MEMBER(getThis(), "requireConsistent");

}

PHP_METHOD(Consulate_QueryOptions, setRequireConsistent) {

	zval *requireConsistent;

	zephir_fetch_params(0, 1, 0, &requireConsistent);



	zephir_update_property_this(getThis(), SL("requireConsistent"), requireConsistent TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getWaitIndex) {

	

	RETURN_MEMBER(getThis(), "waitIndex");

}

PHP_METHOD(Consulate_QueryOptions, setWaitIndex) {

	zval *waitIndex;

	zephir_fetch_params(0, 1, 0, &waitIndex);



	zephir_update_property_this(getThis(), SL("waitIndex"), waitIndex TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getWaitTime) {

	

	RETURN_MEMBER(getThis(), "waitTime");

}

PHP_METHOD(Consulate_QueryOptions, setWaitTime) {

	zval *waitTime;

	zephir_fetch_params(0, 1, 0, &waitTime);



	zephir_update_property_this(getThis(), SL("waitTime"), waitTime TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getToken) {

	

	RETURN_MEMBER(getThis(), "token");

}

PHP_METHOD(Consulate_QueryOptions, setToken) {

	zval *token;

	zephir_fetch_params(0, 1, 0, &token);



	zephir_update_property_this(getThis(), SL("token"), token TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getNear) {

	

	RETURN_MEMBER(getThis(), "near");

}

PHP_METHOD(Consulate_QueryOptions, setNear) {

	zval *near;

	zephir_fetch_params(0, 1, 0, &near);



	zephir_update_property_this(getThis(), SL("near"), near TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getNodeMeta) {

	

	RETURN_MEMBER(getThis(), "nodeMeta");

}

PHP_METHOD(Consulate_QueryOptions, setNodeMeta) {

	zval *nodeMeta;

	zephir_fetch_params(0, 1, 0, &nodeMeta);



	zephir_update_property_this(getThis(), SL("nodeMeta"), nodeMeta TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getRelayFactor) {

	

	RETURN_MEMBER(getThis(), "relayFactor");

}

PHP_METHOD(Consulate_QueryOptions, setRelayFactor) {

	zval *relayFactor;

	zephir_fetch_params(0, 1, 0, &relayFactor);



	zephir_update_property_this(getThis(), SL("relayFactor"), relayFactor TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getPretty) {

	

	RETURN_MEMBER(getThis(), "pretty");

}

PHP_METHOD(Consulate_QueryOptions, setPretty) {

	zval *pretty;

	zephir_fetch_params(0, 1, 0, &pretty);



	zephir_update_property_this(getThis(), SL("pretty"), pretty TSRMLS_CC);
	RETURN_THISW();

}

zend_object_value zephir_init_properties_Consulate_QueryOptions(zend_class_entry *class_type TSRMLS_DC) {

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("nodeMeta"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("nodeMeta"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

