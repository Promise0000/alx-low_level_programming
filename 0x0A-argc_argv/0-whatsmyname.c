#include <stdio.h>

/**
 * main - a program file
 * description: a program that prints its name, followed by a new line
 * If you rename the program, it will print the new name
 * without having to compile it again
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
