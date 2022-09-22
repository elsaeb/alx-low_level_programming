#include "main.h"
/**
 * reverse_array - prints reverse of array
 * @a: input int pointer
 * @n: number of elements of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
