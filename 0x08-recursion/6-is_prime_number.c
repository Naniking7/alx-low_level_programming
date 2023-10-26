#include "main.h"

/**
 *helperfunction - checks for a prime factor
 *@n1: number being checked
 *@a: possible factor of the number
 *
 *Return: 0 if not a prime factor and 1 if it is a prime factor
 */

int helperfunction(int n1, int a)
{
	if (a < n1)
	{
		if (n1 % a == 0)
			return (0);
		else
			return (helperFunction(n1, a + 1));
	}
	else
	{
		return (1);
	}
}

/**
 *is_prime_number - checks if a number is prime or not
 *@n: number to be checked
 *
 *Return: 1 if number is prime and 0 if number is not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	else
		return (helperfunction(n, 2));
}
