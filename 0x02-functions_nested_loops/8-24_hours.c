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
	int m1;
	int s1;

	for (m = 100; m <= 123; m++)
		for (s = 100; s <= 660; s++)
		{
			m1 = m % 100;
			s1 = s % 100;
			_putchar(m1 + ':' + s1);
		}
}
