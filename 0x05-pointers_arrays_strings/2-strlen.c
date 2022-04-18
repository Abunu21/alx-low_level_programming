#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: the length of the strings
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

