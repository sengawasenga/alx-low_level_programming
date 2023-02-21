
#include <stdio.h>

/**
 * main - prints out all single digit numbers of base 16
 * starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s;
	for (s = '0'; s <= '9'; s++)
		putchar(s);
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
