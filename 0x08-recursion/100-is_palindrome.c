#include "main.h"

/**
 * is_palindrome - Determines if a string is a palindrome.
 * @s: String to be inspected.
 *
 * Return: 1 if @s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *start, *end;

	if (*s == '\0')
		return (1);

	while (s[len] != '\0')
		len++;

	start = s;
	end = s + len - 1;

	while (end > start)
	{
		if (*start != *end)
			return (0);

		start++;
		end--;
	}

	return (1);
}
