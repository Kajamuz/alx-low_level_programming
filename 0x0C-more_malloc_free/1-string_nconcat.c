#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * Code description: This function concatenates two strings, s1 and s2,
 * up to n bytes from s2. It dynamically allocates memory for the
 * concatenated string and returns a pointer to it.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int s1_len = 0, s2_len = 0, concat_len = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
			s1_len++;
	}

	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
			s2_len++;
	}

	if (n >= s2_len)
		concat_len = s1_len + s2_len;
	else
		concat_len = s1_len + n;

	concatenated = malloc(sizeof(char) * (concat_len + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n && j < s2_len; j++)
		concatenated[i++] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
