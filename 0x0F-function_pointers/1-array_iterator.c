#include "main.h"

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: A pointer to an integer array.
 * @size: The size of the array.
 * @action: Pointer to a function that takes an integer as a
 *    parameter and returns void.
 *
 * Code description: This function takes an integer array
 *   and its size as inputs, along with a function pointer
 *   (action) that takes an integer as a parameter and returns void.
 *   It then iterates through the array and applies the given
 *   function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
