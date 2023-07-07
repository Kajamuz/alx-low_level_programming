#include <string.h>

/**
 * _strstr - Searches for the first occurrence of
 * the substring 'needle' in the string 'haystack'.
 *
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the first occurrence of
 * 'needle' in 'haystack',
 * or NULL if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
