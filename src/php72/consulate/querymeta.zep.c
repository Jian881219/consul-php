
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
#include "kernel/fcall.h"
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "lastIndex");

}

PHP_METHOD(Consulate_QueryMeta, setLastIndex) {

	zval *lastIndex, lastIndex_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&lastIndex_sub);

	zephir_fetch_params(0, 1, 0, &lastIndex);



	zephir_update_property_zval(this_ptr, SL("lastIndex"), lastIndex);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getLastContact) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "lastContact");

}

PHP_METHOD(Consulate_QueryMeta, setLastContact) {

	zval *lastContact, lastContact_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&lastContact_sub);

	zephir_fetch_params(0, 1, 0, &lastContact);



	zephir_update_property_zval(this_ptr, SL("lastContact"), lastContact);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getKnownLeader) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "knownLeader");

}

PHP_METHOD(Consulate_QueryMeta, setKnownLeader) {

	zval *knownLeader, knownLeader_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&knownLeader_sub);

	zephir_fetch_params(0, 1, 0, &knownLeader);



	zephir_update_property_zval(this_ptr, SL("knownLeader"), knownLeader);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getRequestTime) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "requestTime");

}

PHP_METHOD(Consulate_QueryMeta, setRequestTime) {

	zval *requestTime, requestTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&requestTime_sub);

	zephir_fetch_params(0, 1, 0, &requestTime);



	zephir_update_property_zval(this_ptr, SL("requestTime"), requestTime);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getAddressTranslationEnabled) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "addressTranslationEnabled");

}

PHP_METHOD(Consulate_QueryMeta, setAddressTranslationEnabled) {

	zval *addressTranslationEnabled, addressTranslationEnabled_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&addressTranslationEnabled_sub);

	zephir_fetch_params(0, 1, 0, &addressTranslationEnabled);



	zephir_update_property_zval(this_ptr, SL("addressTranslationEnabled"), addressTranslationEnabled);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, getRequestUri) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "requestUri");

}

PHP_METHOD(Consulate_QueryMeta, setRequestUri) {

	zval *requestUri, requestUri_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&requestUri_sub);

	zephir_fetch_params(0, 1, 0, &requestUri);



	zephir_update_property_zval(this_ptr, SL("requestUri"), requestUri);
	RETURN_THISW();

}

PHP_METHOD(Consulate_QueryMeta, __construct) {

	zend_string *_3;
	zend_ulong _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *data_param = NULL, k, v, *_0, _1;
	zval data;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &data_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(&data);
		array_init(&data);
	} else {
		zephir_get_arrval(&data, data_param);
	}


	zephir_is_iterable(&data, 0, "consulate/querymeta.zep", 33);
	if (Z_TYPE_P(&data) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&data), _2, _3, _0)
		{
			ZEPHIR_INIT_NVAR(&k);
			if (_3 != NULL) { 
				ZVAL_STR_COPY(&k, _3);
			} else {
				ZVAL_LONG(&k, _2);
			}
			ZEPHIR_INIT_NVAR(&v);
			ZVAL_COPY(&v, _0);
			zephir_update_property_zval_zval(this_ptr, &k, &v TSRMLS_CC);
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &data, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_1, &data, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_1)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&k, &data, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&v, &data, "current", NULL, 0);
			zephir_check_call_status();
				zephir_update_property_zval_zval(this_ptr, &k, &v TSRMLS_CC);
			ZEPHIR_CALL_METHOD(NULL, &data, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&v);
	ZEPHIR_INIT_NVAR(&k);
	ZEPHIR_MM_RESTORE();

}

