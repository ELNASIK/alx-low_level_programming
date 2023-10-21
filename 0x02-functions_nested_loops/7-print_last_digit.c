#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n:represents the last digit
 *
 * Return:the value of the last digit
 *
*/
int print_last_digit(int n)
{
	int k;

	if (n < 0)
		k  = (-1) * (n % 10);
	else
		k  = n % 10;
	printf("%d%d", k);
	return (k);
}
