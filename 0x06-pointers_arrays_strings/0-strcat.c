#include "main.h"
#include <string.h>
/**
 * strcat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */
char *strcat(char *dest, const char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

