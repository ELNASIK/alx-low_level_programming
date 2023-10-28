#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point that takes arguments
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 (success)
 *
*/
int main(int argc, char *argv[])
{
	int sum;
	char *c;

	sum = 0;
	while (--argc)
	{
		for (c = argv[argc]; *c; c--)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
