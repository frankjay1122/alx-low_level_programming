#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = 59;

	write(2, message, length);

	return (1);
}

