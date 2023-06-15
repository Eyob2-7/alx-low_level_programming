#include <stdio.h>
#include <inttypes.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	if (sizeof(void *) == 4)
	{
		printf("Running on a 32-bit machine\n");
		printf("Size of a pointer: %zu byte(s)\n", sizeof(void *));
		printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	}
	else if (sizeof(void *) == 8)
	{
		printf("Running on a 64-bit machine\n");
		printf("Size of a pointer: %zu byte(s)\n", sizeof(void *));
		printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	}
	else
	{
		printf("Unknown machine architecture\n");
	}

	return (0);
}
