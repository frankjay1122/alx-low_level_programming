#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be modified.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, length;
	char *start, *end, temp;

	length = 0;
	start = s;
	end = s;

	/* Find the length of the string */
	while (*end != '\0')
	{
		length++;
		end++;
	}

	end--;

	/* Reverse the string */
	for (i = 0; i < (length / 2); i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}

