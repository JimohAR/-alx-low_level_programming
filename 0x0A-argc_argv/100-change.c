#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 * @argc: represents number of arguments passed from prompt
 * @argv: an array of all arguments passed
 *
 * Description: Given cent coins of denominations 25, 10, 5, 2 and
 * 1; this program prints the number of these coins that will make
 * the passed in value (in cents)
 * Return: 0 if successful and 1 if error occurs
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int val;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	val = atoi(argv[1]);
	if (val < 0)
		printf("%d\n", 0);

	if (val / 25)
	{
		result += val / 25;
		val %= 25;
	}

	if (val / 10)
	{
		result += val / 10;
		val %= 10;
	}

	if (val / 5)
	{
		result += val / 10;
		val %= 10;
	}

	if (val / 2)
	{
		result += val / 2;
		val %= 2;
	}

	if (val / 1)
	{
		result += val / 1;
		val %= 1;
	}
	printf("%d\n", result);
	return (0);
}
