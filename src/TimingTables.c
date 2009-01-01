/*	AdvanceTables.c

	Copyright 2008 Fred Cooke

	This file is part of the FreeEMS project.

	FreeEMS software is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	FreeEMS software is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with any FreeEMS software.  If not, see http://www.gnu.org/licenses/

	We ask that if you make any changes to this file you send them upstream to us at admin@diyefi.org

	Thank you for choosing FreeEMS to run your engine! */


#include "inc/freeEMS.h"


/* The main Advance Table */
const volatile mainTable IgnitionAdvanceTableMainFlash TIMETABLESD = {
	MAINTABLE_RPM_LENGTH,		/* AdvanceTableMain.RPMLength */
	MAINTABLE_LOAD_LENGTH,		/* AdvanceTableMain.LoadLength */
	/* AdvanceTableMain.RPM */
	{
		   0,	 200,	 700,	1050,
		1400,	1750,	2100,	2450,
		2800,	3150,	3500,	3850,
		4200,	4550,	4900,	5250,
		5600,	5950,	6300,	6650,
		7000,	7350,	7700,	8050,
		8400,	8750,	9100
	},
	/*AdvanceTableMain.Load */
	{
		 1600,	 3200,	 4800,	 6400,
		 8000,	 9600,	11200,	12800,
		14400,	16000,	17600,	19200,
		20800,	22400,	24000,	25600,
		27200,	28800,	30400,	32000,
		33600
	},
	/* AdvanceTableMain.Table */
	{
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,

		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,

		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,

		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  0x7777 /* 6 extras to allow different axis sizes. */
	}
};


/* The secondary Advance Table */
const volatile mainTable IgnitionAdvanceTableSecondaryFlash TIMETABLESD = {
	MAINTABLE_RPM_LENGTH,		/* AdvanceTableSecondary.RPMLength */
	MAINTABLE_LOAD_LENGTH,		/* AdvanceTableSecondary.LoadLength */
	/* AdvanceTableSecondary.RPM */
	{
		   0,	 200,	 700,	1050,
		1400,	1750,	2100,	2450,
		2800,	3150,	3500,	3850,
		4200,	4550,	4900,	5250,
		5600,	5950,	6300,	6650,
		7000,	7350,	7700,	8050,
		8400,	8750,	9100
	},
	/*AdvanceTableSecondary.Load */
	{
		 1600,	 3200,	 4800,	 6400,
		 8000,	 9600,	11200,	12800,
		14400,	16000,	17600,	19200,
		20800,	22400,	24000,	25600,
		27200,	28800,	30400,	32000,
		33600
	},
	/* AdvanceTableSecondary.Table */
	{
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,

		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,

		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,

		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
		  32768,  32768,  32768,  32768,  32768,  0x6666 /* 6 extras to allow different axis sizes. */
	}
};


/* The main Volumetric Efficiency Table */
const volatile mainTable InjectionAdvanceTableMainFlash TIMETABLESD = {
	MAINTABLE_RPM_LENGTH,		/* VETableMain.RPMLength */
	MAINTABLE_LOAD_LENGTH,		/* VETableMain.LoadLength */
	/* VETableMain.RPM */
	{
		   0,	 200,	 700,	1050,
		1400,	1750,	2100,	2450,
		2800,	3150,	3500,	3850,
		4200,	4550,	4900,	5250,
		5600,	5950,	6300,	6650,
		7000,	7350,	7700,	8050,
		8400,	8750,	9100
	},
	/*VETableMain.Load */
	{
		 1600,	 3200,	 4800,	 6400,
		 8000,	 9600,	11200,	12800,
		14400,	16000,	17600,	19200,
		20800,	22400,	24000,	25600,
		27200,	28800,	30400,	32000,
		33600
	},
	/* VETableMain.Table */
	{	/* Laid out to make sense for 24 RPM and 19 Load bins, 8 extras on end to make up size. */
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,

		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,

		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,

		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  0x5555 /* 6 extras to allow different axis sizes. */
	}
};


/* The secondary Volumetric Efficiency Table */
const volatile mainTable InjectionAdvanceTableSecondaryFlash TIMETABLESD = {
	MAINTABLE_RPM_LENGTH,		/* VETableSecondary.RPMLength */
	MAINTABLE_LOAD_LENGTH,		/* VETableSecondary.LoadLength */
	/* VETableSecondary.RPM */
	{
		   0,	 200,	 700,	1050,
		1400,	1750,	2100,	2450,
		2800,	3150,	3500,	3850,
		4200,	4550,	4900,	5250,
		5600,	5950,	6300,	6650,
		7000,	7350,	7700,	8050,
		8400,	8750,	9100
	},
	/*VETableSecondary.Load */
	{
		 1600,	 3200,	 4800,	 6400,
		 8000,	 9600,	11200,	12800,
		14400,	16000,	17600,	19200,
		20800,	22400,	24000,	25600,
		27200,	28800,	30400,	32000,
		33600
	},
	/* VETableSecondary.Table */
	{
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,

		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,

		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,

		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,  49152,
		  49152,  49152,  49152,  49152,  49152,  0x4444 /* 6 extras to allow different axis sizes. */
	}
};
