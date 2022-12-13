#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @u: the char to be checked
 * Return: 1 if u is a letter, 0 otherwise
 */
int _isalpha(int u)
{
	if ((u >= 'a' && u <= 'z') || (u >= 'A' && u <= 'Z'))
		return (1);
	else
		return (0);
}
