#include "main.h"

/**
 * _puts - Writes the string 's' to the standard
 * output (console) followed by a newline character.
 *
 * @str: Pointer to the string to be written.
 *
 * Return: None
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
