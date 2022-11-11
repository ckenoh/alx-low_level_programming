#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments
 * @argc: the number of arguments
 * @argv: the names of arguments
 * Return: Always 0
*/

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
