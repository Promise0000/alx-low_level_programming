#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * You are not allowed to use the variable a
	 * You are not allowed to modify the variable p
	 * You can only write one statement
	 * main: prototype function
	 *  Your code should be written at line 19,
	 *  You are allowed to use the standard library
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
