#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * @...: other parameters
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a_list;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(a_list, n);
	for (; i < n; i++)
		sum += va_arg(a_list, int);

	va_end(a_list);
	return (sum);
}
