#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));

	c = 'a';
	iprintf("%c: %d\n", c, _isdigit(c));

	return (0);
}

