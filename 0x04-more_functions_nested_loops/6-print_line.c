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
	/*int num;
	num = n;
	while(num > 0){
		_putchar('_');
		num --;
	}
	_putchar('\n');*/

	int num;
        num = n;
        while(num > 0){
		int j;
		for(j = 0; j <= num; j++){
			_putchar(' ');
			_putchar('\\');}
                _putchar('\\');
                num --;
        }
        _putchar('\n');



}      
