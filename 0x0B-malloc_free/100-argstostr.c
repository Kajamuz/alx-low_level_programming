#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer to the concatenated string - NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k, length = 0;
	int total_length = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
	}

	total_length += length;

	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}
		concatenated[k] = '\n';
		k++;
	}

	concatenated[k] = '\0';

	return (concatenated);
}
