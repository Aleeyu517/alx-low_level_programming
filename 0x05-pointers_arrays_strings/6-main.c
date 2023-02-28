#include <stdio.h>

void puts2(char *);

/**
 * main - Check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *str;

	str = "Holberton!\0Holberton";
	puts2(str);
	return (0);
}
