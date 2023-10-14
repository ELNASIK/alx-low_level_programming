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

	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
