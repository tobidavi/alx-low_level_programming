#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print wheter negative,positive or zero from a random number
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANDMAX / 2;
	if(n>0)
	{
		print("%d is positive\n", n);
	}
	else if (n==0)
	{
		printf("%d is zero\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n",n);
	}
}
