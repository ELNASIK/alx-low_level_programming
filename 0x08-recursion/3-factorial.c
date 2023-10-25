#include "main.h"
/**
 * factorial -a function that returns the factorial of a given number.
 * @n: intger to get its factorial
 *
 * Return: factorial of integr input
 *
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
	return (1);
	else
	{
		return (n * factorial(n - 1));

	}
}
