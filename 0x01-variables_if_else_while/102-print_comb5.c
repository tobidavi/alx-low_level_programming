#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints all combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;
	int w;
	int a;
	int b;

	for (q = 48; q <= 57; q++)
	{
		for (w = 48; w <= 57; w++)
		{
			for (a = 48; a <= 57; a++)
			{
				for (b = 48; b <= 57; b++)
				{
					if ((((a + b) > (q + w)) && (a >= q)) || (q < a))
					{
						putchar(q);
						putchar(w);
						putchar(' ');
						putchar(a);
						putchar(b);
						if (q + w + a + b == 227 && q == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
