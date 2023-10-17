#include "main.h"
/**
 * print_array - prints elements of an array of integers  followed by new line
 * @a:array integer parameter
 * @n: number of elements parameter
 *
 * Return: Nothing
 *
 */
void print_array(int *a, int n)
{

	for (n = 0 ; a[n] != '\0' ; n++)
		printf("%d %c", a[n], ',');
}


