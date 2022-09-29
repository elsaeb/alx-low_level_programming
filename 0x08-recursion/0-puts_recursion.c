#include "main.h"
/**
 * _puts_recursion - prints a string using recursion followed by new line
 * @s: input character pointer variable
 * Return: the pointer to the string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
