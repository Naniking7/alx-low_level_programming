#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a string
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 *helperfunction - checks if a string is palindrome
 *@s: pointer to a string
 *@1index: first index
 *@2index: last index
 *
 *Return: 1 if palindrome and 0 if not
 */

int helperfunction(char *s, int 1index, int 2index)
{
	if (1index < 2index && s[1ndex] == s[2index])
		return (helperfunction(s, 1index + 1, 2index - 1));
	if (s[1index] != s[2index])
	{
		return (0);
	}
	return (1);
}

/**
 *is_palindrome - checks if a string is palindrome or not
 *@s: pointer to a string
 *
 *Return: 1 if string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int a, b;

	a = 0;
	b = _strlen_recursion(s) - 1;

	if (!*s)
		return (1);

	return (helperfunction(s, a, b));
}
