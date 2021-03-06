/*
 * xed-time-plugin.h
 *
 * Copyright (C) 2002-2005 - Paolo Maggi
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * $Id$
 */

#ifndef __XED_TIME_PLUGIN_H__
#define __XED_TIME_PLUGIN_H__

#include <glib.h>
#include <glib-object.h>
#include <libpeas/peas-extension-base.h>
#include <libpeas/peas-object-module.h>

G_BEGIN_DECLS

#define XED_TYPE_TIME_PLUGIN            (xed_time_plugin_get_type ())
#define XED_TIME_PLUGIN(o)              (G_TYPE_CHECK_INSTANCE_CAST ((o), XED_TYPE_TIME_PLUGIN, XedTimePlugin))
#define XED_TIME_PLUGIN_CLASS(k)        (G_TYPE_CHECK_CLASS_CAST((k), XED_TYPE_TIME_PLUGIN, XedTimePluginClass))
#define XED_IS_TIME_PLUGIN(o)           (G_TYPE_CHECK_INSTANCE_TYPE ((o), XED_TYPE_TIME_PLUGIN))
#define XED_IS_TIME_PLUGIN_CLASS(k)     (G_TYPE_CHECK_CLASS_TYPE ((k), XED_TYPE_TIME_PLUGIN))
#define XED_TIME_PLUGIN_GET_CLASS(o)    (G_TYPE_INSTANCE_GET_CLASS ((o), XED_TYPE_TIME_PLUGIN, XedTimePluginClass))

typedef struct _XedTimePlugin        XedTimePlugin;
typedef struct _XedTimePluginPrivate XedTimePluginPrivate;
typedef struct _XedTimePluginClass   XedTimePluginClass;

struct _XedTimePlugin
{
    PeasExtensionBase parent_instance;

    /*< private >*/
    XedTimePluginPrivate *priv;
};

struct _XedTimePluginClass
{
    PeasExtensionBaseClass parent_class;
};

GType xed_time_plugin_get_type (void) G_GNUC_CONST;

/* All the plugins must implement this function */
G_MODULE_EXPORT void peas_register_types (PeasObjectModule *module);

G_END_DECLS

#endif /* __XED_TIME_PLUGIN_H__ */
