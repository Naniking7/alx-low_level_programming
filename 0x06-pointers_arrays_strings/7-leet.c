#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: pointer to the string
 *
 *Return: s
 */

char *leet(char *s)
{
	int strnumber, lnumber;
	char letters[] = "aAeEoOtTlL";
	char lnumber1[] = "4433007711";

	strnumber = 0;
	while (s[strnumber] != '\0')
	{
		lnumber = 0;
		while (lnumber < 10)
		{
			if (letters[lnumber] == s[strnumber])
			{
				s[strnumber] = lnumber1[lnumber];
			}
			lnumber++;
		}
		strnumber++;
	}
	return (s);
}
