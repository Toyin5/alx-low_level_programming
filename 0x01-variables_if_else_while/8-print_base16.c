#include <stdio.h>
/**
 * main - main function
 * description - A program that prints all numbers
 * of base 16 in lowercase
 * Return:(0) for success
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
		putchar(i + '0');
	for (int y = 'a'; y <= 'f'; y++)
		putchar (y);

putchar('\n');
return (0);
}
