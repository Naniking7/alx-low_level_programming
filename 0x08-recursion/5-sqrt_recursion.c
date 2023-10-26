#include "main.h"

/**
 *helperfunction - checks if the square root of number exists
 *@n1: number
 *@ps: poissibility of square root of a number
 *
 *Return: square root of a number or -1 for error
 */

int helperfunction(int n1, int ps)
{
	if ((ps * ps) == n1)
		return (ps);
	else
	{
		if ((ps * ps) > n1)
			return (-1);
		else
			return (helperfunction(n1, ps + 1));

	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: number to find square root of
 *
 *Return: square root of n or-1 if n does not have a natural squre root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
