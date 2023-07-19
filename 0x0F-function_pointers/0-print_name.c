#include "main.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: A pointer to the name to be printed.
 * @f: A pointer to the function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
