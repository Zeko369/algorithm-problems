# [4, 3, -1, 1] -> smallest int not in arr 2

arr = [5, 3, -1, 1, 2]
if False:
  arr = input().split(' ')

# arr = list(filter(lambda x: x > 0, arr))

curr = -1

for i in range(len(arr) - 1):
  if arr[i] < 0:
    continue

  if(arr[i] < arr[i+1]):
    if(arr[i+1] - arr[i] > 1):
