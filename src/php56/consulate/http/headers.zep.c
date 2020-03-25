
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


ZEPHIR_INIT_CLASS(Consulate_Http_Headers) {

	ZEPHIR_REGISTER_CLASS_EX(Consulate\\Http, Headers, consulate, http_headers, consulate_values_ce, NULL, 0);

	return SUCCESS;

}

