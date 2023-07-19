#include "main.h"

/**
 * int_index - Search for an integer in an array.
 * @array: A pointer to an integer array.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function that takes an integer as a parameter
 *  and returns an integer. The cmp function is used to compare values.
 *
 * Code description: This function searches for an integer in an array
 *  by applying the given cmp function to each element.
 *
 * Return: The index of the first element for which the cmp function
 *         does not return 0. If no element matches, returns -1.
 *         If size is less than or equal to 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
