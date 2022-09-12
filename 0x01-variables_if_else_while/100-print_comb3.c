#include <stdio.h>
#include <unistd.h>

/**
 * main - Print two digits combinations
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;
	int w;

	for(q = '0'; q <= '9'; q++)
	{
		for(w = '0'; w <= '9'; w++)
		{
			if(q < w)
			{
				putchar(q);
				putchar(w);
				if((q != '8') | (q == '8' && w != '9'))
						{
						putchar(',');
						putchar(' ');
						}
			}
		}
	}
	putchar('\n');
	return (0);
}
