#include "main.h"

/**
 * main - entry point
 * Return: 0 (Success)
 */

int _putchar(char c)
{
	return putchar(c);
}

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
