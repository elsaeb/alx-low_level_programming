#include "main.h"

/**
 * _isalpha -check the code
 * @c: an input character
 * Description: function uses _putchar to chech if a character is letter.
 * Return: 1 if c is lower or uppercase letter and 0 if c is not letter.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
