#include "main.h"

/**
 * rot13 - function to convert to rot13 code
 * @strs: string
 * Return: strs.
 */

char *rot13(char *strs)
{
	char *letter_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *caps = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijkl";

	int a, b;

	for (a = 0; strs[a] != '\0'; a++)
	{
	for (b = 0; letter_1[b] != '\0'; b++)
	{
	if (strs[a] == letter_1[b])
	{
	strs[a] = caps[b];
	break;
	}
	}
	}
	return (strs);
}
