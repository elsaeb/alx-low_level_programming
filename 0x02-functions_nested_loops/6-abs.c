#include "main.h"
/**
 * _abs - gives absolute value of number
 *@num: an imput character
 *Return: the abs of the number
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = -1 * num;
		_putchar(num);
	}
	else
		_putchar(num);
	return (num);
}
