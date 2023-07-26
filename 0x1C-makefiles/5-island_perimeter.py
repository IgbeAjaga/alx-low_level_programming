#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
        grid (List[List[int]]): A list of lists of integers representing the grid.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                # Check top
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1

                # Check bottom
                if row == len(grid) - 1 or grid[row + 1][col] == 0:
                    perimeter += 1

                # Check left
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1

                # Check right
                if col == len(grid[0]) - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter

