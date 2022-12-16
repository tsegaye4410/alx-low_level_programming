#include "main.h"
/**
 * print_triangle - Prints a triangle of squares according parameter
 * @size: The size of the squares triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size; y > 1; y--)
			{
				_putchar(32);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
