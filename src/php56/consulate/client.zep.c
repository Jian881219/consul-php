
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

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_ADDR_ENV_NAME"), "CONSUL_HTTP_ADDR" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_TOKEN_ENV_NAME"), "CONSUL_HTTP_TOKEN" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_AUTH_ENV_NAME"), "CONSUL_HTTP_AUTH" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_SSL_ENV_NAME"), "CONSUL_HTTP_SSL" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_CAFILE_ENV_NAME"), "CONSUL_CACERT" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_CLIENT_CERT_ENV_NAME"), "CONSUL_CLIENT_CERT" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_CLIENT_KEY_ENV_NAME"), "CONSUL_CLIENT_KEY" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_TLS_SERVER_NAME"), "CONSUL_TLS_SERVER_NAME" TSRMLS_CC);

	zend_declare_class_constant_string(consulate_client_ce, SL("HTTP_SSL_VERIFY"), "CONSUL_HTTP_SSL_VERIFY" TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Client, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *config = NULL, *defConfig = NULL, *_1$$4 = NULL, *_3$$4 = NULL, *_2$$5 = NULL, *_4$$6 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &config);

	if (!config) {
		ZEPHIR_CPY_WRT(config, ZEPHIR_GLOBAL(global_null));
	} else {
		ZEPHIR_SEPARATE_PARAM(config);
	}


	ZEPHIR_CALL_CE_STATIC(&defConfig, consulate_config_ce, "newdefaultconfig", &_0, 31);
	zephir_check_call_status();
	if (Z_TYPE_P(config) == IS_NULL) {
		ZEPHIR_CPY_WRT(config, defConfig);
	} else {
		ZEPHIR_CALL_METHOD(&_1$$4, config, "getaddress", NULL, 0);
		zephir_check_call_status();
		if (ZEPHIR_IS_STRING(_1$$4, "")) {
			ZEPHIR_CALL_METHOD(&_2$$5, defConfig, "getaddress", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, config, "setaddress", NULL, 0, _2$$5);
			zephir_check_call_status();
		}
		ZEPHIR_CALL_METHOD(&_3$$4, config, "getscheme", NULL, 0);
		zephir_check_call_status();
		if (ZEPHIR_IS_STRING(_3$$4, "")) {
			ZEPHIR_CALL_METHOD(&_4$$6, defConfig, "getscheme", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, config, "setscheme", NULL, 0, _4$$6);
			zephir_check_call_status();
		}
	}
	zephir_update_property_this(getThis(), SL("config"), config TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Client, acl) {

	


}

PHP_METHOD(Consulate_Client, agent) {

	zval *_0;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_api_agent_ce);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 32, _0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Client, catalog) {

	


}

PHP_METHOD(Consulate_Client, coordinate) {

	


}

PHP_METHOD(Consulate_Client, event) {

	


}

PHP_METHOD(Consulate_Client, health) {

	zval *_0;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_api_health_ce);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 32, _0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Client, kv) {

	zval *_0;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_api_kv_ce);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 32, _0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Client, lock) {

	


}

PHP_METHOD(Consulate_Client, operator) {

	


}

PHP_METHOD(Consulate_Client, session) {

	


}

PHP_METHOD(Consulate_Client, status) {

	zval *_0;
	zend_long ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_api_status_ce);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("config"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 32, _0);
	zephir_check_call_status();
	RETURN_MM();

}

