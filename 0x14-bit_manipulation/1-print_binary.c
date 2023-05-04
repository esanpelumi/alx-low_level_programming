#include "main.h"

/**
 * print_binary - prints a number in binary notation
 *
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* declare variables */
	unsigned long int num, val;
	int i;
	int j = 0;

	num = sizeof(unsigned long int) * 8;

	for (i = num - 1; i >= 0; i--)
	{
		/* calculate the value of current bit */
		val = (n >> i) & 1;

		if (val == 1)
			j = 1;

		if (j == 1)
			_putchar(val + '0');
	}
	if (j == 0)
		_putchar('0');
}
