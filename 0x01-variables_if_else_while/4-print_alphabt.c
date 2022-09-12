#include <stdio.h>

/**
 *main - A program that print lowercase of alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;
	
	for (q = 'a' ; q <= 'z' ; q++)
	{
		if (q != 'e' && q != 'q')
		{
			putchar(q);
		}
	}
	putchar('\n');
	return (0);
}
