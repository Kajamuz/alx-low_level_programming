#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Code description: This program prints the opcodes of its
 * own main function. It takes a single command-line argument
 * (bytes) that specifies the number of bytes to print.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_code = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", main_code[i]);

		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
