
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


ZEPHIR_INIT_CLASS(Consulate_WriteMeta) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate, WriteMeta, consulate, writemeta, consulate_model_ce, consulate_writemeta_method_entry, 0);

	zend_declare_property_long(consulate_writemeta_ce, SL("requestTime"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_WriteMeta, getRequestTime) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "requestTime");

}

PHP_METHOD(Consulate_WriteMeta, setRequestTime) {

	zval *requestTime, requestTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&requestTime_sub);

	zephir_fetch_params(0, 1, 0, &requestTime);



	zephir_update_property_zval(this_ptr, SL("requestTime"), requestTime);
	RETURN_THISW();

}

