#include "main.h"
#include <stdlib.h>

/**
 * _strstr - check the code
 * @haystack : chack strings
 * @needle: check strings
 *
 * Return: NULL if the conditin is false
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
	s++;

	while (*haystack)
	{
	for (i = 0; needle[i]; i++)
	{
	if (haystack[i] != needle[i])
	break;
	}
	if (i != s)
	haystack++;
	else
	return (haystack);
	}

	return (NULL);
}
