#include <stdio.h>

/**
 * main - Thisis the main funtion
 *
 * Return: 0 on success
 */

int main(void)
{	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
