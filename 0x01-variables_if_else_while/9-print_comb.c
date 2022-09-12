#include <stdio.h>

/**
 *main - Prints all combination of a single digit number
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	for (q = 0 ; q <= 10 ; q++)
	{
		putchar(q);
		if (q != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
