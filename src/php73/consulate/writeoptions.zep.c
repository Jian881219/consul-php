
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

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "datacenter");

}

PHP_METHOD(Consulate_WriteOptions, setDatacenter) {

	zval *datacenter, datacenter_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&datacenter_sub);

	zephir_fetch_params(0, 1, 0, &datacenter);



	zephir_update_property_zval(this_ptr, SL("datacenter"), datacenter);
	RETURN_THISW();

}

PHP_METHOD(Consulate_WriteOptions, getToken) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "token");

}

PHP_METHOD(Consulate_WriteOptions, setToken) {

	zval *token, token_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&token_sub);

	zephir_fetch_params(0, 1, 0, &token);



	zephir_update_property_zval(this_ptr, SL("token"), token);
	RETURN_THISW();

}

PHP_METHOD(Consulate_WriteOptions, getRelayFactor) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "relayFactor");

}

PHP_METHOD(Consulate_WriteOptions, setRelayFactor) {

	zval *relayFactor, relayFactor_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&relayFactor_sub);

	zephir_fetch_params(0, 1, 0, &relayFactor);



	zephir_update_property_zval(this_ptr, SL("relayFactor"), relayFactor);
	RETURN_THISW();

}

