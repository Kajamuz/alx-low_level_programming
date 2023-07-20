#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates sum of all its parameters.
 * @n: Number of arguments passed to the function.
 * @...: The variable number of arguments to be summed.
 *
 * Return: The sum of all the parameters. If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
