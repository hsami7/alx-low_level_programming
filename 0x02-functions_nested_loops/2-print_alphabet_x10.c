#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char	i;
	int	count;

	count = 0;
	while (count < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		count++;
		_putchar('\n');
	}
}
