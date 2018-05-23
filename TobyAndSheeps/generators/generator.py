import sys
from random import randint

N = int(sys.argv[1])
Q = int(sys.argv[2])
print(N)
for i in range(N):
    print(randint(0, 1), end = " ")
print()
print(Q)
for i in range(Q):
    L = randint(1, N)
    R = randint(L, N)
    print(L, R)
