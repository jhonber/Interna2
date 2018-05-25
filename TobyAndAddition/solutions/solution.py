T = int(input())

for i in range(T):
    a, b = map(int, input().split())
    print (bin(a).count('1') +  bin(b).count('1'))
