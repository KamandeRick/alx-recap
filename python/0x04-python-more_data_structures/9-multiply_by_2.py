#!/usr/bin/python3
#def multiply_by_2(a_dictionary):
    #new_dict = a_dictionary.copy()
    #for key in (new_dict):
       # print("{}: {}".format(key, a_dictionary[key]*2))
    #return new_dict
def multiply_by_2(a_dictionary):
    new_dict = {}
    for key, value in a_dictionary.items():
        new_dict[key] = value * 2
    return new_dict
