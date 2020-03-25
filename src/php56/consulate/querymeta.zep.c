
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


ZEPHIR_INIT_CLASS(Consulate_QueryMeta) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate, QueryMeta, consulate, querymeta, consulate_model_ce, consulate_querymeta_method_entry, 0);

	zend_declare_property_long(consulate_querymeta_ce, SL("lastIndex"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_querymeta_ce, SL("lastContact"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_querymeta_ce, SL("knownLeader"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_querymeta_ce, SL("requestTime"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_querymeta_ce, SL("addressTranslationEnabled"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_querymeta_ce, SL("requestUri"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_QueryMeta, getLastIndex) {

	

	RETURN_MEMBER(getThis(), "lastIndex");

}

PHP_METHOD(Consulate_QueryMeta, setLastIndex) {

	zval *lastIndex;

	zephir_fetch_params(0, 1, 0, &lastIndex);



	zephir_update_property_this(getThis(), SL("lastIndex"), lastIndex TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getLastContact) {

	

	RETURN_MEMBER(getThis(), "lastContact");

}

PHP_METHOD(Consulate_QueryMeta, setLastContact) {

	zval *lastContact;

	zephir_fetch_params(0, 1, 0, &lastContact);



	zephir_update_property_this(getThis(), SL("lastContact"), lastContact TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getKnownLeader) {

	

	RETURN_MEMBER(getThis(), "knownLeader");

}

PHP_METHOD(Consulate_QueryMeta, setKnownLeader) {

	zval *knownLeader;

	zephir_fetch_params(0, 1, 0, &knownLeader);



	zephir_update_property_this(getThis(), SL("knownLeader"), knownLeader TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getRequestTime) {

	

	RETURN_MEMBER(getThis(), "requestTime");

}

PHP_METHOD(Consulate_QueryMeta, setRequestTime) {

	zval *requestTime;

	zephir_fetch_params(0, 1, 0, &requestTime);



	zephir_update_property_this(getThis(), SL("requestTime"), requestTime TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getAddressTranslationEnabled) {

	

	RETURN_MEMBER(getThis(), "addressTranslationEnabled");

}

PHP_METHOD(Consulate_QueryMeta, setAddressTranslationEnabled) {

	zval *addressTranslationEnabled;

	zephir_fetch_params(0, 1, 0, &addressTranslationEnabled);



	zephir_update_property_this(getThis(), SL("addressTranslationEnabled"), addressTranslationEnabled TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getRequestUri) {

	

	RETURN_MEMBER(getThis(), "requestUri");

}

PHP_METHOD(Consulate_QueryMeta, setRequestUri) {

	zval *requestUri;

	zephir_fetch_params(0, 1, 0, &requestUri);



	zephir_update_property_this(getThis(), SL("requestUri"), requestUri TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, __construct) {

	HashTable *_1;
	HashPosition _0;
	zval *data_param = NULL, *k = NULL, *v = NULL, **_2;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &data_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(data);
		array_init(data);
	} else {
		zephir_get_arrval(data, data_param);
	}


	zephir_is_iterable(data, &_1, &_0, 0, 0, "consulate/querymeta.zep", 33);
	for (
	  ; zend_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
	  ; zend_hash_move_forward_ex(_1, &_0)
	) {
		ZEPHIR_GET_HMKEY(k, _1, _0);
		ZEPHIR_GET_HVALUE(v, _2);
		zephir_update_property_zval_zval(getThis(), k, v TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

