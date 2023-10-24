#include"main.h"
#include <stdio.h>
/**
 * print_diagsums -sum of the two diagonals of a square matrix of integers.
 * @a :squar  array to be examind
 *
 * Return: Nothing
 *
*/
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d", sum1);
	printf("%d", sum2);
}
