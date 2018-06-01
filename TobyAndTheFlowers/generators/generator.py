import sys
from random import randint

MAX = 100000

N, Q = map(int, sys.argv[1:3])
if (N > 0):
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
elif N == 0:
    N = MAX
    Q = MAX
    print(N, Q)
    for i in range(N):
        print(randint(1e6, 1e6), end=' ')
    for i in range(Q):
        T = randint(1, 2)
        print(T, end=' ')
        range_q = N / 2 - 10;
        if T == 1:
            print(randint(range_q, range_q + 10), int(1e6))
        else:
            L, R = randint(range_q, range_q + 10), randint(range_q, range_q + 100)
            if L > R:
                L, R = R, L
            print(L, R)

elif N == -1:
    N = MAX
    Q = MAX
    print(N, Q)
    for i in range(N):
        print(randint(0, 1e6), end=' ')
    for i in range(Q):
        T = randint(1, 2)
        print(T, end=' ')
        if T == 1:
            print(randint(1, N), randint(-1e6, 1e6))
        else:
            print(1, i + 1)

else:
    N = randint(1, 1e5)
    Q = randint(1, 1e5)
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
