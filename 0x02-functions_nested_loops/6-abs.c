#include "main.h"
#include <stdlib.h>
/**
 *  _abs - a  function that computes the absolute value of an integer.
 *
 * @n : number to be coverted
 * Return: 0 (success)
 *
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
