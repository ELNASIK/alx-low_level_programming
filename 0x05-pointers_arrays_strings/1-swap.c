#include "main.h"
/**
 * swap_int - swaps the values of two integers using two input parameters
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
