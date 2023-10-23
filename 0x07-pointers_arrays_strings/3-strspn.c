#include "main.h"
/**
 * _strspn -a function that gets the length of a prefix substring.
 * @accept: string containing chars matching 1st one.
 * @s: initial string wihch will be scanned.
 *
 * Return:number of bytes in the initial segment of s which consist
 *        only of bytes from accept.
 *
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (s[i] == accept[i])
			return (i);
	}
}
