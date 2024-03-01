#include "main.h"

int main(void){
	int i;
	char *fizz = "fizz";
	char *buzz = "buzz";

	for(i = 1; i <101; i++){
		if((i % 3) != 0) {
			 while (*fizz != '\0') {
				 _putchar(*fizz);
				 fizz++;
			 }
			 _putchar('\n');
		} else if((i % 5) != 0) {
			while (*buzz != '\0') {
                                 _putchar(*buzz);
                                 buzz++;
			}
			_putchar('\n');
		} else {
			_putchar(i);
		}
	}
	return(0);
}
