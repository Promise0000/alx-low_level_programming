#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char lett;

	for (lett ='z'; lett >= 'a'; lett--)
           	putchar(lett);

	putchar('\n');

	return (0);

}	
