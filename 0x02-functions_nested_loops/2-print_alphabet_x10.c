#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet 10 timesin lowercase
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
