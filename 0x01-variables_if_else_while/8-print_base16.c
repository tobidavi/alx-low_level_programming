#include <stdio.h>

/**
 *main - Print number in base sixteen in lowecase
 *
 *Return: ALways 0 (Success)
 */
int main(void)
{
	char q;

	for (q = '0' ; q <= '9' ; q++)
	{
		putchar(q);
	}
	for (q = 'a' ; q <= 'f' ; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
