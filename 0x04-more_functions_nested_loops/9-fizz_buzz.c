#include <stdio.h>

/**
 * main - program that prints either number
 * or flizz or buzz or fizzBuzz
 *
 * Return: returns 0
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3 == 0 && (num % 5 == 0))
				{
				printf("FizzBuzz ");
				}
				else if ((num % 5) == 0)
				{
				if (num == 100)
				{
				printf("Buzz");
				printf("\n");
				}
				else
				printf("Buzz ");
				}
				else if ((num % 3) == 0)
				printf("Fizz ");
				else
				printf("%d ", h);
				h++;
				}
				return (0);
				}
