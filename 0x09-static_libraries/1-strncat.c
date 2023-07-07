#include "main.h"

/**
 * _strncat - Concatenates at most 'n' characters from
 * the 'src' string to the end of the 'dest' string.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to concatenate from 'src'.
 *
 * Return: Pointer to the resulting string (same as 'dest').
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
