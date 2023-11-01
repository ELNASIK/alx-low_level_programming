#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 * Return:a pointer of concatented string or an empty string
 * when null is passed
 *
*/
char *str_concat(char *s1, char *s2)
{
        int i = 0;
        int j,n;
        char *c;

	for (; i != '\0';i++)
		;
	for (j = 0; j != '\0'; j++)
		;
	c = malloc(i + j);
	for (n = 0; n <= i; n++)
		c[n] = s1[n];
	for (n = i; n <= j; n++)
		c[n] = s2[n];
	return (c);
}
