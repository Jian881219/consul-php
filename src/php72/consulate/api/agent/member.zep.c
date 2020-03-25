
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Agent_Member) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Agent, Member, consulate, api_agent_member, consulate_model_ce, consulate_api_agent_member_method_entry, 0);

	zend_declare_property_string(consulate_api_agent_member_ce, SL("name"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_agent_member_ce, SL("addr"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_member_ce, SL("port"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_agent_member_ce, SL("tags"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_member_ce, SL("status"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_member_ce, SL("protocolMin"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_member_ce, SL("protocolMax"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_member_ce, SL("protocolCur"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_member_ce, SL("delegateMin"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_member_ce, SL("delegateMax"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(consulate_api_agent_member_ce, SL("delegateCur"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_agent_member_ce->create_object = zephir_init_properties_Consulate_Api_Agent_Member;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Agent_Member, getName) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_Member, setName) {

	zval *name, name_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_zval(this_ptr, SL("name"), name);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getAddr) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "addr");

}

PHP_METHOD(Consulate_Api_Agent_Member, setAddr) {

	zval *addr, addr_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&addr_sub);

	zephir_fetch_params(0, 1, 0, &addr);



	zephir_update_property_zval(this_ptr, SL("addr"), addr);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getPort) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "port");

}

PHP_METHOD(Consulate_Api_Agent_Member, setPort) {

	zval *port, port_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&port_sub);

	zephir_fetch_params(0, 1, 0, &port);



	zephir_update_property_zval(this_ptr, SL("port"), port);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getTags) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "tags");

}

PHP_METHOD(Consulate_Api_Agent_Member, setTags) {

	zval *tags, tags_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&tags_sub);

	zephir_fetch_params(0, 1, 0, &tags);



	zephir_update_property_zval(this_ptr, SL("tags"), tags);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getStatus) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "status");

}

PHP_METHOD(Consulate_Api_Agent_Member, setStatus) {

	zval *status, status_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&status_sub);

	zephir_fetch_params(0, 1, 0, &status);



	zephir_update_property_zval(this_ptr, SL("status"), status);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getProtocolMin) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "protocolMin");

}

PHP_METHOD(Consulate_Api_Agent_Member, setProtocolMin) {

	zval *protocolMin, protocolMin_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&protocolMin_sub);

	zephir_fetch_params(0, 1, 0, &protocolMin);



	zephir_update_property_zval(this_ptr, SL("protocolMin"), protocolMin);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getProtocolMax) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "protocolMax");

}

PHP_METHOD(Consulate_Api_Agent_Member, setProtocolMax) {

	zval *protocolMax, protocolMax_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&protocolMax_sub);

	zephir_fetch_params(0, 1, 0, &protocolMax);



	zephir_update_property_zval(this_ptr, SL("protocolMax"), protocolMax);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getProtocolCur) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "protocolCur");

}

PHP_METHOD(Consulate_Api_Agent_Member, setProtocolCur) {

	zval *protocolCur, protocolCur_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&protocolCur_sub);

	zephir_fetch_params(0, 1, 0, &protocolCur);



	zephir_update_property_zval(this_ptr, SL("protocolCur"), protocolCur);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getDelegateMin) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "delegateMin");

}

PHP_METHOD(Consulate_Api_Agent_Member, setDelegateMin) {

	zval *delegateMin, delegateMin_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&delegateMin_sub);

	zephir_fetch_params(0, 1, 0, &delegateMin);



	zephir_update_property_zval(this_ptr, SL("delegateMin"), delegateMin);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getDelegateMax) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "delegateMax");

}

PHP_METHOD(Consulate_Api_Agent_Member, setDelegateMax) {

	zval *delegateMax, delegateMax_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&delegateMax_sub);

	zephir_fetch_params(0, 1, 0, &delegateMax);



	zephir_update_property_zval(this_ptr, SL("delegateMax"), delegateMax);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getDelegateCur) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "delegateCur");

}

PHP_METHOD(Consulate_Api_Agent_Member, setDelegateCur) {

	zval *delegateCur, delegateCur_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&delegateCur_sub);

	zephir_fetch_params(0, 1, 0, &delegateCur);



	zephir_update_property_zval(this_ptr, SL("delegateCur"), delegateCur);
	RETURN_THISW();

}

zend_object *zephir_init_properties_Consulate_Api_Agent_Member(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("tags"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("tags"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

