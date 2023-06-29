#include "main.h"

/**
 * leet - Encodes a string into 1337 (Leet speak).
 * @str: The string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_chars[] = "43071";
	char letters[] = "aeotlAEOTL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j / 2];
				break;
			}
		}
	}

	return (str);
}
