#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - prints a number
 * @n: The number to be printed
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: takes in an integer
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
		}
	}

	print_number(n);
	_putchar('\n');
}
