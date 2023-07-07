#include "main.h"

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
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
