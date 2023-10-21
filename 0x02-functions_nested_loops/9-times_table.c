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
		_putchar(48);
		for (l = 1; l <= 9; l++)
		{
			int pro =  n * l;

			_putchar(44);
			_putchar(' ');
			if (pro <= 9)
				_putchar(' ');
			else
			{
				_putchar((pro / 10) + 48);
			}	_putchar((pro % 10) + 48);


		}
		_putchar('\n');
	}
}
