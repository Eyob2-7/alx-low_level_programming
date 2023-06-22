#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
