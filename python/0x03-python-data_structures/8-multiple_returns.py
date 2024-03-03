#!/usr/bin/python3

def multiple_returns(sentence):
   #''' length = ""
   #first = ""
   #if len(sentence) < 1:
        #length = "0"
        #first = "None"
        #print("Length: {} - First character: {}".format(length, first))
    #else:
        #length = len(sentence)
        #first = sentence[0]
        #print("Length: {} - First character: {}".format(length, first))'''
    return len(sentence), sentence[0] if sentence else None
