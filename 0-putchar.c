#include "main.h"
/**
* main - Program prints _putchar, followed by a new line.
*
* Description: Program prints _putchar, followed by a new line.
*
* Return: 0 if execution has no errors
*/
int main(void)
{

	/*_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');*/

	char *str = "Hello\n";
	int i;
	for ( i = 0; str[i] != '\0'; i++)
	{
        _putchar(str[i]);
	}
	return (0);
}
