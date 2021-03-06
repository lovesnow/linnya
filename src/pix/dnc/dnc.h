#ifndef LY_3DNC_H
#define LY_3DNC_H

/*
 * HEADERS
 */
#include "dnc_cov.h"
#include "dnc_lrc.h"
#include "dnc_config.h"

/*
 * FUNCTIONS
 */
const gchar*	g_module_check_init		(GModule *module);
void			g_module_unload			(GModule *module);

#endif
