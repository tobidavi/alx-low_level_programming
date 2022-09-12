#include <stdio.h>
/**
 * main - A program thatprints letters in lowercase
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char w;

	for (w = 'a' ; w <= 'z' ; w++)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
