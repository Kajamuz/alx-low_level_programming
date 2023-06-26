#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line
 * @str: Pointer to a string
 *
 * Description: This function prints half of the string pointed to by 'str',
 * followed by a new line.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 1)
	{
		i = (length - 1) / 2;
		i += 1;
	}
	else
	{
		i = length / 2;
	}

	for (; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

