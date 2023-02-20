#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to an integer
 * then print it out his last digit in certain conditions
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);

	return (0);
}
