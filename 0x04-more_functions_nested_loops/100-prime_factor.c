#include <stdio.h>

/**
 *main - prints the largest prime facter of 612852475143.
 *
 *Return: 0 on success
 */

int main(void)
{
	long int a, b, primef;

	primef = -1;
	a = 612852475143;

	while (a % 2 == 0)
	{
		primef = 2;
		a = a / 2;
	}
	for (b = 3; b <= a / 2; b = b + 2)
	{
		while (a % b == 0)
		{
			primef = b;
			a = a / b;
		}
	}
	if (a > 2)
		primef = a;
	printf("%ld\n", primef);
	return (0);
}
