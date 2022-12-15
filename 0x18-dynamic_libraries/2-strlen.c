#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string whose length we want to get
 *
 * Return: Lenght of @str.
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
