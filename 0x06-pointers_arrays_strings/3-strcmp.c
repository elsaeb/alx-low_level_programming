#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input character pointer
 * @s2: input character pointer
 * Return: -ve if not equal , +ve if equal. else 0
 */
int _strcmp(char *s1, char *s2)
{
	int l1 = 0, l2 = 0;

	while (*s1)
	{
		l1++;
		s1++;
	}
	while (*s2)
	{
		l2++;
		s2++;
	}

	if (l1 < l2)
	{
		return (-15);
	}
	else
		if (l1 > l2)
		{
			return (15);
		}
		else
			return (0);
}
