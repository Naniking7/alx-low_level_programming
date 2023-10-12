#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	int y = 0;
	long k = 1, q = 2;

	while (y < 50)
	{
		if (y == 0)
			printf("%ld", k);
		else if (y == 1)
			printf(", %ld", q);
		else
		{
			q += k;
			k = q - k;
			printf(", %ld", q);
		}

		++y;
	}

	printf("\n");
	return (0);
}
