#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: type int integer and it can be negative or positive
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
