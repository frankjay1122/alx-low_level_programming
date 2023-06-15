#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the size of various types on both
 *              32-bit and 64-bit computers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("32-bit Computer:\n");
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long: %lu byte(s)\n", sizeof(long));
	printf("Size of long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	printf("Size of pointer: %lu byte(s)\n", sizeof(void *));

	printf("\n");

	printf("64-bit Computer:\n");
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long: %lu byte(s)\n", sizeof(long));
	printf("Size of long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	printf("Size of pointer: %lu byte(s)\n", sizeof(void *));

	return (0);
}

