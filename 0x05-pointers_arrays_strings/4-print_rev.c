#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
/**
 * _strlen - give the length of string
 * @s: input character pointer
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

