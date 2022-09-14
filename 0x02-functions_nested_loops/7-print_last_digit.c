#include "main.h"
/**
 * print_last_digit - check the code
 * @num: an input character
 * Return: the last digit of the number
 */
int print_last_digit(int num)
{
	int n;

	if (num < 0)
		n = -1 * (num % 10);
	else
		n = num % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
