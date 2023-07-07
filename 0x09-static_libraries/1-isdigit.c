#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit.
 *
 * @c: The character to be checked.
 *
 * Return: A non-zero value (true) if @c is a digit,
 * 0 (false) otherwise.
 */
int _isdigit(int c)
{
	return (isdigit(c));
}
