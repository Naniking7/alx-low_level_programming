#include <stdio.h>


/**
 * numLength - returns length of a string
 *
 * @par : parameter
 *
 * Return: 1 and integer value of strg
 */

int numLength(int par)
{
	int strg = 0;

	if (!par)
	{
		return (1);
	}

	while (par)
	{
		par = par / 10;
		strg += 1;
	}

	return (strg);
}

/**
 *
 * main - prints the first 98 fibonacci sequences
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long geg = 1, mac = 2, kuk, fab = 100000000, lin = 0, sza = 0, gha = 0;
	short int s = 1, cho;

	while (s <= 98)
	{
		if (lin > 0)
			printf("%lu", lin);
		cho = numLength(fab) - 1 - numLength(geg);
		while (lin > 0 && cho > 0)
		{
			printf("%i", 0);
			cho--;
		}
		printf("%lu", geg);

		kuk = (geg + mac) % fab;
		gha = lin + sza + (geg + mac) / fab;
		geg = mac;
		lin = sza;
		mac = kuk;
		sza = gha;

		if (s != 98)
			printf(", ");
		else
			printf("\n");
		s++;
	}
	return (0);
}
