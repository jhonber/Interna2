from math import sqrt

n = int(input())

data = input()
values = [0]
data = [int(x) for x in data.split()]
for i in range(1, n + 1):
    values.append(values[i - 1] + data[i - 1])

q = int(input())
for i in range(q):
    l, r = tuple(map(int, input().split()))
    sheeps = values[r] - values[l - 1]
    wolves = (r - l + 1) - sheeps
    if (wolves > sheeps):
        print ("Yes")
    else:
        print ("No")
