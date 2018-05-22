from math import sqrt

n = int(input())

data = []
best = 1e100
for i in range(n):
    data.append(tuple(map(int, input().split())))
    for j in range(i):
        best = min(
            best,
            (data[i][0] - data[j][0]) ** 2 + (data[i][1] - data[j][1]) ** 2
        )

print(sqrt(best))