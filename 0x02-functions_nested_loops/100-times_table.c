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
				_putchar(mul_1 + 48);
				_putchar(',');
				_putchar(32);
				_putchar(32);
			}
			mul = n * l;
			_putchar(mul + 48);
		}
		 _putchar('\n');
	}
}
