#include "main.h"

/**
 * convert_binary_to_uint - converts a binary number to an unsigned int(decimal).
 *
 * @binary_string: pointer to a string containing a binary number
 *
 * Return: converted decimal value of binary number, or 0 if error
 */
unsigned int convert_binary_to_uint(const char *binary_string)
{
	int i;
	unsigned int digit, result = 0;
	
	if (binary_string == NULL)
		return (0);

	for (i = 0; binary_string[i] != '\0'; i++)
	{
		if (binary_string[i] == '0')
			digit = 0;
		else if (binary_string[i] == '1')
			digit = 1;
		else
			return (0);
		
		result = (result << 1) + digit;
	}
	
	return (result);
}

