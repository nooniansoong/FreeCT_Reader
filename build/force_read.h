/* libfct_read is reads CT raw data from binary files and DICOM format. */
/* It is distributed as part of the FreeCT package, as well as a standalone library */
/* Copyright (C) 2015  John Hoffman */

/* This library is free software; you can redistribute it and/or */
/* modify it under the terms of the GNU Lesser General Public */
/* License as published by the Free Software Foundation; either */
/* version 2.1 of the License, or (at your option) any later version. */

/* This library is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU */
/* Lesser General Public License for more details. */

/* You should have received a copy of the GNU Lesser General Public */
/* License along with this library; if not, write to the Free Software */
/* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA *

/* Questions and comments should be directed to */
/* jmhoffman@mednet.ucla.edu with "CTBANGBANG" in the subject line*/

#ifndef force_read_h
#define force_read_h

#include "force.h"

//Force Readers
void ReadForceFrame(FILE* fp,int frame_index,int num_channels,int num_slices,float *f);
float ReadForceTubeAngle(FILE* fp, int frame_index,int num_channels,int num_slices);
long ReadForceTablePosition(FILE* fp, int frame_index,int num_channels,int num_slices);

#endif
