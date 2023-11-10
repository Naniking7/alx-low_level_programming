#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: actual arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int ind, ind2;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (ind = 1 ; ind < argc ; ind++)
		{
			for (ind2 = 0 ; argv[ind][ind2] != '\0' ; ind2++)
			{
				if (!(isdigit(argv[ind][ind2])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[ind]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
