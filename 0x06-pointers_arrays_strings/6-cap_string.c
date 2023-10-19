#include "main.h"
#include <stdio.h>
/**
 * isLower - determine wether asci is in lower case.
 * @c: character
 * isDelimiter - detrmine wether asci is delimiter.
 * Return:1 if true if false
 *
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - detrmine wether asci is delimiter.
 * @c : a charactar
 * Return: 1 if true, 0 if false.
*/
int isDelimiter(char c *)
{
	int i;

	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0 ; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
/**
 * cap_string -  function that capitalizes all words of a string.
 * @str: input a string
 *
 * Return: string with capitalized words
 *
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimit = 1;

	while (*str)
	{
		if (isDelimiter(str))
			foundDelimit = 1;
		else if (isLower(*str) &&  foundDelimit)
		{
			*str -= 32;
			 foundDelimit = 0;
		}
		str++;
	}
}
