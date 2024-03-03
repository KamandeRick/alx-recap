#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):
    n = len(my_list)
    for i in range(n):
        for j in range(0, n-i-1):
            if my_list[j] < my_list[j+1]:
                my_list[j], my_list[j+1] = my_list[j+1], my_list[j]

    for i in my_list:
        print("{}".format(int(i)))
