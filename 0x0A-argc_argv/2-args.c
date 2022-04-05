#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed to a program incuding the program name
 * @argc: represents number of arguments passed from prompt
 * @argv: an array of all arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
