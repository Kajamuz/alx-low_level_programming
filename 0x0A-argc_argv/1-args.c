#include <stdio.h>
#include "main.h"

/**
 * main - program prints the number of arguments passed
 * @argc: arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

