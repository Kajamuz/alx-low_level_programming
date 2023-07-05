#include "main.h"

/**
 * _strlen - Returns a string's length
 * @s: The string whose length to find
 *
 * Return: The string's length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * is_palindrome_recursive - Recursive function to inspect
 * if string is a palindrome
 *
 * @s: String to check
 * @start: The current comparison's starting index
 * @end: The current comparison's ending index
 *
 * Return: 1 if the string is a palindrome,
 * 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Determines if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if the string is a palindrome,
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);

	return (is_palindrome_recursive(s, 0, len - 1));
}
