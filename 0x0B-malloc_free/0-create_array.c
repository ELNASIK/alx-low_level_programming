#include "main.h"
/**
 * create_array - creates an array, and initializes it with a specific char.
 * @c: specific char to begin with
 * @size: size of the created array
 * Return:  a pointer to the array, or NULL if it fails
 *
*/
char *create_array(unsigned int size, char c)
{
	char *l = malloc(size);

	if (size == 0 || l == 0)
		return (0);
	while (size--)
		l[size] = c;
	return (l);
}
