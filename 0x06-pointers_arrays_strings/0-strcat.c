#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: input variable pointer
 * @src: input variable poointer
 * Return: the resulting destination variable
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}
