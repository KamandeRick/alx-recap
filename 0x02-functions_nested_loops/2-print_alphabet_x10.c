#include "main.h"

/*void print_alphabet_x10(void)
{
	int i;
	int j=0;

	while(j < 10)
	{
		for(i = 97; i < 123; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}*/

void print_alphabet_x10(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz\n";
	int j = 0;
	int i;

	while(j < 10)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		j++;
	}
}
