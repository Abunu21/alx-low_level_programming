#include <stdio.h>
/**
 * main - prints letters in uppercase
 * Description:  prints alphabetical order  small, 
 * and convert to uppercase alphabetical order.
 * Return: 0 is indicates success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
