
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
#include "kernel/fcall.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Kv_Pair) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Kv, Pair, consulate, api_kv_pair, consulate_model_ce, consulate_api_kv_pair_method_entry, 0);

	zend_declare_property_string(consulate_api_kv_pair_ce, SL("key"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_kv_pair_ce, SL("createIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_kv_pair_ce, SL("modifyIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_kv_pair_ce, SL("lockIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_kv_pair_ce, SL("flags"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_kv_pair_ce, SL("value"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_kv_pair_ce, SL("session"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Kv_Pair, getKey) {

	

	RETURN_MEMBER(getThis(), "key");

}

PHP_METHOD(Consulate_Api_Kv_Pair, setKey) {

	zval *key;

	zephir_fetch_params(0, 1, 0, &key);



	zephir_update_property_this(getThis(), SL("key"), key TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Kv_Pair, getCreateIndex) {

	

	RETURN_MEMBER(getThis(), "createIndex");

}

PHP_METHOD(Consulate_Api_Kv_Pair, setCreateIndex) {

	zval *createIndex;

	zephir_fetch_params(0, 1, 0, &createIndex);



	zephir_update_property_this(getThis(), SL("createIndex"), createIndex TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Kv_Pair, getModifyIndex) {

	

	RETURN_MEMBER(getThis(), "modifyIndex");

}

PHP_METHOD(Consulate_Api_Kv_Pair, setModifyIndex) {

	zval *modifyIndex;

	zephir_fetch_params(0, 1, 0, &modifyIndex);



	zephir_update_property_this(getThis(), SL("modifyIndex"), modifyIndex TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Kv_Pair, getLockIndex) {

	

	RETURN_MEMBER(getThis(), "lockIndex");

}

PHP_METHOD(Consulate_Api_Kv_Pair, setLockIndex) {

	zval *lockIndex;

	zephir_fetch_params(0, 1, 0, &lockIndex);



	zephir_update_property_this(getThis(), SL("lockIndex"), lockIndex TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Kv_Pair, getFlags) {

	

	RETURN_MEMBER(getThis(), "flags");

}

PHP_METHOD(Consulate_Api_Kv_Pair, setFlags) {

	zval *flags;

	zephir_fetch_params(0, 1, 0, &flags);



	zephir_update_property_this(getThis(), SL("flags"), flags TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Kv_Pair, getValue) {

	

	RETURN_MEMBER(getThis(), "value");

}

PHP_METHOD(Consulate_Api_Kv_Pair, setValue) {

	zval *value;

	zephir_fetch_params(0, 1, 0, &value);



	zephir_update_property_this(getThis(), SL("value"), value TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Kv_Pair, getSession) {

	

	RETURN_MEMBER(getThis(), "session");

}

PHP_METHOD(Consulate_Api_Kv_Pair, setSession) {

	zval *session;

	zephir_fetch_params(0, 1, 0, &session);



	zephir_update_property_this(getThis(), SL("session"), session TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Kv_Pair, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zend_bool decodeValue, _1;
	zval *data_param = NULL, *decodeValue_param = NULL, *_2$$3, *_3$$3 = NULL;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &data_param, &decodeValue_param);

	zephir_get_arrval(data, data_param);
	if (!decodeValue_param) {
		decodeValue = 0;
	} else {
		decodeValue = zephir_get_boolval(decodeValue_param);
	}


	ZEPHIR_CALL_PARENT(NULL, consulate_api_kv_pair_ce, getThis(), "__construct", &_0, 19, data);
	zephir_check_call_status();
	_1 = decodeValue;
	if (_1) {
		_1 = zephir_isset_property(this_ptr, SS("value") TSRMLS_CC);
	}
	if (_1) {
		_2$$3 = zephir_fetch_nproperty_this(this_ptr, SL("value"), PH_NOISY_CC);
		ZEPHIR_CALL_FUNCTION(&_3$$3, "base64_decode", NULL, 30, _2$$3);
		zephir_check_call_status();
		zephir_update_property_this(getThis(), SL("value"), _3$$3 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

