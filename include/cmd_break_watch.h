/* Copyright 2012 Adam Green (http://mbed.org/users/AdamGreen/)

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.   
*/
/* Handlers for gdb breakpoint and watchpoint commands. */
#ifndef _CMD_BREAK_WATCH_H_
#define _CMD_BREAK_WATCH_H_

#include <stdint.h>

/* Real name of functions are in __mri namespace. */
uint32_t __mriCmd_HandleBreakpointWatchpointSetCommand(void);
uint32_t __mriCmd_HandleBreakpointWatchpointRemoveCommand(void);

/* Macroes which allow code to drop the __mri namespace prefix. */
#define HandleBreakpointWatchpointSetCommand    __mriCmd_HandleBreakpointWatchpointSetCommand
#define HandleBreakpointWatchpointRemoveCommand __mriCmd_HandleBreakpointWatchpointRemoveCommand

#endif /* _CMD_BREAK_WATCH_H_ */
