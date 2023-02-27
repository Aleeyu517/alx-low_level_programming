#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%\dn", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%\dn", a, b);
	return (0);
}
