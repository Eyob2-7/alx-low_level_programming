#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: Input number as an integer.
 *
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int z;

	z = n % 10;
	if (z < 0)
	{
		_putchar(-z + '0');
		return (-z);
	}
	else
	{
		_putchar(z + '0');
		return (z);
	}
}
