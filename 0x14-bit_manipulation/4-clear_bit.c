#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: parameter
 * @index: index
 *
 * Return: 1 if works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masks;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	masks = 1;
	masks <<= index;

	*n = *n & ~masks;/*clear bit at index*/
	return (1);
}
