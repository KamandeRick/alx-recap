#include "main.h"

void print_line(int n){
/*int i = 95;
	int j;
       if( n <= 0 )
       {
       _putchar('\n');
       }
       else{for(j = 0; j <= n; j++){
		 _putchar(i);
		 }}*/
	int num;
	num = n;
	while(num > 0){
		_putchar('_');
		num --;
	}
	_putchar('\n');
}      
