#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: ' a program that prints all single digit numbers of base 10'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		n++;
	}
	putchar('\n');

	return (0);
}
