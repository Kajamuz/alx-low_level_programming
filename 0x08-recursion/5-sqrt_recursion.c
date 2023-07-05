#include "main.h"

/**
 * _sqrt_recursive - Recursive function to calculate the square root
 * @n: The number whose square root will be calculated
 * @i: Current value being determined
 *
 * Return: The square root of n if found,
 * -1 otherwise
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt_recursive(n, i + 1));
}

/**
 * _sqrt_recursion - Returns a number's natural square root
 * @n: The number whose square root will be calculated
 *
 * Return: The square root of n if found,
 * -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursive(n, 0));
}
