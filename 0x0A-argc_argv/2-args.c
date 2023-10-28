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
	while (argc--)
		printf("%s\n", argv[argc]);
	return (0);
}
