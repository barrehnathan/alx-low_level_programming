#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
