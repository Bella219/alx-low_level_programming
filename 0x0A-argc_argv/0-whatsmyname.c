#include <stdio.h>

/**
 * main - print out the first agument
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
