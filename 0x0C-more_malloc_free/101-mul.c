#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * isAllDigits - checks if a string contains only digits
 * @str: the string
 *
 * Return: 0 if a non-digit is found, else 1
 */

int isAllDigit(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		if (str[ind] < '0' || str[ind] > '9')
		{
			return (0);
		}
		ind++;
	}
	return (1);
}
/**
 * string_length - checks the length of a string
 * @str: the string to evaluate
 *
 * Return: the length of the string
 */

int string_length(char *str)
{
	int ind = 0;

	while (str[ind] != '\0')
	{
		ind++;
	}
	return (ind);
}
/**
 * errors_check - takes care of errors in the main function
 * Return: void
 */

void errors_check(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of commandline arguments
 * @argv: array of arguments
 *k
 * Return: void
 */

int main(int argc, char *argv[])
{
	char *arg1, *arg2;
	int lenarg1, lenarg2, reslen, n = 0, ind, c, d1, d2, result;

	arg1 = argv[1], arg2 = argv[2];
	if (argc != 3 || !isAllDigits(arg1) || !isAllDigits(arg2))
		errors_check();
	lenarg1 = string_length(arg1);
	lenarg2 = string_length(arg1);
	reslen = lenarg1 + lenarg2 + 1;
	result = malloc(sizeof(int) * reslen);
	if (!result)
		return (1);
	for (ind = 0; ind <= lenarg1 + lenarg2; ind++ )
		result[ind] = 0;
	for (lenarg1 = lenarg1 - 1; lenarg1 >= 0; lenarg1--)
	{
		d1
		       	= arg1[len1] - '0';
		c = 0;
		for (lenarg2 = string_length(arg2) - 1; lenarg2 >= 0; lenarg2--)
		{
			d2 =arg2[lenarg2] - '0';
			c += result[lenarg1 + lenarg2 + 1] + (d1 * d2);
			result[lenarg1 + lenarg2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[lenarg1 + lenarg2 + 1] += c;
	}
	for (ind = 0; ind < reslen - 1; ind++)
	{
		if (result[ind])
			n = 1;
		if (n)
			_putchar(result[ind] + '0');
	}
	if (!n)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
