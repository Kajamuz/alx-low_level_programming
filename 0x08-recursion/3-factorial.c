#include "main.h"

/**
 * factorial - Returns a given number's factorial
 * @n: The number whose factorial will be calculated
 *
 * Return: The factorial of n, or -1 (error) if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
