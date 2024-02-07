#include <stdio.h>

int main(void)
{
	char num, ch;

	for(num = 48; num < 58; num++){
		putchar(num);
	}
	for(ch = 97; ch < 103; ch++){
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
