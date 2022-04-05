#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply two numbers passed to program and print result
 * @argc: represents number of arguments passed from prompt
 * @argv: an array of all arguments passed
 *
 * Return: 0 if successful and 1 if error occurs
 */
int main(int argc, char *argv[])
{
	int result = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	while (--argc)
	{
		result *= atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
