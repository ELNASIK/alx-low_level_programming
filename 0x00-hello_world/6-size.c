#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: A c programme that givre the size of data type
 *
 *Return: Always 0 (succsess)
*/
int main(void)
{
	printf("size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int:%lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
}
