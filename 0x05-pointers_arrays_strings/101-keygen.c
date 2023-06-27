#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random password.
 *
 * Return: The generated password.
 */
char *generate_password(void)
{
	static char password[7]; /* Assuming a password length of 6 characters */

	srand(time(0)); /* Seed the random number generator with the current time */

	for (int i = 0; i < 6; i++)
		password[i] = rand() % 26 + 'A'; /* Generate a random uppercase letter */

	password[6] = '\0'; /* Add the null terminator */

	return (password);
}

int main(void)
{
	char *password = generate_password();

	printf("Generated password: %s\n", password);

	return (0);
}
