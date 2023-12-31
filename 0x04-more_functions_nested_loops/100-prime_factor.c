#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
	long largest = -1;
	long i;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 2)
		largest = n;

	return (largest);
}

int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	putchar(result / 10000000 + '0');
	putchar(result / 1000000 % 10 + '0');
	putchar(result / 100000 % 10 + '0');
	putchar(result / 10000 % 10 + '0');
	putchar(result / 1000 % 10 + '0');
	putchar(result / 100 % 10 + '0');
	putchar(result / 10 % 10 + '0');
	putchar(result % 10 + '0');
	putchar('\n');

	return (0);
}
