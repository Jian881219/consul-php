
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


ZEPHIR_INIT_CLASS(Consulate_Http_Client_Exception) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Http\\Client, Exception, consulate, http_client_exception, consulate_exception_ce, NULL, 0);

	return SUCCESS;

}

