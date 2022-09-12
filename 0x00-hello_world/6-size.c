#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Valid)
 */
int main(void)
{
	char d;
	int a;
        long int b;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(d));
       	printf("Size of a int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(b));
        printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
        printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
