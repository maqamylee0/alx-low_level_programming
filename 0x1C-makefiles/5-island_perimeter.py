#!/usr/bin/python3
# module that returns island perimeter


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of integers): The grid representing the
    island and water zones.

    Returns:
    int: The perimeter of the island.

    Note:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don't exceed 100
    - Grid is completely surrounded by water, and there is one
    island (or nothing).
    - The island doesn't have "lakes" (water inside that isn't
    connected to the water around the island).
    """

    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    if rows == cols or rows > 100 or cols > 100:
        return 0

    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4

                """
                Check if there is a land cell to the left
                and reduce perimeter accordingly
                """
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 2

                """
                Check if there is a land cell above and
                reduce perimeter accordingly
                """
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 2

    return perimeter
