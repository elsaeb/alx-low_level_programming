#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input character pointer
 * @s2: input character pointer
 * Return: -ve if not equal , +ve if equal. else 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
