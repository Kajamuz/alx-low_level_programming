#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 *
 * Description: This function prints the given integer.
 */
void print_number(int n)
{
	unsigned int i1;

	i1 = n;

	if (n < 0)
	{
		_putchar('-');
		i1 = -n;
	}

	if (i1 / 10 != 0)
	{
		print_number(i1 / 10);
	}
	_putchar('0' + (i1 % 10));
}
