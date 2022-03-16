#include "holberton.h"

/**
 * print_alphabet - ENtry function
 * Return:0 for success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
