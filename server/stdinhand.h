/********************************************************************** 
 Freeciv - Copyright (C) 1996 - A Kjeldberg, L Gregersen, P Unold
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/
#ifndef __STDINHAND_H
#define __STDINHAND_H

struct player;

void show_prompt();
void handle_stdin_input(char *str);
void report_server_options(struct player *pplayer);
void set_ai_level(char *name, int level);
void set_ai_level_direct(struct player *pplayer, int level);

#endif
