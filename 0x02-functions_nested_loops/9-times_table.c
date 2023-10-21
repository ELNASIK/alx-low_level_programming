#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (success)
*/
void times_table(void)
{
	int n, l;

	for (n = 48; n <= 57; n++)
	{
		for (l =48; l <= 57; l++)
		{
			_putchar(n * l);
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
