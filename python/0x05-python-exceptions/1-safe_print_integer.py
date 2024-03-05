#!/usr/bin/python
def safe_print_integer(value):
    try:
        int_value = int(value)
        print("{:d}".format(int_value))
        return True

