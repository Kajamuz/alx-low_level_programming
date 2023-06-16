#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase excluding 'e' and 'q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}
	putchar('\n');

	return (0);
}

