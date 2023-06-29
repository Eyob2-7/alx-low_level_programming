#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (alphabet[j])
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
