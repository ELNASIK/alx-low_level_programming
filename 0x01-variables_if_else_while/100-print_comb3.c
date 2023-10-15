#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'a program that prints all different combinations of two digit'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n1 = 0;
	int c = 44;
	int s = 32;

	while (n1 <= 9)
	{
		int n2 = 0;

		while (n2 <= 9)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);
				if (n1 + n2 != 17)
					putchar(c);
					putchar(s);
			}
			n2++;
		}
			n1++;
	}
	putchar('\n');

	return (0);
}
