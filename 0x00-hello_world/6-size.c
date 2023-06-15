#include <stdio.h>
#include <inttypes.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	printf("Size of a uint32_t: %zu byte(s)\n", sizeof(uint32_t));
	printf("Size of a uint64_t: %zu byte(s)", sizeof(uint64_t));

	return (0);
}
