#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a source string to a destination string.
 * @dest: destination array
 * @src: source array
 * Return: pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
