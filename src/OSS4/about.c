/*  Audacious OSS4 output plugin
 *  Copyright (C) 2007 Cristi Magherusan
 *  
 *  Based on BMP - Cross-platform multimedia player
 *  Copyright (C) 2003-2004  BMP development team.
 *
 *  Based on XMMS:
 *  Copyright (C) 1998-2003  XMMS development team.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "OSS4.h"

#include <glib.h>
#include <audacious/i18n.h>
#include <gtk/gtk.h>

#include <audacious/util.h>


void
oss_about(void)
{
    static GtkWidget *dialog;

    if (dialog != NULL)
        return;

    dialog = audacious_info_dialog(_("About OSSv4 Driver"),
                               _("Audacious OSSv4 Driver\n\n"
                                 "Based on the OSSv3 Output plugin,\n" 
                                 "Ported to OSSv4's VMIX by Cristi Magherusan <majeru@gentoo.ro>\n\n"
                                 "This program is free software; you can redistribute it and/or modify\n"
                                 "it under the terms of the GNU General Public License as published by\n"
                                 "the Free Software Foundation; either version 2 of the License, or\n"
                                 "(at your option) any later version.\n"
                                 "\n"
                                 "This program is distributed in the hope that it will be useful,\n"
                                 "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
                                 "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
                                 "GNU General Public License for more details.\n"
                                 "\n"
                                 "You should have received a copy of the GNU General Public License\n"
                                 "along with this program; if not, write to the Free Software\n"
                                 "Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,\n"
                                 "USA."), _("Ok"), FALSE, NULL, NULL);
    g_signal_connect(G_OBJECT(dialog), "destroy",
                     G_CALLBACK(gtk_widget_destroyed), &dialog);
}
