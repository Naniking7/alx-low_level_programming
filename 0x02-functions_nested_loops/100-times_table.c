#include"main.h"

/**
 * print_times_table - prints the parameter times table starting from 0
 *
 * @x: parameter to be tested
*/

void print_times_table(int x)
{
	int exe, bash, bin;

	if (x <= 15 && x >= 0)
	{
		for (bin = 0; bin <= x; ++bin)
		{
			_putchar(48);
			for (bash = 1; bash <= x; ++bash)
			{
				_putchar(',');
				_putchar(' ');

				exe = bin * bash;

				if (exe <= 9)
					_putchar(' ');
				if (exe <= 99)
					_putchar(' ');

				if (exe >= 100)
				{
					_putchar((exe / 100) + 48);
					_putchar((exe / 10) % 10 + 48);
				} else if (exe <= 99 && exe >= 10)
					_putchar((exe / 10) + 48);
				_putchar((exe % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
