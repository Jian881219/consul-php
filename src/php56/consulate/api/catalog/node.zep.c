
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

	

	RETURN_MEMBER(getThis(), "iD");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setID) {

	zval *iD;

	zephir_fetch_params(0, 1, 0, &iD);



	zephir_update_property_this(getThis(), SL("iD"), iD TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getNode) {

	

	RETURN_MEMBER(getThis(), "node");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setNode) {

	zval *node;

	zephir_fetch_params(0, 1, 0, &node);



	zephir_update_property_this(getThis(), SL("node"), node TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getAddress) {

	

	RETURN_MEMBER(getThis(), "address");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setAddress) {

	zval *address;

	zephir_fetch_params(0, 1, 0, &address);



	zephir_update_property_this(getThis(), SL("address"), address TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getDatacenter) {

	

	RETURN_MEMBER(getThis(), "datacenter");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setDatacenter) {

	zval *datacenter;

	zephir_fetch_params(0, 1, 0, &datacenter);



	zephir_update_property_this(getThis(), SL("datacenter"), datacenter TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getTaggedAddresses) {

	

	RETURN_MEMBER(getThis(), "taggedAddresses");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setTaggedAddresses) {

	zval *taggedAddresses;

	zephir_fetch_params(0, 1, 0, &taggedAddresses);



	zephir_update_property_this(getThis(), SL("taggedAddresses"), taggedAddresses TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getMeta) {

	

	RETURN_MEMBER(getThis(), "meta");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setMeta) {

	zval *meta;

	zephir_fetch_params(0, 1, 0, &meta);



	zephir_update_property_this(getThis(), SL("meta"), meta TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getCreateIndex) {

	

	RETURN_MEMBER(getThis(), "createIndex");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setCreateIndex) {

	zval *createIndex;

	zephir_fetch_params(0, 1, 0, &createIndex);



	zephir_update_property_this(getThis(), SL("createIndex"), createIndex TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Consulate_Api_Catalog_Node, getModifyIndex) {

	

	RETURN_MEMBER(getThis(), "modifyIndex");

}

PHP_METHOD(Consulate_Api_Catalog_Node, setModifyIndex) {

	zval *modifyIndex;

	zephir_fetch_params(0, 1, 0, &modifyIndex);



	zephir_update_property_this(getThis(), SL("modifyIndex"), modifyIndex TSRMLS_CC);
	RETURN_THISW();

}

zend_object_value zephir_init_properties_Consulate_Api_Catalog_Node(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_2, *_1$$3, *_3$$4;

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

		_0 = zephir_fetch_nproperty_this(this_ptr, SL("meta"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(getThis(), SL("meta"), _1$$3 TSRMLS_CC);
		}
		_2 = zephir_fetch_nproperty_this(this_ptr, SL("taggedAddresses"), PH_NOISY_CC);
		if (Z_TYPE_P(_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(_3$$4);
			array_init(_3$$4);
			zephir_update_property_this(getThis(), SL("taggedAddresses"), _3$$4 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return retval;
	}

}

