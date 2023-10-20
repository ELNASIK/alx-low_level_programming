#include "main.h"
/**
 * main - Entry point
 *
 * Descrption:  a program that prints _putchar, followed by a new line.
 *
 * Return: 0 (sucsess)
 *
*/
int main(void)
{
	char s[] =  "_putchar";
	int c =  0;

	for (; c < 8; c++)
		_putchar(s[c]);
	_putchar('\n');
	return (0);
}
