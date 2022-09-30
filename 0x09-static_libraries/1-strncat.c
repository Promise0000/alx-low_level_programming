#include "main.h"

/**
 * *_strncat - Concatenates two string
 * @dest: A string to be added upon
 * @src: A string to be added to dest
 * @n: The number of bytes from src
 *
 * Return: a pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
