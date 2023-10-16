#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *
 * @str: string parameter output
 * @c: The character to print
 *
 * Return: Nothing
 *
 */
int _putchar(char c);
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;

	}

	_putchar('\0');
}
