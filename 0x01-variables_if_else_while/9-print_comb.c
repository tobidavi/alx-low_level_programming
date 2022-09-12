#include <stdio.h>

/**
 *main - Prints all combination of a single digit number
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	for (q = 48 ; q <= 57 ; q++)
	{
		putchar(q);
		if (q != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
