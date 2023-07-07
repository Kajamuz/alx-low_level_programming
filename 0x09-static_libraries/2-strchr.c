#include <string.h>

/**
 * _strchr - Searches for the first occurrence
 * of the character 'c' in the string 's'.
 *
 * @s: Pointer to the string to be searched.
 * @c: The character to search for.
 *
 * Return: Pointer to the first occurrence
 * of 'c' in 's', or NULL if 'c' is not found.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
