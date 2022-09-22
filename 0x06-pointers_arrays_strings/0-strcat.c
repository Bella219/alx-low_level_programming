#include "main.h"

/**
 * _strcat - concatenates string pointed to by @src,
 * including the terminating null byte,
 * to the end of the string pointed to by @dest
 * @src: source string to be appended to @dest
 * @dest: pointer to the string to be concatenated
 *
 * Return: Pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
