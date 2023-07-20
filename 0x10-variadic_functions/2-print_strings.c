#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *       The number of strings should be equal to 'n'.
 *       If any of the strings is NULL, print "(nil)" instead.
 *       If 'separator' is NULL, don't print it.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, const char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
