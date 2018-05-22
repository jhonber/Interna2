import sys
from random import randint

N = int(sys.argv[1])
print(N)
for i in range(N):
    print(randint(0, 1000), randint(0, 1000))
