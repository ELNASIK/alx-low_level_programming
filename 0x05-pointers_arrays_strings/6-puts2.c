#include "main.h"
/**
 * puts2 - prints every other character of a string
 *         starting with the first character
 * @str: a string parameter to be selected
 *
 * Return: Nothing.
 *
*/
void puts2(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0' ; n++)
	{
		if (str[n] % 2 == 0)
			printf("%c", str[n]);
	}
}
