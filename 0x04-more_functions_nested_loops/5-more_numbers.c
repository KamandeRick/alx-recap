#include "main.h"

void more_numbers(void){
	int i;
	int j;
	char *num = "01234567891011121314\n";
	for(i=0; i<10; i++){
		for(j = 0; num[j] != '\0'; j++){
			_putchar(num[j]);
		}
	}
}
