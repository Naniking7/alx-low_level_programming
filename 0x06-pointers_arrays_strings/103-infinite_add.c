#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of buffer
 * Return: pointer to the results
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, ov, dj, mg, mgg, sum = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		ov = a;
	else
		ov = b;
	if (size_r <= ov + 1)
		return (0);
	r[ov + 1] = '\0';
	a--, b--, size_r--;
	mgg = *(n1 + a) - 48, mgg = *(n2 + b) - 48;
	while (ov >= 0)
	{
		dj = mg + mgg + sum;
		if (dj >= 10)
			sum = dj / 10;
		else
			sum = 0;
		if (dj > 0)
		*(r + ov) = (dj % 10) + 48;
		else
			*(r + ov) = '0';
		if (a > 0)
			a--, mg = *(n1 + a) - 48;
		else
			mg = 0;
		if (b > 0)
			b--, mgg = *(n2 + b) - 48;
		else
			mgg = 0;
		ov--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
