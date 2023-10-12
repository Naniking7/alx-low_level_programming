#include <stdio.h>

/**
 * main - program finds and prints the sum of even value terms
 * 
 * Return: 0 on success
 */

int main(void)
{
	int v = 0, r = 1, bbc = 0;
	int add = 0;

	while (bbc < 4000000)
	{
		bbc = v + r;
		v = r;
		r = bbc;
		if (bbc % 2 == 0)
			add += bbc;
	}
	printf("%i\n", add);
	return (0);
}
