#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'print alphabet'
 * Return: Always 0 (suceess)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
