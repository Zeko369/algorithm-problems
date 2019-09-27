class Queue:
  def __init__(self):
    self.queue = []

  def push(self, value):
    self.queue.append(value)

  def pop(self):
    return self.queue.pop()

  def isEmpty(self):
    return len(self.queue) == 0

class Point:
  def __init__(self, x, y):
    self.x = x
    self.y = y

  def __repr__(self):
    return '{} {}'.format(self.x, self.y)

class Solution(object):
  def inRange(self, grid, x, y):
    numRow, numCol = len(grid), len(grid[0])
    if x < 0 or y < 0 or x >= numRow or y >= numCol:
      return False
    return True

  def createBeen(self, grid):
    self.been = []
    for i in range(len(grid)):
      self.been.append([])
      for j in range(len(grid[0])):
        self.been[-1].append(0)

  def numIslands(self, grid):
    self.createBeen(grid)
    queue = Queue()
    out = 0

    for i in range(len(grid)):
      for j in range(len(grid[0])):
        if grid[i][j] == 1 and self.been[i][j] == 0:
          tmp = 0
          firstPoint = Point(i, j)

          queue.push(firstPoint)

          while not queue.isEmpty():
            point = queue.pop()

            if grid[point.x][point.y] == 0:
              continue

            tmp += 1

            if self.been[point.x][point.y] == 1:
              continue

            self.been[point.x][point.y] = 1

            if self.inRange(grid, point.x + 1, point.y): # Right
              queue.push(Point(point.x + 1, point.y))
            if self.inRange(grid, point.x - 1, point.y): # Left
              queue.push(Point(point.x - 1, point.y))
            if self.inRange(grid, point.x, point.y + 1): # Down
              queue.push(Point(point.x, point.y + 1))
            if self.inRange(grid, point.x, point.y - 1): # Up
              queue.push(Point(point.x, point.y - 1))

          out += 1
    return out

grid = [[1, 1, 0, 0, 0],
        [0, 1, 0, 0, 1],
        [1, 0, 0, 1, 1],
        [0, 0, 0, 0, 0]]

print(Solution().numIslands(grid))
# 3
