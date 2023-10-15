#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'a program prints all combinations of singledigit number'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int g = 44;
	int s = 32;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(g);
			putchar(s);
		}

		n++;
	}
	putchar('\n');

	return (0);
}
