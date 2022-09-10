#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase, except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char lett;

	for (lett - 'a'; lett <= 'z'; lett++)
	{
		if (lett != 'e' && lett != 'q')
			putchar(lett);
	}

	putchar('\n');

	return (0);
