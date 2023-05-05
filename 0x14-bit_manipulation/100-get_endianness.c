#include "main.h"

/**
 * get_endianness - check for endiannes
 * Return: 1 if little endian, 0 big endian
 */


int get_endianness(void)
{
	unsigned char *value;
	unsigned int num;

	num = 1;
	value = (unsigned char *)&num;
	if (*value == 1)
		return (1);
	else
		return (0);
}
