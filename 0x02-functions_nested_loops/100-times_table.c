#include "main.h"
/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: number of time tabels
 * Return: Always 0 (success)
*/
void print_times_table(int n)
{
	int  l, mul_1, i, mul;

	if ((n < 15) && (n >= 0))
	{
		for (l = 0; l <= n; l++)
		{
			for (i = 1; i < n; i++)
			{
				mul_1 = i * l;
				if (mul_1 <= 9)
				{
					_putchar(mul_1 + 48);
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
			}
			mul = n * l;
			if (mul <= 9)
				_putchar(mul + 48);
			else if (mul <= 99)
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
			else if (mul == 100)
			{
				_putchar(49);
				_putchar(48);
			 	_putchar(48);
			}
			else
			{
				_putchar((mul / 100) + 48);
                                _putchar((mul % 100) + 48);
			}
			_putchar('\n');
		}
	}
}
