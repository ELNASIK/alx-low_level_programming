#include "main.h"
/**
 * _strdup -Write a function that returns a pointer to a newly allocated
 *  space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: string parameter thats given as an input
 *
 * Return:a pointer to the duplicated string. It returns NULL if
 * insufficient memory was available
 *
*/
char *_strdup(char *str)
{
	char *c;
	int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	c = malloc(size * sizeof(*str) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	else
	{
		while (size--)
		{
			c[i] = str[i];
			i++;
		}
	}
	return (c);
	free(c);
}
