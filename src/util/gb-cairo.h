/* gb-cairo.h
 *
 * Copyright (C) 2014 Christian Hergert <christian@hergert.me>
 *
 * This file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GB_CAIRO_H
#define GB_CAIRO_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

cairo_region_t *gb_cairo_region_create_from_clip_extents (cairo_t            *cr);
void            gb_cairo_rounded_rectangle               (cairo_t            *cr,
                                                          const GdkRectangle *rect,
                                                          gint                x_radius,
                                                          gint                y_radius);

G_END_DECLS

#endif /* GB_CAIRO_H */
