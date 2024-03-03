#!/usr/bin/python3

def no_c(my_string):
    new_string = ''.join([x for x in my_string if x != "c" and x != "C"])

    '''using a generator expression instead of a list comprehension  could be more memory efficient for longer strings since it doesn't create an intemediary list
    new _string = ''.join(x for x in my_string if x.lower() != "c" 
    the .lower() is also more concise'''
    return new_string
