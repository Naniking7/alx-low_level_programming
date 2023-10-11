#include "main.h"
/**
 * _isalpha - checks for lower and uppercase alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 0 on success and 1 on fail
 */

int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	  return (1);
  else 
	  return (0);
}
