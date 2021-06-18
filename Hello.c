/*****************************************************************

 NAME:
	Hello

 DESCRIPTION:
	this is about the simplest program thinkable to demonstrate 
	parallel execution with OpenMP

 VERSION(S):
	1. original version		j. behrens	6/2021

 COPYRIGHT INFORMATION:
    Copyright (C) 2021  Jörn Behrens <joern.behrens@uni-hamburg.de>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*****************************************************************/

#include <stdio.h>
#include <omp.h>

int main(int argc, char** argv)
{

/* local declarations */
	int thrd_id;

/* this is the main print statement parallelized! */

#pragma omp parallel private(thrd_id)
    {
        thrd_id = omp_get_thread_num();
        printf("Hello from process Number %d\n", thrd_id);
    }

    return 0;
} /* end of main */
