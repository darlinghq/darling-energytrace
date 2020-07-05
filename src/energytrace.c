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


#include <energytrace.h>
#include <stdlib.h>
#include <stdio.h>

static int verbose = 0;

__attribute__((constructor))
static void initme(void) {
	verbose = getenv("STUB_VERBOSE") != NULL;
}

void* entr_act_associate(void) {
	if (verbose) puts("STUB: entr_act_associate called");
	return NULL;
}

void entr_act_begin(int comp, int act, int assertion_id, int intensity, int val) {
	if (verbose) puts("STUB: entr_act_begin called");
};

void entr_act_end(int comp, int act, int assertion_id, int intensity, int val) {
	if (verbose) puts("STUB: entr_act_end called");
};

void entr_act_modify(int comp, int act, int assertion_id, int mod, int val) {
	if (verbose) puts("STUB: entr_act_modify called");
};

void* entr_act_set(void) {
	if (verbose) puts("STUB: entr_act_set called");
	return NULL;
}

void* entr_act_setd(void) {
	if (verbose) puts("STUB: entr_act_setd called");
	return NULL;
}

void* entr_event(void) {
	if (verbose) puts("STUB: entr_event called");
	return NULL;
}

void* entr_shouldtrace(void) {
	if (verbose) puts("STUB: entr_shouldtrace called");
	return NULL;
}
