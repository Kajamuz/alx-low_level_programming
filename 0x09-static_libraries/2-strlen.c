#include "main.h"

/**
 * _strlen - Calculates the length of the string 's'
 * excluding the terminating null character.
 *
 * @s: Pointer to the string.
 *
 * Return: The length of the string 's'.
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
