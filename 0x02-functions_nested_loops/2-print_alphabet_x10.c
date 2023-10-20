#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * , in lowercase, followed bya new line.
 *
 * Return: Nothing
 *
*/


void print_alphabet_x10(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		for (int i = 0; i <= 10; i++)
			_putchar(n);
	}
	_putchar('\n');
}
