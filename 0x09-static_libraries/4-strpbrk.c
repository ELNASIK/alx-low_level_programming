#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 *            of any of the bytes in the string accept
 * @s:a string to be searched
 * @accept: string to be compared
 *
 * Return: a pointer to the byte in s that matches one
 *         of the bytes in accept, or NULL if no such byte is found
 *
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	for (j = 0; j != '\0'; j++)
	{
		if (s[i] == accept[j])
			return (s);
	}
	return ('\0');
}
