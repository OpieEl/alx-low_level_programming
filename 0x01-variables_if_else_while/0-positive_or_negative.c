#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: Stores a random number in n and print the number and condition
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d %s", n, "is positive\n");
	}
	else if (n == 0)
	{
		printf("%d %s", n, "is zero\n");
	}
	else
	{
		printf("%d %s", n, "is negative\n");
	}
	return (0);
}
