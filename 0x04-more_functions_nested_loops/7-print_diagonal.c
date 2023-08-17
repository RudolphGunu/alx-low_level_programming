#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draw a diagonal line in the terminal
 * @n: size of diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int g;
	int d;

	for (g = 0; g < n; ++g)
	{
		for (d = 0; d < g; ++d)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
