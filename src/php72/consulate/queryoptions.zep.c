
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "datacenter");

}

PHP_METHOD(Consulate_QueryOptions, setDatacenter) {

	zval *datacenter, datacenter_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&datacenter_sub);

	zephir_fetch_params(0, 1, 0, &datacenter);



	zephir_update_property_zval(this_ptr, SL("datacenter"), datacenter);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getAllowStale) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "allowStale");

}

PHP_METHOD(Consulate_QueryOptions, setAllowStale) {

	zval *allowStale, allowStale_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&allowStale_sub);

	zephir_fetch_params(0, 1, 0, &allowStale);



	zephir_update_property_zval(this_ptr, SL("allowStale"), allowStale);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getRequireConsistent) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "requireConsistent");

}

PHP_METHOD(Consulate_QueryOptions, setRequireConsistent) {

	zval *requireConsistent, requireConsistent_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&requireConsistent_sub);

	zephir_fetch_params(0, 1, 0, &requireConsistent);



	zephir_update_property_zval(this_ptr, SL("requireConsistent"), requireConsistent);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getWaitIndex) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "waitIndex");

}

PHP_METHOD(Consulate_QueryOptions, setWaitIndex) {

	zval *waitIndex, waitIndex_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&waitIndex_sub);

	zephir_fetch_params(0, 1, 0, &waitIndex);



	zephir_update_property_zval(this_ptr, SL("waitIndex"), waitIndex);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getWaitTime) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "waitTime");

}

PHP_METHOD(Consulate_QueryOptions, setWaitTime) {

	zval *waitTime, waitTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&waitTime_sub);

	zephir_fetch_params(0, 1, 0, &waitTime);



	zephir_update_property_zval(this_ptr, SL("waitTime"), waitTime);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getToken) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "token");

}

PHP_METHOD(Consulate_QueryOptions, setToken) {

	zval *token, token_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&token_sub);

	zephir_fetch_params(0, 1, 0, &token);



	zephir_update_property_zval(this_ptr, SL("token"), token);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getNear) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "near");

}

PHP_METHOD(Consulate_QueryOptions, setNear) {

	zval *near, near_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&near_sub);

	zephir_fetch_params(0, 1, 0, &near);



	zephir_update_property_zval(this_ptr, SL("near"), near);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getNodeMeta) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "nodeMeta");

}

PHP_METHOD(Consulate_QueryOptions, setNodeMeta) {

	zval *nodeMeta, nodeMeta_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&nodeMeta_sub);

	zephir_fetch_params(0, 1, 0, &nodeMeta);



	zephir_update_property_zval(this_ptr, SL("nodeMeta"), nodeMeta);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getRelayFactor) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "relayFactor");

}

PHP_METHOD(Consulate_QueryOptions, setRelayFactor) {

	zval *relayFactor, relayFactor_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&relayFactor_sub);

	zephir_fetch_params(0, 1, 0, &relayFactor);



	zephir_update_property_zval(this_ptr, SL("relayFactor"), relayFactor);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryOptions, getPretty) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "pretty");

}

PHP_METHOD(Consulate_QueryOptions, setPretty) {

	zval *pretty, pretty_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&pretty_sub);

	zephir_fetch_params(0, 1, 0, &pretty);



	zephir_update_property_zval(this_ptr, SL("pretty"), pretty);
	RETURN_THISW();

}

zend_object *zephir_init_properties_Consulate_QueryOptions(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("nodeMeta"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("nodeMeta"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

