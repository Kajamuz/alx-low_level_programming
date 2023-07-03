#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: Double pointer to a char.
 * @to: Pointer to the char to be
 * assigned to the double pointer.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
