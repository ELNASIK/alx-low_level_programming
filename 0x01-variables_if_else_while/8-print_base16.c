#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:'a program that prints all the numbers of base 16 in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);
		if (n == 57)
			n = n + 39;
		n++;
	}
	printf("\n");

	return (0);
}
