#include <stdio.h>

/**
 *main - A peogram that prints all number off base ten
 *
 *Return: ALways 0 (Success)
 */
int main(void)
{
	int q;

	for (q = 0 ; q <= 9 ; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
