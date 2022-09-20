#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string pointed to by @src
 * including the terminating nul byte, to a buffer pointed to by @dest
 * @dest: buffer to copy string to
 * @src: source string to copy
 *
 * Return: A pointer to the destinationstring @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
	dest[i] = src[i];
	if (src[i] == '\0')
	return (dest);
	i++;
	}
	return (dest);

}
