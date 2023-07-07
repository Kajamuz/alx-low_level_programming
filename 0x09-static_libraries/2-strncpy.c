#include <string.h>

/**
 * _strncpy - Copies at most 'n' characters from
 * the 'src' string to the 'dest' string.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy from 'src'.
 *
 * Return: Pointer to the resulting string (same as 'dest').
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
