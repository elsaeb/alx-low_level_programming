#include "main.h"

/**
 * rev_string - reverse string
 * @s: input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char str;

	while (s[length] != '\0')
		length++;

	while (i < length--)
	{
		str = s[i];
		s[i++] = s[length];
		s[length] = str;
	}
}
