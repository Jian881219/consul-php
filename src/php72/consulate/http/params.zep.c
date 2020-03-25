
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Consulate_Http_Params) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Http, Params, consulate, http_params, consulate_values_ce, consulate_http_params_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Consulate_Http_Params, encode) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *v, v_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&v_sub);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &v);



	ZEPHIR_RETURN_CALL_FUNCTION("urlencode", NULL, 51, v);
	zephir_check_call_status();
	RETURN_MM();

}

