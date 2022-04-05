#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds all positive numbers passed to program from prompt 
 * @argc: represents number of arguments passed from prompt
 * @argv: an array of all arguments passed
 *
 * Return: 0 if successful and 1 if error occurs
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int val;

	while (--argc)
	{
		val = atoi(argv[argc]);
		if (!val)
		{
			printf("%s\n", "Error");
			return (1);
		}
		result += val;
	}
	printf("%d\n", result);
	return (0);
}
