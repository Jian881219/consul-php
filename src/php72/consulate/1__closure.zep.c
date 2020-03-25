
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
#include "kernel/array.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(consulate_1__closure) {

	ZEPHIR_REGISTER_CLASS(consulate, 1__closure, consulate, 1__closure, consulate_1__closure_method_entry, ZEND_ACC_FINAL_CLASS);

	return SUCCESS;

}

PHP_METHOD(consulate_1__closure, __invoke) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *match, match_sub, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&match_sub);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &match);



	zephir_array_fetch_long(&_0, match, 0, PH_NOISY | PH_READONLY, "consulate/http/uri.zep", 139 TSRMLS_CC);
	ZEPHIR_RETURN_CALL_FUNCTION("rawurlencode", NULL, 60, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

