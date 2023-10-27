#include "main.h"
/**
 * _memcpy -a function that copies memory area.
 * @dest: This is pointer to the destination array
 * @src:  This is pointer to the source array
 * @n: number of bytes to be copeid
 * Return:pointer to destination
 *
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
