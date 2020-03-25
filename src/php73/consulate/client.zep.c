
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
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Consulate_Client) {

	ZEPHIR_REGISTER_CLASS(Consulate, Client, consulate, client, consulate_client_method_entry, 0);

	zend_declare_property_null(consulate_client_ce, SL("config"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_ADDR_ENV_NAME"), "CONSUL_HTTP_ADDR");

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_TOKEN_ENV_NAME"), "CONSUL_HTTP_TOKEN");

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_AUTH_ENV_NAME"), "CONSUL_HTTP_AUTH");

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_SSL_ENV_NAME"), "CONSUL_HTTP_SSL");

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_CAFILE_ENV_NAME"), "CONSUL_CACERT");

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_CLIENT_CERT_ENV_NAME"), "CONSUL_CLIENT_CERT");

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_CLIENT_KEY_ENV_NAME"), "CONSUL_CLIENT_KEY");

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_TLS_SERVER_NAME"), "CONSUL_TLS_SERVER_NAME");

	zephir_declare_class_constant_string(consulate_client_ce, SL("HTTP_SSL_VERIFY"), "CONSUL_HTTP_SSL_VERIFY");

	return SUCCESS;

}

PHP_METHOD(Consulate_Client, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *config = NULL, config_sub, __$null, defConfig, _1$$4, _3$$4, _2$$5, _4$$6;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&defConfig);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_3$$4);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_4$$6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &config);

	if (!config) {
		config = &config_sub;
		ZEPHIR_CPY_WRT(config, &__$null);
	} else {
		ZEPHIR_SEPARATE_PARAM(config);
	}


	ZEPHIR_CALL_CE_STATIC(&defConfig, consulate_config_ce, "newdefaultconfig", &_0, 0);
	zephir_check_call_status();
	if (Z_TYPE_P(config) == IS_NULL) {
		ZEPHIR_CPY_WRT(config, &defConfig);
	} else {
		ZEPHIR_CALL_METHOD(&_1$$4, config, "getaddress", NULL, 0);
		zephir_check_call_status();
		if (ZEPHIR_IS_STRING(&_1$$4, "")) {
			ZEPHIR_CALL_METHOD(&_2$$5, &defConfig, "getaddress", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, config, "setaddress", NULL, 0, &_2$$5);
			zephir_check_call_status();
		}
		ZEPHIR_CALL_METHOD(&_3$$4, config, "getscheme", NULL, 0);
		zephir_check_call_status();
		if (ZEPHIR_IS_STRING(&_3$$4, "")) {
			ZEPHIR_CALL_METHOD(&_4$$6, &defConfig, "getscheme", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, config, "setscheme", NULL, 0, &_4$$6);
			zephir_check_call_status();
		}
	}
	zephir_update_property_zval(this_ptr, SL("config"), config);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Client, acl) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Consulate_Client, agent) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_api_agent_ce);
	zephir_read_property(&_0, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 31, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Client, catalog) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Consulate_Client, coordinate) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Consulate_Client, event) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Consulate_Client, health) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_api_health_ce);
	zephir_read_property(&_0, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 31, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Client, kv) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_api_kv_ce);
	zephir_read_property(&_0, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 31, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Client, lock) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Consulate_Client, operator) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Consulate_Client, session) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Consulate_Client, status) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_api_status_ce);
	zephir_read_property(&_0, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 31, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

