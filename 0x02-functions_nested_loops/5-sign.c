#include "main.h"

/**
 * print_sign - check the code
 * @n: an input character
 * checks for sign of a character
 * Return: 1 if positive ,0 if zero and - if negative
 */
int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else
		if (n == 0)
		{
			_putchar('0');
			sign = 0;
		}
		else
		{
			_putchar('-');
			sign = -1;
		}
	return (sign);
}
