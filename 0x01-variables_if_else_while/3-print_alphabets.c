#include <stdio.h>
/**
 * main - Prints in lowercase and uppercase
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char q;

	for (q = 'a' ; q <= 'z' ; q++)
	{
		putchar(q);
	}
	for (q = 'A' ; q <= 'Z' ; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
