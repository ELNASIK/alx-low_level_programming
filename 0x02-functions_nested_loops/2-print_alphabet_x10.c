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

	for (i = 0; i <= 9; i++)
	{
		int i;

		for (n = 97; n <= 122; n++)
			_putchar(n);
		 _putchar('\n');
	}
}
