#include "main.h"
#include <stdio.h>
/**
 * main - Entry point that takes arguments
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 (success)
 *
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
