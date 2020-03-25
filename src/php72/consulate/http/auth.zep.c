
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

	zend_class_implements(consulate_http_auth_ce TSRMLS_CC, 1, zephir_get_internal_ce(SL("jsonserializable")));
	return SUCCESS;

}

PHP_METHOD(Consulate_Http_Auth, getUsername) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "username");

}

PHP_METHOD(Consulate_Http_Auth, setUsername) {

	zval *username, username_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&username_sub);

	zephir_fetch_params(0, 1, 0, &username);



	zephir_update_property_zval(this_ptr, SL("username"), username);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Http_Auth, getPassword) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "password");

}

PHP_METHOD(Consulate_Http_Auth, setPassword) {

	zval *password, password_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&password_sub);

	zephir_fetch_params(0, 1, 0, &password);



	zephir_update_property_zval(this_ptr, SL("password"), password);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Http_Auth, __construct) {

	zval *username_param = NULL, *password_param = NULL;
	zval username, password;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&username);
	ZVAL_UNDEF(&password);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &username_param, &password_param);

	if (!username_param) {
		ZEPHIR_INIT_VAR(&username);
		ZVAL_STRING(&username, "");
	} else {
		zephir_get_strval(&username, username_param);
	}
	if (!password_param) {
		ZEPHIR_INIT_VAR(&password);
		ZVAL_STRING(&password, "");
	} else {
		zephir_get_strval(&password, password_param);
	}


	zephir_update_property_zval(this_ptr, SL("username"), &username);
	zephir_update_property_zval(this_ptr, SL("password"), &password);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Http_Auth, compileAuthString) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	zephir_get_strval(&_0, this_ptr);
	RETURN_CTOR(&_0);

}

PHP_METHOD(Consulate_Http_Auth, __toString) {

	zval _0, _1, _2, _3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("username"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("password"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "%s:%s");
	ZEPHIR_CALL_FUNCTION(&_3, "sprintf", NULL, 10, &_2, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, ":");
	zephir_fast_trim(return_value, &_3, &_2, ZEPHIR_TRIM_BOTH TSRMLS_CC);
	RETURN_MM();

}

PHP_METHOD(Consulate_Http_Auth, jsonSerialize) {

	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	zephir_create_array(return_value, 2, 0 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&_0);
	zephir_read_property(&_0, this_ptr, SL("username"), PH_NOISY_CC);
	zephir_array_update_string(return_value, SL("username"), &_0, PH_COPY | PH_SEPARATE);
	ZEPHIR_OBS_NVAR(&_0);
	zephir_read_property(&_0, this_ptr, SL("password"), PH_NOISY_CC);
	zephir_array_update_string(return_value, SL("password"), &_0, PH_COPY | PH_SEPARATE);
	RETURN_MM();

}

