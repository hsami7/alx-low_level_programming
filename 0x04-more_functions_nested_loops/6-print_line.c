#include "main.h"

/**
 * print_line - takes an int as input and prints the amount of lines given
 *@n: starting point
 *
 * Return: 0
 */

void print_line(int n)
{

	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
