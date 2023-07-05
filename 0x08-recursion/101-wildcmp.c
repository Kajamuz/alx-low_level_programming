#include "main.h"

/**
 * wildcmp - Compares two strings considering wildcard character *.
 * @s1: The first string.
 * @s2: The second string with wildcard *.
 *
 * Return: 1 if strings can be considered identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) == *s1 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
