#include "main.h"
#include <stdio.h>

/**
 * _isdigit- check the code.
 * @c: input integer variable
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	int k;
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			k = 1;
			break;
		}
		else
			k = 0;
	}
	return (k);
}
