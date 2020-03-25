
extern zend_class_entry *consulate_api_agent_pointvalue_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_PointValue);

PHP_METHOD(Consulate_Api_Agent_PointValue, getName);
PHP_METHOD(Consulate_Api_Agent_PointValue, setName);
PHP_METHOD(Consulate_Api_Agent_PointValue, getPoints);
PHP_METHOD(Consulate_Api_Agent_PointValue, setPoints);
zend_object *zephir_init_properties_Consulate_Api_Agent_PointValue(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_pointvalue_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_pointvalue_setpoints, 0, 0, 1)
	ZEND_ARG_INFO(0, points)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_pointvalue_method_entry) {
	PHP_ME(Consulate_Api_Agent_PointValue, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_PointValue, setName, arginfo_consulate_api_agent_pointvalue_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_PointValue, getPoints, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_PointValue, setPoints, arginfo_consulate_api_agent_pointvalue_setpoints, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
