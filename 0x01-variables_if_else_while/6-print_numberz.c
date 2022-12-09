#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'print alphabet'
 * Return: Always 0 (suceess)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
		putchar(c + '0');
	putchar('\n');
	return (0);
}
