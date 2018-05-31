import sys
from random import randint

N = randint(1, 1000)
Q = randint(1, 1000)
T = int(sys.argv[4])
edge_list = {}


if T == 1 :
    print(N, N * (N - 1))
    for i in range(1, N + 1) :
        for j in range(1, N + 1) :
            if i != j:
                print(i, j)

else :
    M = randint(0, min(2000, N * (N - 1)))
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
