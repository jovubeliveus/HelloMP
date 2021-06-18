/*****************************************************************

 NAME:
	Hello

 Description:
	this is about the simplest program thinkable to demonstrate 
	parallel execution with OpenMP

 VERSION(S):
	1. original version		j. behrens	6/2021

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
