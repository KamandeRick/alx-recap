#include "main.h"

/*void print_square(int size){
	int num, i;
	num = size;
	
	while(size>0){
		for(i=0; i< size; i++){
			while (num > 0){
				_putchar('#');
				num--;
			}
			_putchar('\n');
		}
		size --;
	}
	_putchar('\n');
}*/

void print_square(int size) {
    int row, col;

    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            _putchar('#');
        }
        _putchar('\n');
    }
}
