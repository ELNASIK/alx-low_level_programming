#include "main.h"
/**
 * _strlen  -   returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;
}

