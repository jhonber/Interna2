from functools import lru_cache

n, m = map(int, input().split())

data = []

for i in range(n):
    row = [int(x) for x in input().split()]
    data.append(row)


@lru_cache(maxsize=None)
def go(i, j):
    if (i == (len(data) - 1)) and (j == (len(data[0]) - 1)):
        return data[i][j]

    best = 666666
    if i + 1 < len(data):
        best = min(best, go(i + 1, j) + data[i][j])
    if j + 1 < len(data[0]):
        best = min(best, go(i, j + 1) + data[i][j])
    return best


print(go(0, 0))
