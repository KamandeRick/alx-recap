#include "main.h"

/* print-alphabet - prints lowercase alphabet followed by  a new line
 * return: always 0
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0;
	
	while(j < 10)
	{
		for (i = 97; i <123; i++)
		{
			_putchar(i);
		}
		_putchar("\n");
		j++;
	}
	return 0;
}
