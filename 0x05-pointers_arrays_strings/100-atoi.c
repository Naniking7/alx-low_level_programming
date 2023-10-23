#include "main.h"
#include <stdio.h>

/**
 *_atoi - converts a string to an integer
 *@s: pointer to the string
 *
 *Return: integer
 */

int _atoi(char *s)
{
	int index1, index2;
	int fin = 1;
	char kin;
	unsigned int result;

	index1 = 0;
	result = 0;
	while (*(s + index1) != '\0')
	{
		kin = *(s + index1);
		if (kin == '-')
		{
			fin *= -1;
		}
		if (kin >= '0' && kin <= '9')
		{
			index2 = index1;
			while (*(s + index2) > 47 && *(s + index2) < 58)
			{
				result = (result * 10) + *(s + index2) - '0';
				index2++;
			}
			break;
		}
		index1++;
	}
	if (fin < 0)
		result *= fin;
	return (result);
}
