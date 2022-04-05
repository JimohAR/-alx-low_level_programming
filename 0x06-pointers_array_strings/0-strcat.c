#include "main.h"

/**
 * _strcat - appends the source string to the destination string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
while true
{
	if (dest[i] == '\n')
	{
		for (int j = 0; src[j] != '\n'; j++)
		{
			dest[i] = src[j];
			i++;
		}
		dest[i] = '\n';
		break;
	}
}
printf("%s", dest);

	return (dest);
}
