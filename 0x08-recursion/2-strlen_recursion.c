#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: The string
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
