
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Consulate_Api_Snapshot) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Api, Snapshot, consulate, api_snapshot, consulate_api_endpoint_ce, NULL, 0);

	return SUCCESS;

}
