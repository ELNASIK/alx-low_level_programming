#include "main.h"
/**
 * jack_bauer -prints every minute of the day of Jack Bauer from 00:00 to 23:59
 *
 *
 * Return: 0 success
 *
*/
void jack_bauer(void)
{
	int m;
	int s;

	for (m = 0; m <= 23; m++)
		for (s = 0; s <= 59; s++)
		{
			_putchar((m / 10) + 48 );
			_putchar((m % 10) + 48);
			_putchar(':');
			_putchar((s / 10) + 48 );
			_putchar((s % 10) + 48);
			_putchar('\n');
		}
}
