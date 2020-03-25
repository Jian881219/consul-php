
extern zend_class_entry *consulate_api_agent_sampledvalue_ce;

ZEPHIR_INIT_CLASS(Consulate_Api_Agent_SampledValue);

PHP_METHOD(Consulate_Api_Agent_SampledValue, getName);
PHP_METHOD(Consulate_Api_Agent_SampledValue, setName);
PHP_METHOD(Consulate_Api_Agent_SampledValue, getCount);
PHP_METHOD(Consulate_Api_Agent_SampledValue, setCount);
PHP_METHOD(Consulate_Api_Agent_SampledValue, getSum);
PHP_METHOD(Consulate_Api_Agent_SampledValue, setSum);
PHP_METHOD(Consulate_Api_Agent_SampledValue, getMin);
PHP_METHOD(Consulate_Api_Agent_SampledValue, setMin);
PHP_METHOD(Consulate_Api_Agent_SampledValue, getMax);
PHP_METHOD(Consulate_Api_Agent_SampledValue, setMax);
PHP_METHOD(Consulate_Api_Agent_SampledValue, getMean);
PHP_METHOD(Consulate_Api_Agent_SampledValue, setMean);
PHP_METHOD(Consulate_Api_Agent_SampledValue, getStddev);
PHP_METHOD(Consulate_Api_Agent_SampledValue, setStddev);
PHP_METHOD(Consulate_Api_Agent_SampledValue, getLabels);
PHP_METHOD(Consulate_Api_Agent_SampledValue, setLabels);
zend_object *zephir_init_properties_Consulate_Api_Agent_SampledValue(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_sampledvalue_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_sampledvalue_setcount, 0, 0, 1)
	ZEND_ARG_INFO(0, count)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_sampledvalue_setsum, 0, 0, 1)
	ZEND_ARG_INFO(0, sum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_sampledvalue_setmin, 0, 0, 1)
	ZEND_ARG_INFO(0, min)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_sampledvalue_setmax, 0, 0, 1)
	ZEND_ARG_INFO(0, max)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_sampledvalue_setmean, 0, 0, 1)
	ZEND_ARG_INFO(0, mean)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_sampledvalue_setstddev, 0, 0, 1)
	ZEND_ARG_INFO(0, stddev)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_consulate_api_agent_sampledvalue_setlabels, 0, 0, 1)
	ZEND_ARG_INFO(0, labels)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(consulate_api_agent_sampledvalue_method_entry) {
	PHP_ME(Consulate_Api_Agent_SampledValue, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, setName, arginfo_consulate_api_agent_sampledvalue_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, getCount, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, setCount, arginfo_consulate_api_agent_sampledvalue_setcount, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, getSum, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, setSum, arginfo_consulate_api_agent_sampledvalue_setsum, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, getMin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, setMin, arginfo_consulate_api_agent_sampledvalue_setmin, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, getMax, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, setMax, arginfo_consulate_api_agent_sampledvalue_setmax, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, getMean, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, setMean, arginfo_consulate_api_agent_sampledvalue_setmean, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, getStddev, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, setStddev, arginfo_consulate_api_agent_sampledvalue_setstddev, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, getLabels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Consulate_Api_Agent_SampledValue, setLabels, arginfo_consulate_api_agent_sampledvalue_setlabels, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
