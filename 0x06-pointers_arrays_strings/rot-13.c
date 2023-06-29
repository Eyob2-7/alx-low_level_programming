#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
