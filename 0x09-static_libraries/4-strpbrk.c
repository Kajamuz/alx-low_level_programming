#include "main.h"

/**
 * _strpbrk - Searches the string 's' for any
 * character from the string 'accept'.
 *
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing
 * characters to search for.
 *
 * Return: Pointer to the first occurrence of
 * any character from 'accept' in 's',
 * or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
