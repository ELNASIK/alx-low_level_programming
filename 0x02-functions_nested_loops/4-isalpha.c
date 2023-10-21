#include "main.h"
/**
 *  _isalpha(int c) - a function that checks for alphabetic character.
 * @c: a character ids checked
 *
 * Return:1 if c is a letter, lowercase or uppercase, 0 otherwise
 *
*/
int _isalpha(int c);
{
	for (; c >= 65 && c <= 90; c++)
		return (1);
	if  (c >= 97 && c <= 122)
		return (1);

	return (0);
}
