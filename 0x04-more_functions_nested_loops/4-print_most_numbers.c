#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * without 2 and 4
 * @a: first int
 * Return: always 0
 */

void print_most_numbers(int a)
{
	int a = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');

		a++;
	}
	_putchar('\n');
}
