#include "main.h"
/**
 * _islower - checks for lowercase
 *
 * @c: parameter to be checked
 *
 * Return: 0 on success and 1 on fail
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
