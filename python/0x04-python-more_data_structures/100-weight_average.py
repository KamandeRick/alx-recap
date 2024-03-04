#!/usr/bin/bash

def weight_average(my_list=[]):
    if len(my_list) < 1:
        return 0
    else:
        sum_score = 0
        sum_weight = 0
        for i in my_list:
            sum_score += i[0] * i[1]
            sum_weight += i[1]
    weight_average = sum_score/sum_weight
    return weight_average
 

#
