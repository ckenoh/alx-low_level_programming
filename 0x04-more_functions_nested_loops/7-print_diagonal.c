#include "main.h"

/**
 * print_diagonal - draws a diagonal line to the terminal
 * @n: the number of times '\' should be printed
 */

void print_diagonal(int n)
{
	int diag;

	if (n > 9)
	{
		for (diag = 0; diag < n; diag++)
			_putchar('\');
	}
	_putchar('\n');
}
