#include <string.h>

/**
 * _strcpy - Copies the string 'src' to the string
 * 'dest', including the terminating null character.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to resulting string (same as 'dest').
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
