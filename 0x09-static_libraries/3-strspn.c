#include <string.h>

/**
 * _strspn - Calculates the length of the initial
 * segment of the string 's' that consists
 * entirely of characters from the string 'accept'.
 *
 * @s: Pointer to the string to be examined.
 * @accept: Pointer to the string containing the
 * characters to be matched.
 *
 * Return: The length of the initial segment of 's'
 * consisting of characters from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
