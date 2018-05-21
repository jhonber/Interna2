T = int(input())
coins = [20, 10, 5, 2, 1]

for i in range(T):
    price = int(input())
    ans = 0
    for c in coins:
        ans += price // c
        price %= c
    print(ans)