#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}

