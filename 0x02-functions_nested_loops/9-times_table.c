#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (success)
*/
void times_table(void)
{
	int n, l;

	for (n = 0; n <= 0; n++)
	{
		for (l =0; l <= 9; l++)
		{
			_putchar((n * l ) + 48);
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
