#include "main.h"

int print_sign(int n)
{
	int result, ascii_zero, ascii_plus_sign, ascii_minus_sign;

	ascii_zero = 48;
	ascii_plus_sign = 43;
	ascii_minus_sign = 45;

	if(n > 0){
		_putchar(ascii_plus_sign);
		result = 1;
	} else if(n == 0){
		_putchar(ascii_zero);
		result = 0;
	} else{
		_putchar(ascii_minus_sign);
		result = -1;
	}
	return(result);
}
