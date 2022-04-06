#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: size of the char array
 * @c: the char to initalize the array with
 *
 * Return: a char pointer if successful, and NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	/* check condition to make program fail */
	if (!size)
		return (NULL);

	while (size--)
	{
		*ptr++ = c;
	}

	return (ptr);
}
