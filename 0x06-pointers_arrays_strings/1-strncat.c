#include "main.h"
/**
 * _strncat - a function that concatenates two strings and use the most n byts.
 *
 * @dest : pointer to destination input.
 * @src : pointer to source input.
 *
 * Return: a pointer to the resulting string dest
 *
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
	{
		if (c2 != n)
		dest[c] = src[c2];
		c++;
	}
	return (dest);
}
