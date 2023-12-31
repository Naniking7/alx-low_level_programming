#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int row, column, result;

	for (row = 0 ; row <= 9 ; row++)
	{
		_putchar(48);
		for (column = 1 ; column <= 9 ; column++)
		{
			_putchar(',');
			_putchar(' ');

			result = row * column;
			if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);
			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
