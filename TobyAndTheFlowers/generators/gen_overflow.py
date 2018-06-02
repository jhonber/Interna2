import sys
from random import randint

MAX = 100000

N = MAX
Q = MAX
print(N, Q)
for i in range(N):
    print(randint(1e6, 1e6), end=' ')
print()

for i in range(Q):
    T = randint(1, 2)
    print(T, end=' ')
    range_q = N / 2 - 10
    if T == 1:
        print(randint(range_q, range_q + 10), int(1e6))
    else:
        L, R = randint(range_q, range_q + 10), randint(range_q, range_q + 100)
        if L > R:
            L, R = R, L
        print(L, R)