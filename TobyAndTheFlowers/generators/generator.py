import sys
from random import randint

N, Q = map(int, sys.argv[1:3])
print(N, Q)

for i in range(N):
    print(randint(0, 1e6), end=' ')
print()

for i in range(Q):
    T = randint(1, 2)
    print(T, end=' ')
    if T == 1:
        print(randint(1, N), randint(-1e6, 1e6))
    else:
        L, R = randint(1, N), randint(1, N)
        if L > R:
            L, R = R, L
        print(L, R)
