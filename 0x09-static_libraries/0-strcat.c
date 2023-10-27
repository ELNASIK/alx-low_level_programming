#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to destination input
 * @src : pointer to source input
 *
 * Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int n1, n2;

	n1 = 0;

	while (dest[n1])
		n1++;
	for (n2 = 0 ; src[n2] ; n2++)
	{
		dest[n1] = src[n2];
		n1++;
	}
	return (dest);
}
