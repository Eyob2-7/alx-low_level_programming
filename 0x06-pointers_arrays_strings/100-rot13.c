#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i = 0;
	char *ptr = s;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr)
	{
		int is_alpha = 0;
		for (i = 0; alphabet[i]; i++)
		{
			if (*ptr == alphabet[i])
			{
				is_alpha = 1;
				break;
			}
		}

		if (is_alpha)
		{
			*ptr = rot13[i];
		}
		ptr++;
	}

	return (s);
}
