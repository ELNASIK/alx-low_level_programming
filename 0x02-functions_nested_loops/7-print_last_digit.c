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
	int last_digit;

	if (last_digit > 0)
		last_digit = (-1) * (n % 10);
	else
		last_digit = n % 10;
	printf("%d + %c", last_digit, 'c');
	return (last_digit);
}
