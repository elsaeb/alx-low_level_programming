#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: input string
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
