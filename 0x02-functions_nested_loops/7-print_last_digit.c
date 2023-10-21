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
	for (; n < '\0'; n++)
		printf("%d", (n % 10));
	return (n);
}
