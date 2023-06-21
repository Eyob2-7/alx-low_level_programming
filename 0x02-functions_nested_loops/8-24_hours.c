#include "main.h"

/**
  *jack_bauer - Prints the minutes of a day.
  *
  *Return: No return
  */
void jack_bauer(void)
{
	int e, y, o, b;

	for (e = 0; e <= 2; e++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (o = 0; o <= 5; o++)
			{
				for (b = 0; b <= 9; b++)
				{
					if (e >= 2 && y >= 4)
						break;
					_putchar(e + 48);
					_putchar(y + 48);
					_putchar(58);
					_putchar(o + 48);
					_putchar(b + 48);
					_putchar('\n');
				}
			}
		}
	}
}

