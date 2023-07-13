#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * Code description: This function allocates memory for an array of nmemb
 * elements, each of size bytes, using malloc. The allocated memory is set
 * to zero. If nmemb or size is 0, or if malloc fails, function returns NULL.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, or if malloc fails, function returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	char *char_ptr = (char *)ptr;
	unsigned int i;

	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
