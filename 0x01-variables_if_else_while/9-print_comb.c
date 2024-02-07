#include <stdio.h>

int main(void)
{
	char num;

	for(num = 48; num <58; num++)
	{
		putchar(num);
	
		if(num != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return(0);
}
