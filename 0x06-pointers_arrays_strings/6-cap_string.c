#include "main.h"

/**
 *cap_string - capitalizes first letter a string
 *@s: pointer to the string
 *
 *Return: s
 */

char *cap_string(char *s)
{
	int number;

	number = 0;
	while (s[number] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[number] == ' ' || s[number] == '\t' || s[number] == '\n'
		    || s[number] == ',' || s[number] == ';' || s[number] == '.'
		    || s[number] == '.' || s[number] == '!' || s[number] == '?'
		    || s[number] == '"' || s[number] == '(' || s[number] == ')'
		    || s[number] == '{' || s[number] == '}')
		{
			if (s[number + 1] >= 97 && s[number + 1] <= 122)
			{
				s[number + 1] = s[number + 1] - 32;
			}
		}
		number++;
	}
	return (s);
}
