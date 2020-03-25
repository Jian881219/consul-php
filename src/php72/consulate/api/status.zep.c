
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
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Status) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api, Status, consulate, api_status, consulate_api_endpoint_ce, consulate_api_status_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Status, leader) {

	zval r, response, _0, _1, _2, _3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "GET");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/status/leader");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_3, &response, 1, PH_NOISY | PH_READONLY, "consulate/api/status.zep", 11 TSRMLS_CC);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "decodebody", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Api_Status, peers) {

	zval r, response, _0, _1, _2, _3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&r);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "GET");
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "v1/status/peers");
	ZEPHIR_CALL_METHOD(&r, this_ptr, "newrequest", NULL, 0, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "dorequest", NULL, 0, &r);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, this_ptr, "requireok", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_long(&_3, &response, 1, PH_NOISY | PH_READONLY, "consulate/api/status.zep", 21 TSRMLS_CC);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "decodebody", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

