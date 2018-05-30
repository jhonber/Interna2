n, m = map(int, input().split())

data = []

for i in range(n):
    row = [int(x) for x in input().split()]
    data.append(row)


for i in range(n - 1, -1, -1):
    for j in range(m - 1, -1, -1):
        best = 66666666
        if j + 1 < m:
            best = min(best, data[i][j + 1] + data[i][j])
        if i + 1 < n:
            best = min(best, data[i + 1][j] + data[i][j])
        if (i != (n - 1)) or (j != (m - 1)):
            data[i][j] = best

print(data[0][0])
