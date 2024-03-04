#!/usr/bin/python3
def square_list(N):
    return N**2

def square_matrix_simple(matrix=[]):
    return [[square_list(element) for element in row] for row in matrix]
