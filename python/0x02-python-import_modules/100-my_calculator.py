#!/usr/bin/python3

from sys import argv
from sys import exit

from calculator_1 import add, sub, mul, div

def my_calc(a, operator, b):
    operators = ["+", "-", "*", "/"]
    if operator == "+":
        print("{} {} {} = {}".format(argv[1], argv[2], argv[3], add(int(argv[1]), int(argv[3]))))
    elif operator == "-":
        print("{} {} {} = {}".format(argv[1], argv[2], argv[3], sub(int(argv[1]), int(argv[3]))))
    elif operator == "*":
        print("{} {} {} = {}".format(argv[1], argv[2], argv[3], mul(int(argv[1]), int(argv[3]))))
    elif operator == "/":
        print("{} {} {} = {}".format(argv[1], argv[2], argv[3], div(int(argv[1]), int(argv[3]))))
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)

if __name__ == "__main__":
    if len(argv) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)
    else:
        a = int(argv[1])
        operator = argv[2]
        b = int(argv[3])
    my_calc(a, operator, b)

