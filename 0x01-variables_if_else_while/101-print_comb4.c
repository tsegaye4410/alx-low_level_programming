#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'print alphabet'
 * Return: Always 0 (suceess)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 7; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
