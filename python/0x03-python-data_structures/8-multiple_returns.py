#!/usr/bin/python3

def multiple_returns(sentence):
    length = ""
    first = ""
    if len(sentence) < 1:
        length = "0"
        first = "None"
        print("Length: {:d} - First character: {}".format(length, first))
    else:
        length = len(sentence)
        first = sentence[0]
        print("Length: {:d} - First character: {}".format(length, first))
