#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i, last;

	last = n - 1;

	for (i = 0; i <= last; i++)
	{
		printf("%d", *(a + i));
		if (i < last)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}

int main(void)
{
	int array[1] = {98};

	printf("Array with 0 elements:\n");
	print_array(array, 0);

	printf("Array with negative length:\n");
	print_array(array, -1);

	return (0);
}
