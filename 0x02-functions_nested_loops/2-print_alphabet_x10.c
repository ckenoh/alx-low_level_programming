#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
*/

void print_alphabet_x10(void)
{
	int ten;
	char a;

	for (ten = 0; ten <= 9; ten++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	}

	_putchar('\n');
}
