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
	int lastDigit;

	if (lastDigit > 0)
		lastDigit = (-1) * (n % 10);
	else
		lastDigit = n % 10;
	printf("%d + %c", lastDigit, 'c');
	return (lastDigit);
}
