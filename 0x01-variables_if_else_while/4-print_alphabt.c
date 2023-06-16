#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/**
*main - Prints the alphabet in lowercase followed by a new line
*
*Return: Always 0 (Success)
*
*/

int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	for (; low != 'e' && low != 'q'; low++)
	putchar(low);
	}
	putchar('\n');
	return (0);

}
