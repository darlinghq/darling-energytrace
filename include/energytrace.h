/*
 This file is part of Darling.

 Copyright (C) 2020 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _energytrace_H_
#define _energytrace_H_

#include <stdint.h>

// generated signatures
void* entr_act_associate(void);
void* entr_act_set(void);
void* entr_act_setd(void);
void* entr_event(void);
void* entr_shouldtrace(void);

// fixed up signatures
void entr_act_begin(int comp, int act, int assertion_id, int intensity, int val);
void entr_act_end(int comp, int act, int assertion_id, int intensity, int val);
void entr_act_modify(int comp, int act, int assertion_id, int mod, int val);

// guessed constants
enum {
	kEnTrQualNone,
	kEnTrQualSPKeepSystemAwake,
};

enum {
	kEnTrCompSysPower,
};

enum {
	kEnTrValNone,
};

enum {
	kEnTrActSPPMAssertion,
};

enum {
	kEnTrModSPRetain,
	kEnTrModSPRelease,
};

#endif
