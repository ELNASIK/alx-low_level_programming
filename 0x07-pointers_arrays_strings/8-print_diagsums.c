#include"main.h"
#include <stdio.h>
/**
 * print_diagsums -sum of the two diagonals of a square matrix of integers.
 * @a :squar  array to be examind
 * @size: give the size of array a
 * Return: Nothing
 *
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d", sum1);
	printf("%d\n", sum2);
}