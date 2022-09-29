#include "main.h"
/**
 * _puts_recursion - prints a string using recursion followed by new line
 * @s: input character pointer variable
 * Return: the pointer to the string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
