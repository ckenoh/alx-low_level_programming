#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');

	}
	_putchar('\n');
	return (0);
}
