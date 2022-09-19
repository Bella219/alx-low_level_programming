#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string whose length we want to get
 *
 * Return: Lenght of @str.
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
