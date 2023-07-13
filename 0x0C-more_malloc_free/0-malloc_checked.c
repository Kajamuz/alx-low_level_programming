#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * Code description: This function is used to allocate a specified
 * number of bytes in memory. If the allocation fails, the program
 * will terminate with a status value of 98.
 * @b: number of bytes to be allocated
 * Return: (void*) - pointer to allocated memory or terminate program
 * if memory allocation fails.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
