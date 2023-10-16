#include "main.h"
/**
 * 1-swap_int  -  'a function that swaps the values of two integers'
 *
 * Description: using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Noting
 *
*/
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
