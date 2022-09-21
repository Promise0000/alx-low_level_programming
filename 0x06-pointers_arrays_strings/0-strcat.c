#include "main.h"

/**
 * strcat - Concatenates the string @src to the string @dest
 * @dest: a pointer to the string
 * @src: the source string to be appended to @dest
 *
 * Return: a pointer ro the destination string @dest
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
