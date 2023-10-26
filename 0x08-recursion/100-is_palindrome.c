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
 *@index1: first index
 *@index2: last index
 *
 *Return: 1 if palindrome and 0 if not
 */

int helperfunction(char *s, int index1, int index2)
{
	if (index1 < index2 && s[index1] == s[index2])
		return (helperfunction(s, index1 + 1, index2 - 1));
	if (s[index1] != s[index2])
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
