#include  "main.h"

/**
 *  print_sign - Entry point.
 *  @n: The integer value it recieves.
 *  Description: Prints the sign of n agains zero.
 *
 *  Return: (1)- if n > 0. (0) if n = 0. (-1) if n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
