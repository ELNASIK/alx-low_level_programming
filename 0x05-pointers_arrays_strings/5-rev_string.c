#include "main.h"
/**
 * rev_string  - a function that reverses a string
 * @s: string parameter to be reversed
 *
 * Return: Nothing
 *
 */
void rev_string(char *s)
{
	int i;
	int l;
	char swp;

	for (l = 0 ; s[l] != '\0'; l++)
		;
	for (i = 0 ; i < l / 2 ; i++)
	{
		swp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = swp;
	}
}
