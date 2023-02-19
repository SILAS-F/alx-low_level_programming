#include <stdio.h>

/**
 * main - Thisis the main funtion
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("size of int: %i bytes(s)\n", sizeof(int));
	printf("size of long int: %i bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n", sizeof(float));
	return (0);
}
