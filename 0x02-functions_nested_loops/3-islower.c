#include "main.h"
/**
 * _islower - check the char is lowercase
 * @u: is the char to be checked
 * Return: 1 if char us lowercase, orherwise 0
 */
int _islower(int u)
{
	if (u >= 'a' && u <= 'z')
		return (1);
	else
		return (0);
}
