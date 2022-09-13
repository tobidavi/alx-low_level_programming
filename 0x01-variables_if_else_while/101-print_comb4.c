#include <stdio.h>

/**
 * main - Combination of three digits
 *
 * Return: Always 0 (Success);
 */
int main(void)
{
	int q;
	int w;
	int a;

	for (q = '0'; q <= '9'; q++)
	{
		for (w = '0'; w <= '9'; w++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if ((q < w) && (w < a))
				{
					putchar(q);
					putchar(w);
					putchar(a);

					if (q != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
