#include "main.h"

/**
 *  _abs - Entry point.
 *  @n: recieves an integer value.
 *  Description:computes the absolute value of n.
 *
 *  Return: n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

