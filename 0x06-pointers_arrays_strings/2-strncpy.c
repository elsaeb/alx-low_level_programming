#include "main.h"
/**
 * _strncpy - copies destination to the source string
 * @dest: input string pointer
 * @src: input string pointer
 * @n: input integer vrible
 * Return: the destination character array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;
	char *start = src, *temp = dest;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;
	return (temp);
}
