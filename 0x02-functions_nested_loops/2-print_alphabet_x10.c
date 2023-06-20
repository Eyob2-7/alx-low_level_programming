#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	int i;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
	}

	_putchar('\n');
}
