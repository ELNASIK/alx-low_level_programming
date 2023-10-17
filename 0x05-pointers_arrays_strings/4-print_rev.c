#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s:reversed string  parameter to print
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c])

		c++;

	while (s[c])
	{
		c--;
		putchar(s[c]);
	}
	putchar('\n');
}
