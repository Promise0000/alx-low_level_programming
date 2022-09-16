#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -prints a diagonal
 * @n: parameter
 * Return: returns nothing
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++
				b = 0;
			_putchar('\\')
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
