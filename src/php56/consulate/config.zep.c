
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

	

	RETURN_MEMBER(getThis(), "address");

}

PHP_METHOD(Consulate_Config, setAddress) {

	zval *address;

	zephir_fetch_params(0, 1, 0, &address);



	zephir_update_property_this(getThis(), SL("address"), address TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getScheme) {

	

	RETURN_MEMBER(getThis(), "scheme");

}

PHP_METHOD(Consulate_Config, setScheme) {

	zval *scheme;

	zephir_fetch_params(0, 1, 0, &scheme);



	zephir_update_property_this(getThis(), SL("scheme"), scheme TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getDatacenter) {

	

	RETURN_MEMBER(getThis(), "datacenter");

}

PHP_METHOD(Consulate_Config, setDatacenter) {

	zval *datacenter;

	zephir_fetch_params(0, 1, 0, &datacenter);



	zephir_update_property_this(getThis(), SL("datacenter"), datacenter TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getHttpAuth) {

	

	RETURN_MEMBER(getThis(), "httpAuth");

}

PHP_METHOD(Consulate_Config, getWaitTime) {

	

	RETURN_MEMBER(getThis(), "waitTime");

}

PHP_METHOD(Consulate_Config, setWaitTime) {

	zval *waitTime;

	zephir_fetch_params(0, 1, 0, &waitTime);



	zephir_update_property_this(getThis(), SL("waitTime"), waitTime TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getToken) {

	

	RETURN_MEMBER(getThis(), "token");

}

PHP_METHOD(Consulate_Config, setToken) {

	zval *token;

	zephir_fetch_params(0, 1, 0, &token);



	zephir_update_property_this(getThis(), SL("token"), token TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getCAFile) {

	

	RETURN_MEMBER(getThis(), "CAFile");

}

PHP_METHOD(Consulate_Config, setCAFile) {

	zval *CAFile;

	zephir_fetch_params(0, 1, 0, &CAFile);



	zephir_update_property_this(getThis(), SL("CAFile"), CAFile TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getCertFile) {

	

	RETURN_MEMBER(getThis(), "certFile");

}

PHP_METHOD(Consulate_Config, setCertFile) {

	zval *certFile;

	zephir_fetch_params(0, 1, 0, &certFile);



	zephir_update_property_this(getThis(), SL("certFile"), certFile TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getKeyFile) {

	

	RETURN_MEMBER(getThis(), "keyFile");

}

PHP_METHOD(Consulate_Config, setKeyFile) {

	zval *keyFile;

	zephir_fetch_params(0, 1, 0, &keyFile);



	zephir_update_property_this(getThis(), SL("keyFile"), keyFile TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getInsecureSkipVerify) {

	

	RETURN_MEMBER(getThis(), "insecureSkipVerify");

}

PHP_METHOD(Consulate_Config, setInsecureSkipVerify) {

	zval *insecureSkipVerify;

	zephir_fetch_params(0, 1, 0, &insecureSkipVerify);



	zephir_update_property_this(getThis(), SL("insecureSkipVerify"), insecureSkipVerify TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, getTokenInHeader) {

	

	RETURN_MEMBER(getThis(), "tokenInHeader");

}

PHP_METHOD(Consulate_Config, setTokenInHeader) {

	zval *tokenInHeader;

	zephir_fetch_params(0, 1, 0, &tokenInHeader);



	zephir_update_property_this(getThis(), SL("tokenInHeader"), tokenInHeader TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Config, __construct) {

	HashTable *_4;
	HashPosition _3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL, *_8 = NULL;
	zval *config_param = NULL, *method = NULL, *k = NULL, *v = NULL, *_0 = NULL, *_2, **_5, *_9, *_6$$3 = NULL, _7$$3 = zval_used_for_init, *_10$$4;
	zval *config = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &config_param);

	if (!config_param) {
		ZEPHIR_INIT_VAR(config);
		array_init(config);
	} else {
	config = config_param;
	}


	ZEPHIR_CALL_STATIC(&_0, "getdefaultconfig", &_1, 33);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(_2);
	zephir_add_function(_2, config, _0);
	ZEPHIR_CPY_WRT(config, _2);
	zephir_is_iterable(config, &_4, &_3, 0, 0, "consulate/config.zep", 72);
	for (
	  ; zend_hash_get_current_data_ex(_4, (void**) &_5, &_3) == SUCCESS
	  ; zend_hash_move_forward_ex(_4, &_3)
	) {
		ZEPHIR_GET_HMKEY(k, _4, _3);
		ZEPHIR_GET_HVALUE(v, _5);
		ZEPHIR_INIT_NVAR(_6$$3);
		zephir_ucfirst(_6$$3, k);
		ZEPHIR_SINIT_NVAR(_7$$3);
		ZVAL_STRING(&_7$$3, "set%s", 0);
		ZEPHIR_CALL_FUNCTION(&method, "sprintf", &_8, 10, &_7$$3, _6$$3);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD_ZVAL(NULL, this_ptr, method, NULL, 0, v);
		zephir_check_call_status();
	}
	_9 = zephir_fetch_nproperty_this(this_ptr, SL("httpAuth"), PH_NOISY_CC);
	if (ZEPHIR_IS_EMPTY(_9)) {
		ZEPHIR_INIT_VAR(_10$$4);
		object_init_ex(_10$$4, consulate_http_auth_ce);
		ZEPHIR_CALL_METHOD(NULL, _10$$4, "__construct", NULL, 34);
		zephir_check_call_status();
		zephir_update_property_this(getThis(), SL("httpAuth"), _10$$4 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Consulate_Config, newDefaultConfig) {

	zval *_0 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;

	ZEPHIR_MM_GROW();

	object_init_ex(return_value, consulate_config_ce);
	ZEPHIR_CALL_SELF(&_0, "getdefaultconfig", &_1, 33);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 35, _0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Config, setHttpAuth) {

	zval *username$$3 = NULL, *password$$3 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *auth, *pos$$3 = NULL, *_0$$3 = NULL, _1$$5, _2$$5, *_3, *_4, *_5 = NULL, _6, *_7 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &auth);



	if (Z_TYPE_P(auth) == IS_STRING) {
		ZEPHIR_INIT_VAR(_0$$3);
		ZVAL_STRING(_0$$3, ":", ZEPHIR_TEMP_PARAM_COPY);
		ZEPHIR_CALL_METHOD(&pos$$3, auth, "index", NULL, 0, _0$$3);
		zephir_check_temp_parameter(_0$$3);
		zephir_check_call_status();
		if (ZEPHIR_IS_FALSE_IDENTICAL(pos$$3)) {
			zephir_get_strval(username$$3, auth);
		} else {
			ZEPHIR_SINIT_VAR(_1$$5);
			ZVAL_LONG(&_1$$5, 0);
			ZEPHIR_INIT_VAR(username$$3);
			zephir_substr(username$$3, auth, 0 , zephir_get_intval(pos$$3), 0);
			ZEPHIR_SINIT_VAR(_2$$5);
			ZVAL_LONG(&_2$$5, (zephir_get_numberval(pos$$3) + 1));
			ZEPHIR_INIT_VAR(password$$3);
			zephir_substr(password$$3, auth, zephir_get_intval(&_2$$5), 0, ZEPHIR_SUBSTR_NO_LENGTH);
		}
		ZEPHIR_INIT_NVAR(_0$$3);
		object_init_ex(_0$$3, consulate_http_auth_ce);
		ZEPHIR_CALL_METHOD(NULL, _0$$3, "__construct", NULL, 34, username$$3, password$$3);
		zephir_check_call_status();
		zephir_update_property_this(getThis(), SL("httpAuth"), _0$$3 TSRMLS_CC);
		RETURN_THIS();
	}
	if (zephir_instance_of_ev(auth, consulate_http_auth_ce TSRMLS_CC)) {
		zephir_update_property_this(getThis(), SL("httpAuth"), auth TSRMLS_CC);
		RETURN_THIS();
	}
	ZEPHIR_INIT_VAR(_3);
	object_init_ex(_3, zend_exception_get_default(TSRMLS_C));
	ZEPHIR_INIT_VAR(_4);
	zephir_get_class(_4, this_ptr, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_5);
	if (Z_TYPE_P(auth) == IS_STRING) {
		ZEPHIR_CPY_WRT(_5, auth);
	} else {
		ZEPHIR_INIT_NVAR(_5);
		zephir_gettype(_5, auth TSRMLS_CC);
	}
	ZEPHIR_SINIT_VAR(_6);
	ZVAL_STRING(&_6, "%s::setHttpAuth - Value is expected to be string of \"username:password\" or instance of \"\\Consulate\\Http\\Auth\", %s seen.", 0);
	ZEPHIR_CALL_FUNCTION(&_7, "sprintf", NULL, 10, &_6, _4, _5);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(NULL, _3, "__construct", NULL, 11, _7);
	zephir_check_call_status();
	zephir_throw_exception_debug(_3, "consulate/config.zep", 107 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();
	return;

}

PHP_METHOD(Consulate_Config, durToMsec) {

	zend_bool _0;
	zval *dur_param = NULL, *ms = NULL, _1;
	zend_long dur, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &dur_param);

	dur = zephir_get_intval(dur_param);


	ZEPHIR_INIT_VAR(ms);
	ZVAL_DOUBLE(ms, zephir_safe_div_long_long(dur, 1000000 TSRMLS_CC));
	_0 = dur > 0;
	if (_0) {
		_0 = ZEPHIR_IS_LONG(ms, 0);
	}
	if (_0) {
		ZEPHIR_INIT_NVAR(ms);
		ZVAL_LONG(ms, 1);
	}
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_STRING(&_1, "%dms", 0);
	ZEPHIR_RETURN_CALL_FUNCTION("sprintf", NULL, 10, &_1, ms);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Consulate_Config, getValueFromEnvironment) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *key, *_ENV, *_SERVER, *v = NULL;

	ZEPHIR_MM_GROW();
	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	zephir_get_global(&_ENV, SS("_ENV") TSRMLS_CC);
	zephir_fetch_params(1, 1, 0, &key);



	ZEPHIR_OBS_VAR(v);
	if (zephir_array_isset_fetch(&v, _ENV, key, 0 TSRMLS_CC)) {
		RETURN_CCTOR(v);
	}
	ZEPHIR_CALL_FUNCTION(&v, "getenv", NULL, 36, key);
	zephir_check_call_status();
	if (!ZEPHIR_IS_FALSE_IDENTICAL(v)) {
		RETURN_CCTOR(v);
	}
	ZEPHIR_OBS_NVAR(v);
	if (zephir_array_isset_fetch(&v, _SERVER, key, 0 TSRMLS_CC)) {
		RETURN_CCTOR(v);
	}
	RETURN_MM_STRING("", 1);

}

PHP_METHOD(Consulate_Config, getDefaultConfig) {

	zval *config = NULL, *addr = NULL, *token = NULL, *auth = NULL, *CAFile = NULL, *certFile = NULL, *keyFile = NULL, *v = NULL, *_1 = NULL, *_2$$9;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(config);
	zephir_create_array(config, 2, 0 TSRMLS_CC);
	add_assoc_stringl_ex(config, SS("address"), SL("127.0.0.1:8500"), 1);
	add_assoc_stringl_ex(config, SS("scheme"), SL("http"), 1);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "CONSUL_HTTP_ADDR", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&addr, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(addr, "")) {
		zephir_array_update_string(&config, SL("address"), &addr, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "CONSUL_HTTP_TOKEN", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&token, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(token, "")) {
		zephir_array_update_string(&config, SL("token"), &token, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "CONSUL_HTTP_AUTH", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&auth, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(auth, "")) {
		zephir_array_update_string(&config, SL("httpAuth"), &auth, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "CONSUL_CACERT", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&CAFile, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(CAFile, "")) {
		zephir_array_update_string(&config, SL("CAFile"), &CAFile, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "CONSUL_CLIENT_CERT", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&certFile, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(certFile, "")) {
		zephir_array_update_string(&config, SL("certFile"), &certFile, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "CONSUL_CLIENT_KEY", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&keyFile, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(keyFile, "")) {
		zephir_array_update_string(&config, SL("keyFile"), &keyFile, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "CONSUL_HTTP_SSL", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&v, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (zephir_get_boolval(v)) {
		ZEPHIR_INIT_VAR(_2$$9);
		ZVAL_STRING(_2$$9, "https", 1);
		zephir_array_update_string(&config, SL("scheme"), &_2$$9, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "CONSUL_HTTP_SSL_VERIFY", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&v, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (zephir_get_boolval(v)) {
		zephir_array_update_string(&config, SL("insecureSkipVerify"), &ZEPHIR_GLOBAL(global_true), PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "CONSUL_TLS_SERVER_NAME", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_STATIC(&v, "getvaluefromenvironment", &_0, 37, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	if (!ZEPHIR_IS_STRING(v, "")) {
		zephir_array_update_string(&config, SL("address"), &v, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(config);

}

