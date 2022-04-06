#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string to a dynamically allocated space
 * @str: the string to be copied
 *
 * Return: a char pointer if successful, and NULL otherwise
 */
char *_strdup(char *str)
{
	char *ptr;
	int size = 1;

	/* return NULL if str is NULL */
	if (!str)
		return (NULL);

	while (*str++ != '\n')
		size++;

	ptr = malloc(size);
	/* return NULL if ptr is NULL */
	if (!ptr)
		return (NULL);

	while (size--)
	{
		*ptr++ = *str;
	}

	return (ptr);
}
