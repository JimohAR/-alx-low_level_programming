#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed from prompt
 * @argc: represents number of arguments passed from prompt
 * @argv: an array of all arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
