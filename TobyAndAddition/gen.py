from random import randint as rd

MX = 1000000000000000000
tot = 1000

print(tot)
print("0 1")
print("8 64")
print("4 5")
print("66666666 33333333")
print("576460752303423487 576460752303423487")

for i in range(60):
    print(2**i, 2**i)
    print((2**i) - 1, (2**i) - 1)


tot = tot - (60 * 2) - 5

for i in range(int(tot / 3)):
    print(rd(1, 100), rd(1, 1000))

tot -= int(tot / 3)
for i in range(int(tot / 3)):
    print(rd(10000, MX/2), rd(10000, MX/2))

tot -= int(tot / 3)
for i in range(tot):
    print(rd(1e10, MX), rd(1e10, MX))
