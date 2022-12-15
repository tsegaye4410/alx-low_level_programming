#include "main.h"
/**
 * _isdigit - checks for digits 0-9
 * @c: character to check.
 * Return: 1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
