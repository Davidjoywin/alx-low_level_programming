#!/usr/bin/python3
"""Perimeter of the island"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    perimeter = 0
    n = 0
    for row in grid:
        i = 0
        for col in row:
            if col == 1:
                i += 1
        if i > 0:
            perimeter += 2
        if i > n:
            n = i
    n *= 2
    perimeter += n
    return perimeter
