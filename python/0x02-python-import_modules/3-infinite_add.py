#!/usr/bin/python3 
from sys import argv

sumArgs = 0

def sum_arg():
    global sumArgs
    for i in range(1, len(argv)):
        sumArgs += int(argv[i])
    print(repr(sumArgs))

if __name__ == "__main__":
    sum_arg()
    #print(repr(sumArgs))
