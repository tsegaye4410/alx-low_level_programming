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

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
		putchar(x + '0');
		putchar(y + '0');
		if (x < 8)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
