#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Find the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the starting index for the second half */
	start = length % 2 == 0 ? length / 2 : (length - 1) / 2 + 1;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
