#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    count = 0
    while x > 0:
        try:
            print("{:d}".format(int(my_list[count])), end='')
