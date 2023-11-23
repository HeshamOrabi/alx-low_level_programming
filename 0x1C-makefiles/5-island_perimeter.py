#!/usr/bin/python3
"""

    function that returns the perimeter of the island described

"""

def island_perimeter(grid):
    """ Returns the perimeter of the island described """
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                width = (len(grid[i]) - 1) - j
                for p in range(len(grid)):
                    if grid[i + p][j] != 1 or (i + p) == len(grid) - 1:
                        if (i + p) == len(grid) - 1:
                            height = i + p
                        else:
                            height = i + p - 1
                        return width * height
