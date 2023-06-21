#include "main.h"

/**
 * main - entry point
 *
 * Description: Computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	_putchar(sum / 1000000 + '0');
	_putchar(sum / 100000 % 10 + '0');
	_putchar(sum / 10000 % 10 + '0');
	_putchar(sum / 1000 % 10 + '0');
	_putchar(sum / 100 % 10 + '0');
	_putchar(sum / 10 % 10 + '0');
	_putchar(sum % 10 + '0');
	_putchar('\n');

	return (0);
}
