
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

	

	RETURN_MEMBER(getThis(), "name");

}

PHP_METHOD(Consulate_Api_Agent_Member, setName) {

	zval *name;

	zephir_fetch_params(0, 1, 0, &name);



	zephir_update_property_this(getThis(), SL("name"), name TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getAddr) {

	

	RETURN_MEMBER(getThis(), "addr");

}

PHP_METHOD(Consulate_Api_Agent_Member, setAddr) {

	zval *addr;

	zephir_fetch_params(0, 1, 0, &addr);



	zephir_update_property_this(getThis(), SL("addr"), addr TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getPort) {

	

	RETURN_MEMBER(getThis(), "port");

}

PHP_METHOD(Consulate_Api_Agent_Member, setPort) {

	zval *port;

	zephir_fetch_params(0, 1, 0, &port);



	zephir_update_property_this(getThis(), SL("port"), port TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getTags) {

	

	RETURN_MEMBER(getThis(), "tags");

}

PHP_METHOD(Consulate_Api_Agent_Member, setTags) {

	zval *tags;

	zephir_fetch_params(0, 1, 0, &tags);



	zephir_update_property_this(getThis(), SL("tags"), tags TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getStatus) {

	

	RETURN_MEMBER(getThis(), "status");

}

PHP_METHOD(Consulate_Api_Agent_Member, setStatus) {

	zval *status;

	zephir_fetch_params(0, 1, 0, &status);



	zephir_update_property_this(getThis(), SL("status"), status TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getProtocolMin) {

	

	RETURN_MEMBER(getThis(), "protocolMin");

}

PHP_METHOD(Consulate_Api_Agent_Member, setProtocolMin) {

	zval *protocolMin;

	zephir_fetch_params(0, 1, 0, &protocolMin);



	zephir_update_property_this(getThis(), SL("protocolMin"), protocolMin TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getProtocolMax) {

	

	RETURN_MEMBER(getThis(), "protocolMax");

}

PHP_METHOD(Consulate_Api_Agent_Member, setProtocolMax) {

	zval *protocolMax;

	zephir_fetch_params(0, 1, 0, &protocolMax);



	zephir_update_property_this(getThis(), SL("protocolMax"), protocolMax TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getProtocolCur) {

	

	RETURN_MEMBER(getThis(), "protocolCur");

}

PHP_METHOD(Consulate_Api_Agent_Member, setProtocolCur) {

	zval *protocolCur;

	zephir_fetch_params(0, 1, 0, &protocolCur);



	zephir_update_property_this(getThis(), SL("protocolCur"), protocolCur TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getDelegateMin) {

	

	RETURN_MEMBER(getThis(), "delegateMin");

}

PHP_METHOD(Consulate_Api_Agent_Member, setDelegateMin) {

	zval *delegateMin;

	zephir_fetch_params(0, 1, 0, &delegateMin);



	zephir_update_property_this(getThis(), SL("delegateMin"), delegateMin TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getDelegateMax) {

	

	RETURN_MEMBER(getThis(), "delegateMax");

}

PHP_METHOD(Consulate_Api_Agent_Member, setDelegateMax) {

	zval *delegateMax;

	zephir_fetch_params(0, 1, 0, &delegateMax);



	zephir_update_property_this(getThis(), SL("delegateMax"), delegateMax TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Agent_Member, getDelegateCur) {

	

	RETURN_MEMBER(getThis(), "delegateCur");

}

PHP_METHOD(Consulate_Api_Agent_Member, setDelegateCur) {

	zval *delegateCur;

	zephir_fetch_params(0, 1, 0, &delegateCur);



	zephir_update_property_this(getThis(), SL("delegateCur"), delegateCur TSRMLS_CC);
	RETURN_THISW();

}

zend_object_value zephir_init_properties_Consulate_Api_Agent_Member(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_1$$3;

		ZEPHIR_MM_GROW();
	
	{
		zval zthis       = zval_used_for_init;
		zval *this_ptr   = &zthis;
		zend_object* obj = ecalloc(1, sizeof(zend_object));
		zend_object_value retval;

		zend_object_std_init(obj, class_type TSRMLS_CC);
		object_properties_init(obj, class_type);
		retval.handle   = zend_objects_store_put(obj, (zend_objects_store_dtor_t)zend_objects_destroy_object, zephir_free_object_storage, NULL TSRMLS_CC);
		retval.handlers = zend_get_std_object_handlers();

		Z_TYPE(zthis)   = IS_OBJECT;
		Z_OBJVAL(zthis) = retval;

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("tags"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("tags"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

