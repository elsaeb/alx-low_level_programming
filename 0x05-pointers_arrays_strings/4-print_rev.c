#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: input string
 * Return: nothing
 */
void print_rev(char *s)
{
	char *len = s;

	while (*len)
		len++;
	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
