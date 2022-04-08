#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the letters in alphabetical order
 * Description:-print the letters in alphabetical orders
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
