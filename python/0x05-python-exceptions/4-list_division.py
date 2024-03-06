#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    result_list = []
    error_value = 0
    for i in range (0, list_length):
        try:
            result = (my_list_1[i] / my_list_2[i])
        except TypeError:
            print("wrong type")
            result = error_value
        except IndexError:
            print("out of range")
            result = error_value
        except ZeroDivisionError:
            print("division by zero")
            result = error_value
        finally:
            result_list.append(result)
    return result_list
