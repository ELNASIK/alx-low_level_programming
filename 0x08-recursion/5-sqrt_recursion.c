#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: intger to calculates its root
 *
 * Return: root of an input intger
 *
*/
/**
 *  _squar_ - return a squar number
 * @n: number to be squared
 * @v: value
 * Return: squar of suitable numbers
 *
*/
int _squar_(int n, int v);

int _sqrt_recursion(int n)
{
return (_squar_(n, 1));
}
int _squar_(int n, int v)
{

if ((v * v) == n)
	return (v);
else if ((v * v) < n)
	return (_squar_(n, v + 1));
else
	return (-1);
}
