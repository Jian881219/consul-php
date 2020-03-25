
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


ZEPHIR_INIT_CLASS(Consulate_WriteOptions) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate, WriteOptions, consulate, writeoptions, consulate_model_ce, consulate_writeoptions_method_entry, 0);

	zend_declare_property_string(consulate_writeoptions_ce, SL("datacenter"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_writeoptions_ce, SL("token"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_writeoptions_ce, SL("relayFactor"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Consulate_WriteOptions, getDatacenter) {

	

	RETURN_MEMBER(getThis(), "datacenter");

}

PHP_METHOD(Consulate_WriteOptions, setDatacenter) {

	zval *datacenter;

	zephir_fetch_params(0, 1, 0, &datacenter);



	zephir_update_property_this(getThis(), SL("datacenter"), datacenter TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_WriteOptions, getToken) {

	

	RETURN_MEMBER(getThis(), "token");

}

PHP_METHOD(Consulate_WriteOptions, setToken) {

	zval *token;

	zephir_fetch_params(0, 1, 0, &token);



	zephir_update_property_this(getThis(), SL("token"), token TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_WriteOptions, getRelayFactor) {

	

	RETURN_MEMBER(getThis(), "relayFactor");

}

PHP_METHOD(Consulate_WriteOptions, setRelayFactor) {

	zval *relayFactor;

	zephir_fetch_params(0, 1, 0, &relayFactor);



	zephir_update_property_this(getThis(), SL("relayFactor"), relayFactor TSRMLS_CC);
	RETURN_THISW();

}

