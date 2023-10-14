#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'a program that prints the lowercase alphabet in reverse'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	printf("\n");

	return (0);
}
