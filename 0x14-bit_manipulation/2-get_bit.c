#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @n: an integer
 * @index: given index
 *
 * Return: the value at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int checker;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	checker = 1;
	checker <<= index;

	if ((n & checker) == checker)
		return (1);
	return (0);
}
