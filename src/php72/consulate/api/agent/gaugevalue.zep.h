
extern zend_class_entry *consulate_api_agent_gaugevalue_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_GaugeValue);

PHP_METHOD(Consulate_Api_Agent_GaugeValue, getName);
PHP_METHOD(Consulate_Api_Agent_GaugeValue, setName);
PHP_METHOD(Consulate_Api_Agent_GaugeValue, getValue);
PHP_METHOD(Consulate_Api_Agent_GaugeValue, setValue);
PHP_METHOD(Consulate_Api_Agent_GaugeValue, getLabels);
PHP_METHOD(Consulate_Api_Agent_GaugeValue, setLabels);
zend_object *zephir_init_properties_Consulate_Api_Agent_GaugeValue(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_gaugevalue_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_gaugevalue_setvalue, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_gaugevalue_setlabels, 0, 0, 1)
	ZEND_ARG_INFO(0, labels)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_gaugevalue_method_entry) {
	PHP_ME(Consulate_Api_Agent_GaugeValue, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_GaugeValue, setName, arginfo_consulate_api_agent_gaugevalue_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_GaugeValue, getValue, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_GaugeValue, setValue, arginfo_consulate_api_agent_gaugevalue_setvalue, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_GaugeValue, getLabels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_GaugeValue, setLabels, arginfo_consulate_api_agent_gaugevalue_setlabels, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
