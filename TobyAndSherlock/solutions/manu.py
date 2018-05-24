T = int(input())

for _ in range(T):
    N = int(input())
    if (N % 6) == 0:
        print('Sherlock')
    else:
        print('Toby')