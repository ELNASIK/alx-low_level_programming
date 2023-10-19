#include "main.h"
/**
 * _strcmp -  a function that compares two strings.
 *
 * @s1 : string 1.
 * @s2 : string 2.
 *
 * Return: 1 if true , o if flase.
 *
*/
int _strcmp(char *s1, char *s2)
{
	int same = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			same = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (same);
}
