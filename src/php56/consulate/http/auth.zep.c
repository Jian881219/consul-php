
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
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/string.h"
#include "kernel/fcall.h"
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Consulate_Http_Auth) {

	ZEPHIR_REGISTER_CLASS(Consulate\\Http, Auth, consulate, http_auth, consulate_http_auth_method_entry, 0);

	zend_declare_property_string(consulate_http_auth_ce, SL("username"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_http_auth_ce, SL("password"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_class_implements(consulate_http_auth_ce TSRMLS_CC, 1, zephir_get_internal_ce(SS("jsonserializable") TSRMLS_CC));
	return SUCCESS;

}

PHP_METHOD(Consulate_Http_Auth, getUsername) {

	

	RETURN_MEMBER(getThis(), "username");

}

PHP_METHOD(Consulate_Http_Auth, setUsername) {

	zval *username;

	zephir_fetch_params(0, 1, 0, &username);



	zephir_update_property_this(getThis(), SL("username"), username TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Http_Auth, getPassword) {

	

	RETURN_MEMBER(getThis(), "password");

}

PHP_METHOD(Consulate_Http_Auth, setPassword) {

	zval *password;

	zephir_fetch_params(0, 1, 0, &password);



	zephir_update_property_this(getThis(), SL("password"), password TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Http_Auth, __construct) {

	zval *username_param = NULL, *password_param = NULL;
	zval *username = NULL, *password = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &username_param, &password_param);

	if (!username_param) {
		ZEPHIR_INIT_VAR(username);
		ZVAL_STRING(username, "", 1);
	} else {
		zephir_get_strval(username, username_param);
	}
	if (!password_param) {
		ZEPHIR_INIT_VAR(password);
		ZVAL_STRING(password, "", 1);
	} else {
		zephir_get_strval(password, password_param);
	}


	zephir_update_property_this(getThis(), SL("username"), username TSRMLS_CC);
	zephir_update_property_this(getThis(), SL("password"), password TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Auth, compileAuthString) {

	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	zephir_get_strval(_0, this_ptr);
	RETURN_CTOR(_0);

}

PHP_METHOD(Consulate_Http_Auth, __toString) {

	zval *_0, *_1, _2 = zval_used_for_init, *_3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("username"), PH_NOISY_CC);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("password"), PH_NOISY_CC);
	ZEPHIR_SINIT_VAR(_2);
	ZVAL_STRING(&_2, "%s:%s", 0);
	ZEPHIR_CALL_FUNCTION(&_3, "sprintf", NULL, 10, &_2, _0, _1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_2);
	ZVAL_STRING(&_2, ":", 0);
	zephir_fast_trim(return_value, _3, &_2, ZEPHIR_TRIM_BOTH TSRMLS_CC);
	RETURN_MM();

}

PHP_METHOD(Consulate_Http_Auth, jsonSerialize) {

	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	ZEPHIR_OBS_VAR(_0);
	zephir_read_property_this(&_0, this_ptr, SL("username"), PH_NOISY_CC);
	zephir_array_update_string(&return_value, SL("username"), &_0, PH_COPY | PH_SEPARATE);
	ZEPHIR_OBS_NVAR(_0);
	zephir_read_property_this(&_0, this_ptr, SL("password"), PH_NOISY_CC);
	zephir_array_update_string(&return_value, SL("password"), &_0, PH_COPY | PH_SEPARATE);
	RETURN_MM();

}

