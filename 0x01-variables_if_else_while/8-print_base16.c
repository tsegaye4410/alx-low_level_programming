#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'print alphabet'
 * Return: Always 0 (suceess)
 */
int main(void)
{
	int c;

	char b;

	c = 0;
	b = 'a';

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	while (b < 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
