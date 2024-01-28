#!/usr/bin/python3
# the Island Perimeter solution
def island_perimeter(grid=list) -> int:
    # will need to get the dimensions of the grid
    height = len(grid)
    width = len(grid[0])
    # iter for number of islands
    count = 0
    # iter for number of neighbours
    touch = 0
    # looping over each element in the grid
    for x in range(height):
        for y in range(width):
            if grid[y][x] == 1:
                count += 1
                # check for all the leftside neighbours
                if y - 1 >= 0 and grid[x][y - 1] == 1:
                        touch += 1
                # check for all the rightside neighbours
                if y + 1 < width and grid[x][y + 1] == 1:
                        touch += 1
                # check for all the rightside neighbours
                if x + 1 < height and grid[x + 1][y] == 1:
                        touch += 1
                # check for all the leftside neighbours
                if x - 1 >= 0 and grid[x - 1][y] == 1:
                        touch += 1
    # get the theoretical proof
    total_perimeter = count * 4
    # the actual value
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
