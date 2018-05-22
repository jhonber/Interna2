from random import randint

T = 10
print(T)
N = 100
for i in range(T):
    print(N)
    ans = randint(10, 100)
    for j in range(N):
        print(ans * randint(1, 100), end=' ')
    print('')
