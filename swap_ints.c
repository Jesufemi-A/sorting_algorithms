#include "sort.h"

/**
 * swap_ints - substituting two int values
 * @a: pointer to first int
 * @b: pointer to second int
 */

void swap_ints(int *a,int *b)
{
	int tmp;
	tmp = *a; 
	*a = *b;
	*b = tmp;
}
