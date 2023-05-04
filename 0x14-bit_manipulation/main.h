#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

int put_character(char c);
unsigned int convert_binary_to_uint(const char *binary_string);
void print_binary_representation(unsigned long int number);
int get_bit_value(unsigned long int number, unsigned int index);
int set_bit_to_one(unsigned long int *number, unsigned int index);
int clear_bit_to_zero(unsigned long int *number, unsigned int index);
unsigned int count_different_bits(unsigned long int number1, unsigned long int number2);
int get_machine_endianness(void);

#endif

