#include "main.h"
/**
 * _abs - gives absolute value of number
 *@num: an imput character
 *Return: the abs of the number
 */
int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	else
		return (num);
}
