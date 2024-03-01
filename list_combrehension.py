#!/usr/bin/python3

combs = [(x,y) for x in range (10) for y in range(10) if x !=y and x < y]

#print(combs)

for i in combs:
    if i == (8,9):
        print("{}{}".format(i[0],i[1]))
    else:
        print("{}{}".format(i[0],i[1]), end = ", ")
