#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: a integer is checked
 *
 * Return: 1 if c is lowercase 0 otherwise
 *
*/
int _islower(int c)
{
	for (; c >= 97 && c <= 122; c++)
		return (1);
	return (0);
}
