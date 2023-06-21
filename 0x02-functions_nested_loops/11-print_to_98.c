#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    int i;
    char digit;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i < 0)
            {
                _putchar('-');
                digit = '0' - (i % 10);
            }
            else
            {
                digit = '0' + (i % 10);
            }

            if (i / 10 != 0)
            {
                _putchar('0' + (i / 10));
                _putchar(digit);
            }
            else
            {
                _putchar(digit);
            }

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i < 0)
            {
                _putchar('-');
                digit = '0' - (i % 10);
            }
            else
            {
                digit = '0' + (i % 10);
            }

            if (i / 10 != 0)
            {
                _putchar('0' + (i / 10));
                _putchar(digit);
            }
            else
            {
                _putchar(digit);
            }

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }

    _putchar('\n');
}
