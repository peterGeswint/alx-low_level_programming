#!/usr/bin/env python3
"""def island_perimeter(grid): that returns the perimeter of the island"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    height = len(grid)
    width = len(grid[0])
    sizes = 0
    edge = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                sizes += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return ((sizes * 4) - (edge * 2))
