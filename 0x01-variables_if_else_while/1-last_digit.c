#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is a function
 * Return: always (0)
 */
int main(void)
{
	int n;
	int lastdt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdt = n % 10;
	if (lastdt > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdt);
	}
	else if (lastdt == 0)
	{
	printf{"Last digit of %d is %d and is 0\n", n, lastdt);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdt);
	}
	return (0);
}
