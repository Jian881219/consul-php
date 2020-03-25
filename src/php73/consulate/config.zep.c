
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
#include "kernel/string.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Consulate_Config) {

	ZEPHIR_REGISTER_CLASS(Consulate, Config, consulate, config, consulate_config_method_entry, 0);

	zend_declare_property_string(consulate_config_ce, SL("address"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_config_ce, SL("scheme"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_config_ce, SL("datacenter"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_config_ce, SL("httpAuth"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_config_ce, SL("waitTime"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_config_ce, SL("token"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_config_ce, SL("CAFile"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_config_ce, SL("certFile"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_config_ce, SL("keyFile"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_config_ce, SL("insecureSkipVerify"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(consulate_config_ce, SL("tokenInHeader"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_Config, getAddress) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "address");

}

PHP_METHOD(Consulate_Config, setAddress) {

	zval *address, address_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&address_sub);

	zephir_fetch_params(0, 1, 0, &address);



	zephir_update_property_zval(this_ptr, SL("address"), address);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getScheme) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "scheme");

}

PHP_METHOD(Consulate_Config, setScheme) {

	zval *scheme, scheme_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&scheme_sub);

	zephir_fetch_params(0, 1, 0, &scheme);



	zephir_update_property_zval(this_ptr, SL("scheme"), scheme);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getDatacenter) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "datacenter");

}

PHP_METHOD(Consulate_Config, setDatacenter) {

	zval *datacenter, datacenter_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&datacenter_sub);

	zephir_fetch_params(0, 1, 0, &datacenter);



	zephir_update_property_zval(this_ptr, SL("datacenter"), datacenter);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getHttpAuth) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "httpAuth");

}

PHP_METHOD(Consulate_Config, getWaitTime) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "waitTime");

}

PHP_METHOD(Consulate_Config, setWaitTime) {

	zval *waitTime, waitTime_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&waitTime_sub);

	zephir_fetch_params(0, 1, 0, &waitTime);



	zephir_update_property_zval(this_ptr, SL("waitTime"), waitTime);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getToken) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "token");

}

PHP_METHOD(Consulate_Config, setToken) {

	zval *token, token_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&token_sub);

	zephir_fetch_params(0, 1, 0, &token);



	zephir_update_property_zval(this_ptr, SL("token"), token);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getCAFile) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "CAFile");

}

PHP_METHOD(Consulate_Config, setCAFile) {

	zval *CAFile, CAFile_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&CAFile_sub);

	zephir_fetch_params(0, 1, 0, &CAFile);



	zephir_update_property_zval(this_ptr, SL("CAFile"), CAFile);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getCertFile) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "certFile");

}

PHP_METHOD(Consulate_Config, setCertFile) {

	zval *certFile, certFile_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&certFile_sub);

	zephir_fetch_params(0, 1, 0, &certFile);



	zephir_update_property_zval(this_ptr, SL("certFile"), certFile);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getKeyFile) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "keyFile");

}

PHP_METHOD(Consulate_Config, setKeyFile) {

	zval *keyFile, keyFile_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&keyFile_sub);

	zephir_fetch_params(0, 1, 0, &keyFile);



	zephir_update_property_zval(this_ptr, SL("keyFile"), keyFile);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getInsecureSkipVerify) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "insecureSkipVerify");

}

PHP_METHOD(Consulate_Config, setInsecureSkipVerify) {

	zval *insecureSkipVerify, insecureSkipVerify_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&insecureSkipVerify_sub);

	zephir_fetch_params(0, 1, 0, &insecureSkipVerify);



	zephir_update_property_zval(this_ptr, SL("insecureSkipVerify"), insecureSkipVerify);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getTokenInHeader) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "tokenInHeader");

}

PHP_METHOD(Consulate_Config, setTokenInHeader) {

	zval *tokenInHeader, tokenInHeader_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&tokenInHeader_sub);

	zephir_fetch_params(0, 1, 0, &tokenInHeader);



	zephir_update_property_zval(this_ptr, SL("tokenInHeader"), tokenInHeader);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, __construct) {

	zend_string *_6;
	zend_ulong _5;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL, *_9 = NULL;
	zval *config_param = NULL, method, k, v, _0, _2, *_3, _4, _12, _7$$3, _8$$3, _10$$4, _11$$4, _13$$5;
	zval config;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_13$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &config_param);

	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}


	ZEPHIR_CALL_STATIC(&_0, "getdefaultconfig", &_1, 32);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	zephir_add_function(&_2, &config, &_0);
	ZEPHIR_CPY_WRT(&config, &_2);
	zephir_is_iterable(&config, 0, "consulate/config.zep", 72);
	if (Z_TYPE_P(&config) == IS_ARRAY) {
		ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&config), _5, _6, _3)
		{
			ZEPHIR_INIT_NVAR(&k);
			if (_6 != NULL) { 
				ZVAL_STR_COPY(&k, _6);
			} else {
				ZVAL_LONG(&k, _5);
			}
			ZEPHIR_INIT_NVAR(&v);
			ZVAL_COPY(&v, _3);
			ZEPHIR_INIT_NVAR(&_7$$3);
			zephir_ucfirst(&_7$$3, &k);
			ZEPHIR_INIT_NVAR(&_8$$3);
			ZVAL_STRING(&_8$$3, "set%s");
			ZEPHIR_CALL_FUNCTION(&method, "sprintf", &_9, 10, &_8$$3, &_7$$3);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD_ZVAL(NULL, this_ptr, &method, NULL, 0, &v);
			zephir_check_call_status();
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &config, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_4, &config, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_4)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&k, &config, "key", NULL, 0);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(&v, &config, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_10$$4);
				zephir_ucfirst(&_10$$4, &k);
				ZEPHIR_INIT_NVAR(&_11$$4);
				ZVAL_STRING(&_11$$4, "set%s");
				ZEPHIR_CALL_FUNCTION(&method, "sprintf", &_9, 10, &_11$$4, &_10$$4);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD_ZVAL(NULL, this_ptr, &method, NULL, 0, &v);
				zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &config, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&v);
	ZEPHIR_INIT_NVAR(&k);
	zephir_read_property(&_12, this_ptr, SL("httpAuth"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_EMPTY(&_12)) {
		ZEPHIR_INIT_VAR(&_13$$5);
		object_init_ex(&_13$$5, consulate_http_auth_ce);
		ZEPHIR_CALL_METHOD(NULL, &_13$$5, "__construct", NULL, 33);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("httpAuth"), &_13$$5);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Config, newDefaultConfig) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_config_ce);
	ZEPHIR_CALL_SELF(&_0, "getdefaultconfig", &_1, 32);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 34, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Config, setHttpAuth) {

	zval username$$3, password$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *auth, auth_sub, pos$$3, _0$$3, _1$$5, _2$$5, _3, _4, _5, _6, _7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&auth_sub);
	ZVAL_UNDEF(&pos$$3);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$5);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&username$$3);
	ZVAL_UNDEF(&password$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &auth);



	if (Z_TYPE_P(auth) == IS_STRING) {
		ZEPHIR_INIT_VAR(&_0$$3);
		ZVAL_STRING(&_0$$3, ":");
		ZEPHIR_CALL_METHOD(&pos$$3, auth, "index", NULL, 0, &_0$$3);
		zephir_check_call_status();
		if (ZEPHIR_IS_FALSE_IDENTICAL(&pos$$3)) {
			zephir_get_strval(&username$$3, auth);
		} else {
			ZVAL_LONG(&_1$$5, 0);
			ZEPHIR_INIT_VAR(&username$$3);
			zephir_substr(&username$$3, auth, 0 , zephir_get_intval(&pos$$3), 0);
			ZVAL_LONG(&_2$$5, (zephir_get_numberval(&pos$$3) + 1));
			ZEPHIR_INIT_VAR(&password$$3);
			zephir_substr(&password$$3, auth, zephir_get_intval(&_2$$5), 0, ZEPHIR_SUBSTR_NO_LENGTH);
		}
		ZEPHIR_INIT_NVAR(&_0$$3);
		object_init_ex(&_0$$3, consulate_http_auth_ce);
		ZEPHIR_CALL_METHOD(NULL, &_0$$3, "__construct", NULL, 33, &username$$3, &password$$3);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("httpAuth"), &_0$$3);
		RETURN_THIS();
	}
	if (zephir_instance_of_ev(auth, consulate_http_auth_ce TSRMLS_CC)) {
		zephir_update_property_zval(this_ptr, SL("httpAuth"), auth);
		RETURN_THIS();
	}
	ZEPHIR_INIT_VAR(&_3);
	object_init_ex(&_3, zend_exception_get_default(TSRMLS_C));
	ZEPHIR_INIT_VAR(&_4);
	zephir_get_class(&_4, this_ptr, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_5);
	if (Z_TYPE_P(auth) == IS_STRING) {
		ZEPHIR_CPY_WRT(&_5, auth);
	} else {
		ZEPHIR_INIT_NVAR(&_5);
		zephir_gettype(&_5, auth TSRMLS_CC);
	}
	ZEPHIR_INIT_VAR(&_6);
	ZVAL_STRING(&_6, "%s::setHttpAuth - Value is expected to be string of \"username:password\" or instance of \"\\Consulate\\Http\\Auth\", %s seen.");
	ZEPHIR_CALL_FUNCTION(&_7, "sprintf", NULL, 10, &_6, &_4, &_5);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, &_3, "__construct", NULL, 11, &_7);
	zephir_check_call_status();
	zephir_throw_exception_debug(&_3, "consulate/config.zep", 107 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();
	return;

}

PHP_METHOD(Consulate_Config, durToMsec) {

	zend_bool _0;
	zval *dur_param = NULL, ms, _1;
	zend_long dur, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&ms);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &dur_param);

	dur = zephir_get_intval(dur_param);


	ZEPHIR_INIT_VAR(&ms);
	ZVAL_DOUBLE(&ms, zephir_safe_div_long_long(dur, 1000000 TSRMLS_CC));
	_0 = dur > 0;
	if (_0) {
		_0 = ZEPHIR_IS_LONG(&ms, 0);
	}
	if (_0) {
		ZEPHIR_INIT_NVAR(&ms);
		ZVAL_LONG(&ms, 1);
	}
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "%dms");
	ZEPHIR_RETURN_CALL_FUNCTION("sprintf", NULL, 10, &_1, &ms);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Config, getValueFromEnvironment) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key, key_sub, _ENV, _SERVER, v;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key_sub);
	ZVAL_UNDEF(&_ENV);
	ZVAL_UNDEF(&_SERVER);
	ZVAL_UNDEF(&v);

	ZEPHIR_MM_GROW();
	zephir_get_global(&_SERVER, SL("_SERVER"));
	zephir_get_global(&_ENV, SL("_ENV"));
	zephir_fetch_params(1, 1, 0, &key);



	ZEPHIR_OBS_VAR(&v);
	if (zephir_array_isset_fetch(&v, &_ENV, key, 0 TSRMLS_CC)) {
		RETURN_CCTOR(&v);
	}
	ZEPHIR_CALL_FUNCTION(&v, "getenv", NULL, 35, key);
	zephir_check_call_status();
	if (!ZEPHIR_IS_FALSE_IDENTICAL(&v)) {
		RETURN_CCTOR(&v);
	}
	ZEPHIR_OBS_NVAR(&v);
	if (zephir_array_isset_fetch(&v, &_SERVER, key, 0 TSRMLS_CC)) {
		RETURN_CCTOR(&v);
	}
	RETURN_MM_STRING("");

}

PHP_METHOD(Consulate_Config, getDefaultConfig) {

	zval __$true, config, addr, token, auth, CAFile, certFile, keyFile, v, _1, _2$$9;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *this_ptr = getThis();

	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&addr);
	ZVAL_UNDEF(&token);
	ZVAL_UNDEF(&auth);
	ZVAL_UNDEF(&CAFile);
	ZVAL_UNDEF(&certFile);
	ZVAL_UNDEF(&keyFile);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2$$9);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&config);
	zephir_create_array(&config, 2, 0 TSRMLS_CC);
	add_assoc_stringl_ex(&config, SL("address"), SL("127.0.0.1:8500"));
	add_assoc_stringl_ex(&config, SL("scheme"), SL("http"));
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_HTTP_ADDR");
	ZEPHIR_CALL_STATIC(&addr, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&addr, "")) {
		zephir_array_update_string(&config, SL("address"), &addr, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_HTTP_TOKEN");
	ZEPHIR_CALL_STATIC(&token, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&token, "")) {
		zephir_array_update_string(&config, SL("token"), &token, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_HTTP_AUTH");
	ZEPHIR_CALL_STATIC(&auth, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&auth, "")) {
		zephir_array_update_string(&config, SL("httpAuth"), &auth, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_CACERT");
	ZEPHIR_CALL_STATIC(&CAFile, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&CAFile, "")) {
		zephir_array_update_string(&config, SL("CAFile"), &CAFile, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_CLIENT_CERT");
	ZEPHIR_CALL_STATIC(&certFile, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&certFile, "")) {
		zephir_array_update_string(&config, SL("certFile"), &certFile, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_CLIENT_KEY");
	ZEPHIR_CALL_STATIC(&keyFile, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&keyFile, "")) {
		zephir_array_update_string(&config, SL("keyFile"), &keyFile, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_HTTP_SSL");
	ZEPHIR_CALL_STATIC(&v, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (zephir_get_boolval(&v)) {
		ZEPHIR_INIT_VAR(&_2$$9);
		ZVAL_STRING(&_2$$9, "https");
		zephir_array_update_string(&config, SL("scheme"), &_2$$9, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_HTTP_SSL_VERIFY");
	ZEPHIR_CALL_STATIC(&v, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (zephir_get_boolval(&v)) {
		zephir_array_update_string(&config, SL("insecureSkipVerify"), &__$true, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "CONSUL_TLS_SERVER_NAME");
	ZEPHIR_CALL_STATIC(&v, "getvaluefromenvironment", &_0, 36, &_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(&v, "")) {
		zephir_array_update_string(&config, SL("address"), &v, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(&config);

}

