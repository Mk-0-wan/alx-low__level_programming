#!/usr/bin/python3
""" the Island Perimeter solution"""

def island_perimeter(grid=list) -> int:
    """Island Perimeter Calculator
    Args:
        grid (list): a list of lists where island is
        represented by value of 1
    Return:
        returns the total perimeter of the islands found

    try running the file as a main file to see the result
    Steps:
       1. will need to get the dimensions of the grid
       2. iter for number of islands
       3. iter for number of neighbours
       4. looping over each element in the grid
       5. check for all the leftside neighbours
       6. check for all the rightside neighbours
       7. check for all the rightside neighbours
       8. check for all the leftside neighbours
       9. get the theoretical proof
       10.the actual value
    """
    height = len(grid)
    width = len(grid[0])
    count = 0
    touch = 0
    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                count += 1
                if y - 1 >= 0 and grid[x][y - 1] == 1:
                        touch += 1
                if y + 1 < width and grid[x][y + 1] == 1:
                        touch += 1
                if x + 1 < height and grid[x + 1][y] == 1:
                        touch += 1
                if x - 1 >= 0 and grid[x - 1][y] == 1:
                        touch += 1
    total_perimeter = count * 4
    return (total_perimeter - touch)

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
