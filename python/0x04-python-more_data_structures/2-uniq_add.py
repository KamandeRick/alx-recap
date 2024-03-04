#!/usr/bin/python3

def uniq_add(my_list=[]):
    my_set = set(my_list)
    sum_set = 0
    for i in my_set:
        sum_set += i
    return sum_set

