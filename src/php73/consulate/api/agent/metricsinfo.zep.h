
extern zend_class_entry *consulate_api_agent_metricsinfo_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_MetricsInfo);

PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getTimestamp);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setTimestamp);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getGauges);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setGauges);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getPoints);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setPoints);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getCounters);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setCounters);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, getSamples);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, setSamples);
PHP_METHOD(Consulate_Api_Agent_MetricsInfo, __construct);
zend_object *zephir_init_properties_Consulate_Api_Agent_MetricsInfo(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_metricsinfo_settimestamp, 0, 0, 1)
	ZEND_ARG_INFO(0, timestamp)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_metricsinfo_setgauges, 0, 0, 1)
	ZEND_ARG_INFO(0, gauges)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_metricsinfo_setpoints, 0, 0, 1)
	ZEND_ARG_INFO(0, points)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_metricsinfo_setcounters, 0, 0, 1)
	ZEND_ARG_INFO(0, counters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_metricsinfo_setsamples, 0, 0, 1)
	ZEND_ARG_INFO(0, samples)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_metricsinfo___construct, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_metricsinfo_method_entry) {
	PHP_ME(Consulate_Api_Agent_MetricsInfo, getTimestamp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, setTimestamp, arginfo_consulate_api_agent_metricsinfo_settimestamp, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, getGauges, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, setGauges, arginfo_consulate_api_agent_metricsinfo_setgauges, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, getPoints, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, setPoints, arginfo_consulate_api_agent_metricsinfo_setpoints, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, getCounters, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, setCounters, arginfo_consulate_api_agent_metricsinfo_setcounters, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, getSamples, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, setSamples, arginfo_consulate_api_agent_metricsinfo_setsamples, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_MetricsInfo, __construct, arginfo_consulate_api_agent_metricsinfo___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
