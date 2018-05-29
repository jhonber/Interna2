import sys
from random import randint

N = int(sys.argv[1])
M = randint(0, (N * (N - 1)) / 2)
Q = randint(1, 1000)
edge_list = {}

print(N, M)

while len(edge_list.keys()) < M:
    X = randint(1, N)
    Y = randint(1, N)
    if (X, Y) in edge_list or X == Y:
        continue
    print(X, Y)
    edge_list[(X, Y)] = True

print(Q)
for i in range(Q):
    print(randint(1, N))
