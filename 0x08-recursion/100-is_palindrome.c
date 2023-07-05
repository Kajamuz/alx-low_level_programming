#include "main.h"


/**
 * is_palindrome - Inspects if string is a palindrome
 * @s: String to inspected
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns a string's length
 * @s: The string whose length to find
 *
 * Return: String's length
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * check_pal - Inspects the characters for palindrome recursively
 * @s: String to inspect
 * @i: iterator
 * @len: String's length
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (*(s + i) != *(s + len - 1))
		return (0);
	return (check_pal(s, i + 1, len - 1));
}
