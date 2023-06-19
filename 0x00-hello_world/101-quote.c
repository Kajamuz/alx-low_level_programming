#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(message) - 1;

	write(2, message, len);

	return (0);
}
