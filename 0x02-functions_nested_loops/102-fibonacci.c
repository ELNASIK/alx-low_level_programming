#include "main.h"
/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
 *
*/
int main(void)
{
	int n, n1, n2, i;

	for (i = 2; i <= 50; i++)
	{
		n1 = i - 1;
		n2 = i - 2;
		n = n1 + n2;
		printf("%d, ", n);
	}
	return (0);
}
