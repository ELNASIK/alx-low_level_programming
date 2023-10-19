#include"main.h"
#include <stddef.h>
/**
 * _strncpy -  a function that copies a string.
 *
 * @dest : a pointer to destination input.
 * @src : a pointer to source input.
 * @n : nubmer of items copied.
 * Return: a  pointer.
 *
*/
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
