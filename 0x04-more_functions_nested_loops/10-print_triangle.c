#include "main.h"
/**
 * print_triangle - prints diagonals in the '#' character
 * @size: parameter to represent size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1 ; a<= size ; a++)
		{
			for (c = size - a ; c >= 1 ; c--)
				_putchar(' ');
			for (b = 1 ; b <= a ; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
