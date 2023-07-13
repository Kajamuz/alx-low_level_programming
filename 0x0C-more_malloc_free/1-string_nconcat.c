#include "main.h"

/**
 * _strlen - return the length of a string
 * Code description: This function calculates the length of
 * a string passed as an argument.
 * @s: (char*) string
 * Return: (unsigned int) length of string or 0 if string is NULL
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);

	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * Code description: This function concatenates two strings up
 * to n characters from the second string. If n is greater than the
 * length of the second string, it uses the full length.
 * @s1: (char*) string 1
 * @s2: (char*) string 2
 * @n: (unsigned int) limit of characters to concatenate from string 2
 * Return: (char*) pointer to the new string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *new_str;

	if (n >= _strlen(s2))
		n = _strlen(s2);

	new_str = malloc_checked((_strlen(s1) + n + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1 && s1[i]; i++)
		new_str[i] = s1[i];
	for (j = 0; s2 && j < n; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';

	return (new_str);
}
