#include "main.h"

/**
 * _isalpha - Checks if given character 'c' is alphabetic
 * Alphabetic characters include uppercase and lowercase
 *
 * @c: The character to be checked.
 *
 * Return: A non-zero value (true) if 'c' is
 * an alphabetic character, 0 (false) otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
