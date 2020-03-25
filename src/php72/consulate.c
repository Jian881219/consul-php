
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "consulate.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *consulate_model_ce;
zend_class_entry *consulate_api_endpoint_ce;
zend_class_entry *consulate_exception_ce;
zend_class_entry *consulate_values_ce;
zend_class_entry *consulate_api_agent_servicecheck_ce;
zend_class_entry *consulate_0__closure_ce;
zend_class_entry *consulate_1__closure_ce;
zend_class_entry *consulate_api_acl_ce;
zend_class_entry *consulate_api_agent_ce;
zend_class_entry *consulate_api_agent_check_ce;
zend_class_entry *consulate_api_agent_checkregistration_ce;
zend_class_entry *consulate_api_agent_exception_ce;
zend_class_entry *consulate_api_agent_gaugevalue_ce;
zend_class_entry *consulate_api_agent_member_ce;
zend_class_entry *consulate_api_agent_metricsinfo_ce;
zend_class_entry *consulate_api_agent_pointvalue_ce;
zend_class_entry *consulate_api_agent_sampledvalue_ce;
zend_class_entry *consulate_api_agent_service_ce;
zend_class_entry *consulate_api_agent_serviceregistration_ce;
zend_class_entry *consulate_api_catalog_ce;
zend_class_entry *consulate_api_catalog_node_ce;
zend_class_entry *consulate_api_coordinate_ce;
zend_class_entry *consulate_api_event_ce;
zend_class_entry *consulate_api_exception_ce;
zend_class_entry *consulate_api_health_ce;
zend_class_entry *consulate_api_health_check_ce;
zend_class_entry *consulate_api_health_exception_ce;
zend_class_entry *consulate_api_health_service_ce;
zend_class_entry *consulate_api_kv_ce;
zend_class_entry *consulate_api_kv_exception_ce;
zend_class_entry *consulate_api_kv_pair_ce;
zend_class_entry *consulate_api_operator_ce;
zend_class_entry *consulate_api_query_ce;
zend_class_entry *consulate_api_session_ce;
zend_class_entry *consulate_api_snapshot_ce;
zend_class_entry *consulate_api_status_ce;
zend_class_entry *consulate_client_ce;
zend_class_entry *consulate_config_ce;
zend_class_entry *consulate_http_auth_ce;
zend_class_entry *consulate_http_client_curl_ce;
zend_class_entry *consulate_http_client_exception_ce;
zend_class_entry *consulate_http_exception_ce;
zend_class_entry *consulate_http_headers_ce;
zend_class_entry *consulate_http_params_ce;
zend_class_entry *consulate_http_request_ce;
zend_class_entry *consulate_http_response_ce;
zend_class_entry *consulate_http_uri_ce;
zend_class_entry *consulate_querymeta_ce;
zend_class_entry *consulate_queryoptions_ce;
zend_class_entry *consulate_writemeta_ce;
zend_class_entry *consulate_writeoptions_ce;

ZEND_DECLARE_MODULE_GLOBALS(consulate)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(consulate)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Consulate_Model);
	ZEPHIR_INIT(Consulate_Api_Endpoint);
	ZEPHIR_INIT(Consulate_Exception);
	ZEPHIR_INIT(Consulate_Values);
	ZEPHIR_INIT(Consulate_Api_Agent_ServiceCheck);
	ZEPHIR_INIT(Consulate_Api_Acl);
	ZEPHIR_INIT(Consulate_Api_Agent);
	ZEPHIR_INIT(Consulate_Api_Agent_Check);
	ZEPHIR_INIT(Consulate_Api_Agent_CheckRegistration);
	ZEPHIR_INIT(Consulate_Api_Agent_Exception);
	ZEPHIR_INIT(Consulate_Api_Agent_GaugeValue);
	ZEPHIR_INIT(Consulate_Api_Agent_Member);
	ZEPHIR_INIT(Consulate_Api_Agent_MetricsInfo);
	ZEPHIR_INIT(Consulate_Api_Agent_PointValue);
	ZEPHIR_INIT(Consulate_Api_Agent_SampledValue);
	ZEPHIR_INIT(Consulate_Api_Agent_Service);
	ZEPHIR_INIT(Consulate_Api_Agent_ServiceRegistration);
	ZEPHIR_INIT(Consulate_Api_Catalog);
	ZEPHIR_INIT(Consulate_Api_Catalog_Node);
	ZEPHIR_INIT(Consulate_Api_Coordinate);
	ZEPHIR_INIT(Consulate_Api_Event);
	ZEPHIR_INIT(Consulate_Api_Exception);
	ZEPHIR_INIT(Consulate_Api_Health);
	ZEPHIR_INIT(Consulate_Api_Health_Check);
	ZEPHIR_INIT(Consulate_Api_Health_Exception);
	ZEPHIR_INIT(Consulate_Api_Health_Service);
	ZEPHIR_INIT(Consulate_Api_Kv);
	ZEPHIR_INIT(Consulate_Api_Kv_Exception);
	ZEPHIR_INIT(Consulate_Api_Kv_Pair);
	ZEPHIR_INIT(Consulate_Api_Operator);
	ZEPHIR_INIT(Consulate_Api_Query);
	ZEPHIR_INIT(Consulate_Api_Session);
	ZEPHIR_INIT(Consulate_Api_Snapshot);
	ZEPHIR_INIT(Consulate_Api_Status);
	ZEPHIR_INIT(Consulate_Client);
	ZEPHIR_INIT(Consulate_Config);
	ZEPHIR_INIT(Consulate_Http_Auth);
	ZEPHIR_INIT(Consulate_Http_Client_Curl);
	ZEPHIR_INIT(Consulate_Http_Client_Exception);
	ZEPHIR_INIT(Consulate_Http_Exception);
	ZEPHIR_INIT(Consulate_Http_Headers);
	ZEPHIR_INIT(Consulate_Http_Params);
	ZEPHIR_INIT(Consulate_Http_Request);
	ZEPHIR_INIT(Consulate_Http_Response);
	ZEPHIR_INIT(Consulate_Http_Uri);
	ZEPHIR_INIT(Consulate_QueryMeta);
	ZEPHIR_INIT(Consulate_QueryOptions);
	ZEPHIR_INIT(Consulate_WriteMeta);
	ZEPHIR_INIT(Consulate_WriteOptions);
	ZEPHIR_INIT(consulate_0__closure);
	ZEPHIR_INIT(consulate_1__closure);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(consulate)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_consulate_globals *consulate_globals TSRMLS_DC)
{
	consulate_globals->initialized = 0;

	/* Memory options */
	consulate_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	consulate_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	consulate_globals->cache_enabled = 1;

	/* Recursive Lock */
	consulate_globals->recursive_lock = 0;

	/* Static cache */
	memset(consulate_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_consulate_globals *consulate_globals TSRMLS_DC)
{
	
}

static PHP_RINIT_FUNCTION(consulate)
{
	zend_consulate_globals *consulate_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	consulate_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(consulate_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(consulate_globals_ptr TSRMLS_CC);

		zephir_init_static_properties_Consulate_Http_Uri(TSRMLS_C);
	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(consulate)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(consulate)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_CONSULATE_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_CONSULATE_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_CONSULATE_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_CONSULATE_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_CONSULATE_ZEPVERSION);
	php_info_print_table_end();
	
	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(consulate)
{
	php_zephir_init_globals(consulate_globals TSRMLS_CC);
	php_zephir_init_module_globals(consulate_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(consulate)
{
	
}


zend_function_entry php_consulate_functions[] = {
	ZEND_FE_END

};

zend_module_entry consulate_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_CONSULATE_EXTNAME,
	php_consulate_functions,
	PHP_MINIT(consulate),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(consulate),
#else
	NULL,
#endif
	PHP_RINIT(consulate),
	PHP_RSHUTDOWN(consulate),
	PHP_MINFO(consulate),
	PHP_CONSULATE_VERSION,
	ZEND_MODULE_GLOBALS(consulate),
	PHP_GINIT(consulate),
	PHP_GSHUTDOWN(consulate),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(consulate),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_CONSULATE
ZEND_GET_MODULE(consulate)
#endif
