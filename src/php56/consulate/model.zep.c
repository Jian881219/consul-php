
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
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Consulate_Model) {

	ZEPHIR_REGISTER_CLASS(Consulate, Model, consulate, model, consulate_model_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	zend_class_implements(consulate_model_ce TSRMLS_CC, 1, zephir_get_internal_ce(SS("jsonserializable") TSRMLS_CC));
	return SUCCESS;

}

PHP_METHOD(Consulate_Model, __construct) {

	HashTable *_1;
	HashPosition _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_4 = NULL;
	zval *data_param = NULL, *k = NULL, *v = NULL, **_2, *_3$$3 = NULL;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &data_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(data);
		array_init(data);
	} else {
		zephir_get_arrval(data, data_param);
	}


	zephir_is_iterable(data, &_1, &_0, 0, 0, "consulate/model.zep", 10);
	for (
	  ; zend_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
	  ; zend_hash_move_forward_ex(_1, &_0)
	) {
		ZEPHIR_GET_HMKEY(k, _1, _0);
		ZEPHIR_GET_HVALUE(v, _2);
		ZEPHIR_CALL_FUNCTION(&_3$$3, "lcfirst", &_4, 1, k);
		zephir_check_call_status();
		ZEPHIR_CPY_WRT(k, _3$$3);
		zephir_update_property_zval_zval(getThis(), k, v TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Model, jsonSerialize) {

	zval *_0 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	zephir_get_arrval(_0, this_ptr);
	ZEPHIR_RETURN_CALL_FUNCTION("array_filter", NULL, 2, _0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Model, __toString) {

	

	zephir_get_class(return_value, this_ptr, 0 TSRMLS_CC);
	return;

}

