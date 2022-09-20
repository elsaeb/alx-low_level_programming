#include "main.h"
#include <stdio.h>

/**
 * print_array - print n number of elements of array
 * @a:input variable
 * @n:input bariable
 * Return - nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}


