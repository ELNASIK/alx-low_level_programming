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
	int lastd;

	if (lastd > 0)
		lastd = (-1) * (n % 10);
	else
		lastd = n % 10;
	printf("%d + %c", lastd, 'c');
	return (lastd);}
