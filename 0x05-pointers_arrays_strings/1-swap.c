#include "main.h"
/**
 *swap_int - swaps the value of two integers
 *@a: pointer(parameter) to first integer
 *@b: pointer(parameter) to second integer
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
