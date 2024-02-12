#include "main.h"

int print_last_digit(int i)
{
	int last_digit;
	int ascii_offset;
	int ascii_value;

	ascii_offset = 48;

	last_digit = i % 10;

	if(i < 0)
	{
		last_digit = -last_digit;
	}

	ascii_value = last_digit + ascii_offset;
	_putchar(ascii_value);

	return (last_digit);
}
