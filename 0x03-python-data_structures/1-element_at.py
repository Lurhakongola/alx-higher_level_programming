#!/usr/bin/python3
def element_at(my_list, idx):
    if idx < len(my_list) and idx > -1:
        return my_list[idx]
    return None

# def element_at(my_list, idx):
#     if idx>len(my_list) or idx<0:
#         return none
# return my_list[idx]