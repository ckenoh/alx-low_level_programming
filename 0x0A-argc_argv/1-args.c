#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number  of arguments passed to it
 * @argc: the # of arguments
 * @argv: the names of the arguments
 * Return: Always 0
*/

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
