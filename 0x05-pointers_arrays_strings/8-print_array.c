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
	int i;

	for (n = 0 ; a[i] != n  ; i++)
	(
		if (i != (n - 1))
			printf("%d %c", a[i], ',');
		else
			printf("%d", a[i]);
	}
	printf("\n");

}
