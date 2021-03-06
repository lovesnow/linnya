/*
 * glb.h
 * This file is part of linnya
 *
 * Copyright (C) 2011 - Edward Yang
 *
 * linnya is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * linnya is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with linnya. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LY_GLB_H
#define LY_GLB_H

/*
 * HEADERS
 */
#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>
#include "../cox/cox.h"

/*
 * MACROS
 */
#define LY_GLB_PROG_UIXDIR	ly_glb_prog_uixdir
#define LY_GLB_PROG_PIXDIR	ly_glb_prog_pixdir
#define LY_GLB_PROG_THEMEDIR	ly_glb_prog_themedir
#define LY_GLB_USER_UIXDIR	ly_glb_user_uixdir
#define LY_GLB_USER_PIXDIR	ly_glb_user_pixdir
#define LY_GLB_USER_THEMEDIR	ly_glb_user_themedir

/*
 * VARIABLES
 */
const char		*ly_glb_prog_uixdir;
const char		*ly_glb_prog_pixdir;
const char		*ly_glb_prog_themedir;
const char		*ly_glb_user_uixdir;
const char		*ly_glb_user_pixdir;
const char		*ly_glb_user_themedir;

/*
 * FUNCTIONS
 */
void		ly_glb_init		(int *argc, char ***argv);
void		ly_glb_fina		();

#endif
