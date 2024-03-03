#!/usr/bin/python3

def divisible_by_2(my_list=[]):
    list_result = [num % 2 == 0 for num in my_list]
    return list_result
