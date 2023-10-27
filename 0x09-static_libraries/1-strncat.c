#include "main.h"
/**
 * _strncat - a function that concatenates two strings and use the most n byts.
 *
 * @dest : pointer to destination input.
 * @src : pointer to source input.
 * @n : integer determine the printed amount.
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

	for (c2 = 0; c2 < n && src[c2] != '/0'; c2++)
		dest[c + c2] = src[c2];
	dest[c + c2] = '/0';
	return (dest);
}
