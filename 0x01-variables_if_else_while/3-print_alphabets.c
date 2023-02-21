#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
