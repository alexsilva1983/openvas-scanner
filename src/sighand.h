/* OpenVAS
* $Id$
* Description: headerfile for sighand.c.
*
* Authors: - Renaud Deraison <deraison@nessus.org> (Original pre-fork develoment)
*          - Tim Brown <mailto:timb@openvas.org> (Initial fork)
*          - Laban Mwangi <mailto:labanm@openvas.org> (Renaming work)
*          - Tarik El-Yassem <mailto:tarik@openvas.org> (Headers section)
*
* Copyright:
* Portions Copyright (C) 2006 Software in the Public Interest, Inc.
* Based on work Copyright (C) 1998 - 2006 Tenable Network Security, Inc.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2,
* as published by the Free Software Foundation
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
*
*
*/


#ifndef _OPENVAS_SIGHAND_H
#define _OPENVAS_SIGHAND_H

extern void (*openvas_signal (int signum, void (*handler) (int))) (int);
extern void sighand_pipe ();
extern void sighand_chld ();
extern void sighand_alarm ();
extern void sighand_alarm_plugin ();
extern void sighand_term ();
extern void sighand_int ();
extern void sighand_kill ();
extern void sighand_segv ();
extern void sighand_sigusr1 ();
extern void sighand_io ();
extern void sighandler (int sign);

extern void let_em_die (int pid);
extern void make_em_die (int sig);
#endif