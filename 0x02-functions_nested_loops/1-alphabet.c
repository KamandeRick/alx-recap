#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	printf(sizeof(str));
}
