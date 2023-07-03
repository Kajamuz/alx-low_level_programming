#include "main.h"

/**
 * _strspn - Gets the length of a prefix
 * substring consisting of bytes from accept.
 *
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string of acceptable bytes.
 *
 * Return: Number of bytes in the initial segment
 * of s consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (count);
}
