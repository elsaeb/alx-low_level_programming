#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: input character pointer
 * @dest: input character pointer
 * @n: input integer
 * Return: apointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *beg = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
