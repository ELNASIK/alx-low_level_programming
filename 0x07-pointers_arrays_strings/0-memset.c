#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte
 * @n: Unsigned integer number of byts to be filled
 * @s: Pointer points the memory area
 * @b: constant byte
 *
 * Return:  pointer to the memory area s
 *
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n; it++)
		s[it] = b;
	return (s);
}
