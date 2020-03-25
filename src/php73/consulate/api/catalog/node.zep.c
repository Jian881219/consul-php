
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


ZEPHIR_INIT_CLASS(Consulate_Api_Catalog_Node) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api\\Catalog, Node, consulate, api_catalog_node, consulate_model_ce, consulate_api_catalog_node_method_entry, 0);

	zend_declare_property_string(consulate_api_catalog_node_ce, SL("iD"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_catalog_node_ce, SL("node"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_catalog_node_ce, SL("address"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(consulate_api_catalog_node_ce, SL("datacenter"), "", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_catalog_node_ce, SL("taggedAddresses"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_catalog_node_ce, SL("meta"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_catalog_node_ce, SL("createIndex"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(consulate_api_catalog_node_ce, SL("modifyIndex"), ZEND_ACC_PROTECTED TSRMLS_CC);

	consulate_api_catalog_node_ce->create_object = zephir_init_properties_Consulate_Api_Catalog_Node;
	return SUCCESS;

}

PHP_METHOD(Consulate_Api_Catalog_Node, getID) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "iD");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setID) {

	zval *iD, iD_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&iD_sub);

	zephir_fetch_params(0, 1, 0, &iD);



	zephir_update_property_zval(this_ptr, SL("iD"), iD);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getNode) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "node");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setNode) {

	zval *node, node_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&node_sub);

	zephir_fetch_params(0, 1, 0, &node);



	zephir_update_property_zval(this_ptr, SL("node"), node);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getAddress) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "address");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setAddress) {

	zval *address, address_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&address_sub);

	zephir_fetch_params(0, 1, 0, &address);



	zephir_update_property_zval(this_ptr, SL("address"), address);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getDatacenter) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "datacenter");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setDatacenter) {

	zval *datacenter, datacenter_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&datacenter_sub);

	zephir_fetch_params(0, 1, 0, &datacenter);



	zephir_update_property_zval(this_ptr, SL("datacenter"), datacenter);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getTaggedAddresses) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "taggedAddresses");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setTaggedAddresses) {

	zval *taggedAddresses, taggedAddresses_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&taggedAddresses_sub);

	zephir_fetch_params(0, 1, 0, &taggedAddresses);



	zephir_update_property_zval(this_ptr, SL("taggedAddresses"), taggedAddresses);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getMeta) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "meta");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setMeta) {

	zval *meta, meta_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&meta_sub);

	zephir_fetch_params(0, 1, 0, &meta);



	zephir_update_property_zval(this_ptr, SL("meta"), meta);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getCreateIndex) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "createIndex");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setCreateIndex) {

	zval *createIndex, createIndex_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&createIndex_sub);

	zephir_fetch_params(0, 1, 0, &createIndex);



	zephir_update_property_zval(this_ptr, SL("createIndex"), createIndex);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getModifyIndex) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "modifyIndex");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setModifyIndex) {

	zval *modifyIndex, modifyIndex_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&modifyIndex_sub);

	zephir_fetch_params(0, 1, 0, &modifyIndex);



	zephir_update_property_zval(this_ptr, SL("modifyIndex"), modifyIndex);
	RETURN_THISW();

}

zend_object *zephir_init_properties_Consulate_Api_Catalog_Node(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _2, _1$$3, _3$$4;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_3$$4);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("meta"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("meta"), &_1$$3);
		}
		zephir_read_property(&_2, this_ptr, SL("taggedAddresses"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_3$$4);
			array_init(&_3$$4);
			zephir_update_property_zval(this_ptr, SL("taggedAddresses"), &_3$$4);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

