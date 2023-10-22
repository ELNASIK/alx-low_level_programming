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
	int i;
	unsigned long f1 = 0, f2 = 1, sum;
	int x;

	for (i = 0; i < 32; i++)
	{
		sum = f1 + f2;
		if (sum % 2 == 0)
			x += sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%d\n", x);
	return (0);
}
