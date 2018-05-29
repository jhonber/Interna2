import sys
from random import randint

N = int(sys.argv[1])
M = int(sys.argv[2])
MAX = int(sys.argv[3])
print(N, M)
for i in range(N):
    for j in range(M):
        print(randint(1, MAX), end = " ")
    print()
print()
