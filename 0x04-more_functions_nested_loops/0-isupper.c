#include "main.h"

/**
 *_isupper - checks for uppercase
 *@c: parameter to be tested
 *
 *Return: 1 when c is uppercase
 * 0 when otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
