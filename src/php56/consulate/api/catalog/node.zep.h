
extern zend_class_entry *consulate_api_catalog_node_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Catalog_Node);

PHP_METHOD(Consulate_Api_Catalog_Node, getID);
PHP_METHOD(Consulate_Api_Catalog_Node, setID);
PHP_METHOD(Consulate_Api_Catalog_Node, getNode);
PHP_METHOD(Consulate_Api_Catalog_Node, setNode);
PHP_METHOD(Consulate_Api_Catalog_Node, getAddress);
PHP_METHOD(Consulate_Api_Catalog_Node, setAddress);
PHP_METHOD(Consulate_Api_Catalog_Node, getDatacenter);
PHP_METHOD(Consulate_Api_Catalog_Node, setDatacenter);
PHP_METHOD(Consulate_Api_Catalog_Node, getTaggedAddresses);
PHP_METHOD(Consulate_Api_Catalog_Node, setTaggedAddresses);
PHP_METHOD(Consulate_Api_Catalog_Node, getMeta);
PHP_METHOD(Consulate_Api_Catalog_Node, setMeta);
PHP_METHOD(Consulate_Api_Catalog_Node, getCreateIndex);
PHP_METHOD(Consulate_Api_Catalog_Node, setCreateIndex);
PHP_METHOD(Consulate_Api_Catalog_Node, getModifyIndex);
PHP_METHOD(Consulate_Api_Catalog_Node, setModifyIndex);
zend_object_value zephir_init_properties_Consulate_Api_Catalog_Node(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_catalog_node_setid, 0, 0, 1)
	ZEND_ARG_INFO(0, iD)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_catalog_node_setnode, 0, 0, 1)
	ZEND_ARG_INFO(0, node)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_catalog_node_setaddress, 0, 0, 1)
	ZEND_ARG_INFO(0, address)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_catalog_node_setdatacenter, 0, 0, 1)
	ZEND_ARG_INFO(0, datacenter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_catalog_node_settaggedaddresses, 0, 0, 1)
	ZEND_ARG_INFO(0, taggedAddresses)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_catalog_node_setmeta, 0, 0, 1)
	ZEND_ARG_INFO(0, meta)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_catalog_node_setcreateindex, 0, 0, 1)
	ZEND_ARG_INFO(0, createIndex)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_catalog_node_setmodifyindex, 0, 0, 1)
	ZEND_ARG_INFO(0, modifyIndex)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_catalog_node_method_entry) {
	PHP_ME(Consulate_Api_Catalog_Node, getID, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, setID, arginfo_consulate_api_catalog_node_setid, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, getNode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, setNode, arginfo_consulate_api_catalog_node_setnode, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, getAddress, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, setAddress, arginfo_consulate_api_catalog_node_setaddress, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, getDatacenter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, setDatacenter, arginfo_consulate_api_catalog_node_setdatacenter, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, getTaggedAddresses, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, setTaggedAddresses, arginfo_consulate_api_catalog_node_settaggedaddresses, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, getMeta, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, setMeta, arginfo_consulate_api_catalog_node_setmeta, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, getCreateIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, setCreateIndex, arginfo_consulate_api_catalog_node_setcreateindex, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, getModifyIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Catalog_Node, setModifyIndex, arginfo_consulate_api_catalog_node_setmodifyindex, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
