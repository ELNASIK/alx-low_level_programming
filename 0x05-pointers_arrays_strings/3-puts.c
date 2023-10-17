#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *
 * @str: string parameter output
 *
 * Return: Nothing
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');

}
