#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i, q, e;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != e && i != q)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
