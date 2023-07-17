#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: Prints the name, age, and owner
 * of a struct dog. If an element is NULL, it prints
 * "(nil)" instead of the element value. If d is NULL,
 * it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
