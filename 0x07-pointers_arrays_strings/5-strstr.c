#include "main.h"
/**
 * _strstr - locate and print string
 * @haystack: string to locate from
 * @needle: string to locate
 * Return: pointer to s or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + 1);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
