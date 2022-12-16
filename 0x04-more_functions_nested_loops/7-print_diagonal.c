#include "main.h"
/**
 * print_diagonal - Draws a diagonal line according to parameter
 * @n: The number of lines to draw
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			_putchar(32);
		}
		_putchar(92);

		_putchar('\n');
	}
}
