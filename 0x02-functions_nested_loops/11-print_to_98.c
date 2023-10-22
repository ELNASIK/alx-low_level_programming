#include "main.h"
/**
 * print_to_98 -prints all natural numbers from n to 98,followed by a new line
 * @n:ineger number to begin with
 *
 * Return:Nothing
 *
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d%c ", i, ',');
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d%c ", i, ',');
	}
	printf("%d\n", 98);
}
