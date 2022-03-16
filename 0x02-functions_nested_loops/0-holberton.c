#include "holberton.h"

/**
 * main - fuction
 * Return:0 for success
 */

int main(void)
{
char c[10] = "Holberton";
int i = 0;
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
