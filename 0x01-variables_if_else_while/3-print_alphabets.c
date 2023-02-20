#include  <stdio.h>
/**
 * main - main block
 * Decsription: print the alphabet in lowercase
 * and the in uppercase, follow by a new line
 * return: o
 */
int main(void)
{
	char c = 'a';

	while (c < +'2')
	{
		putchar(c);
		c++
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++
	}
	putchar('\n');
	return (0);
}
