PHP_ARG_ENABLE(consulate, whether to enable consulate, [ --enable-consulate   Enable Consulate])

if test "$PHP_CONSULATE" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, CONSULATE_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_CONSULATE, 1, [Whether you have Consulate])
	consulate_sources="consulate.c kernel/main.c kernel/memory.c kernel/exception.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/string.c kernel/fcall.c kernel/extended/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c consulate/model.zep.c
	consulate/api/endpoint.zep.c
	consulate/exception.zep.c
	consulate/values.zep.c
	consulate/api/agent/servicecheck.zep.c
	consulate/api/acl.zep.c
	consulate/api/agent.zep.c
	consulate/api/agent/check.zep.c
	consulate/api/agent/checkregistration.zep.c
	consulate/api/agent/exception.zep.c
	consulate/api/agent/gaugevalue.zep.c
	consulate/api/agent/member.zep.c
	consulate/api/agent/metricsinfo.zep.c
	consulate/api/agent/pointvalue.zep.c
	consulate/api/agent/sampledvalue.zep.c
	consulate/api/agent/service.zep.c
	consulate/api/agent/serviceregistration.zep.c
	consulate/api/catalog.zep.c
	consulate/api/catalog/node.zep.c
	consulate/api/coordinate.zep.c
	consulate/api/event.zep.c
	consulate/api/exception.zep.c
	consulate/api/health.zep.c
	consulate/api/health/check.zep.c
	consulate/api/health/exception.zep.c
	consulate/api/health/service.zep.c
	consulate/api/kv.zep.c
	consulate/api/kv/exception.zep.c
	consulate/api/kv/pair.zep.c
	consulate/api/operator.zep.c
	consulate/api/query.zep.c
	consulate/api/session.zep.c
	consulate/api/snapshot.zep.c
	consulate/api/status.zep.c
	consulate/client.zep.c
	consulate/config.zep.c
	consulate/http/auth.zep.c
	consulate/http/client/curl.zep.c
	consulate/http/client/exception.zep.c
	consulate/http/exception.zep.c
	consulate/http/headers.zep.c
	consulate/http/params.zep.c
	consulate/http/request.zep.c
	consulate/http/response.zep.c
	consulate/http/uri.zep.c
	consulate/querymeta.zep.c
	consulate/queryoptions.zep.c
	consulate/writemeta.zep.c
	consulate/writeoptions.zep.c
	consulate/0__closure.zep.c
	consulate/1__closure.zep.c "
	PHP_NEW_EXTENSION(consulate, $consulate_sources, $ext_shared,, )
	PHP_SUBST(CONSULATE_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([consulate], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([consulate], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/consulate], [php_CONSULATE.h])

fi
