#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 48 to 57, separated by commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	}
	putchar('\n');

	return (0);
}
