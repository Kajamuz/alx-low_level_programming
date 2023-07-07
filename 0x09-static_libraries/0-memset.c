#include "main.h"
/**
 * _memset - Fills a block of memory with a specific value
 * @s: The starting address of memory to be filled
 * @b: Desired value
 * @n: The number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
