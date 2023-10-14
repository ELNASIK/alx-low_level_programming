#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: 'the program's description
 *
 *Return: Always 0 (Success)
*/
int main(void)

{
	char l = 'A';

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
