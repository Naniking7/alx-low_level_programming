#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: pointer
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int b;
	int mat1 = 0, mat2 = 0;

	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
			mat1 += *(a + b);
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			mat2 += *(a + b);
	}
	printf("%d, %d\n", mat1, mat2);
}
