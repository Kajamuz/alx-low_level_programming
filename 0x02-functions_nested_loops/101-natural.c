#include <stdio.h>

/**
* print_sum_multiples - Computes and prints the sum of multiples of 3 or 5.
*
* Return: void
*/
void print_sum_multiples(void)
{
	int limit = 1024;
	int sum = 0;

	for (int i = 0; i < limit; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	sum += i;
	}
	}

	printf("%d\n", sum);
}

/**
* main - Entry point of the program.
*
* Return: 0 on success.
*/
	int main(void)
	{
	print_sum_multiples();

	return (0);
}
