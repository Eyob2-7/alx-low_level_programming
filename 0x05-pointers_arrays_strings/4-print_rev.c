#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to a string.
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
