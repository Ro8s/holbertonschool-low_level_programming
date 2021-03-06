#!/usr/bin/python3
''' Function to calculate the perimeter '''


def island_perimeter(grid):
    ''' Function '''
    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i != 0:
                    if grid[i - 1][j] == 0:
                        perim = perim + 1
                else:
                    perim = perim + 1
                if i != len(grid) - 1:
                    if grid[i + 1][j] == 0:
                        perim = perim + 1
                else:
                    perim = perim + 1
                if j != 0:
                    if grid[i][j - 1] == 0:
                        perim = perim + 1
                else:
                    perim = perim + 1
                if j != len(grid[i]) - 1:
                    if grid[i][j + 1] == 0:
                        perim = perim + 1
                else:
                    perim = perim + 1
    return perim
