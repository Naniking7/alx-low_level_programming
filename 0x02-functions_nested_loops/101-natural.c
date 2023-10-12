#include <stdio.h>

/**
 * main - computes and prints the sum of all multiples of 3 or 5 up below 1024
 * Return: 0 on success
 */

int main(void)
{
	int g, h = 0;

	while (g < 1024)
	{
		if ((g % 3 == 0) || (g % 5 == 0))
		{
			h += g;
		}
		g++;
	}
	printf("%d\n", h);
	return (0);
}
