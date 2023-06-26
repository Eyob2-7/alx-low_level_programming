#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a string.
 */
void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Swap characters from the start and end of the string */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		/* Swap characters using a temporary variable */
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
