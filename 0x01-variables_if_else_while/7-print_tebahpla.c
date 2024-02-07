#include <stdio.h>

int main(void)
{
	char ch;

	for (ch = 122; ch > 96; ch--){
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
