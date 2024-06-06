#!/usr/bin/env python3
"""def island_perimeter(grid): that returns the perimeter of the island"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:  # Check cell above
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:  # Check cell to the left
                    perimeter -= 2
    return perimeter
