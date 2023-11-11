#!/usr/bin/python3
# 1-element_at.py


def element_at(my_list, idx):
    """Retrive an element from a list."""

    for i in range(len(my_list)):
        if idx < 0 or idx >= len(my_list):
            return None
