#include "main.h"

/**
 * is_prime_recursive - Recursive function to determine if a number is prime
 * @n: The number to inspect
 * @i: The divisor being inspected
 *
 * Return: 1 if n is prime,
 * 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - Determines if a number is prime
 * @n: The number to inspect
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
