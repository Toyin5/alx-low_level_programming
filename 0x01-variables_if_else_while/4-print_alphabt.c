#include <stdio.h>
/**
 * main - main function
 * Description: Generate a random number,check its last digit
 * and compare it with 5
 * Return: (0) for success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
