#include "main.h"

/**
 * print_alphabet_x10 - Prints 10x the alphabet in lowercase and a new line
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i =  0; i < 10; i++)
		for (j = 'a'; j <= 'z'; j++)

			_putchar(j);

		_putchar('\n');


}
