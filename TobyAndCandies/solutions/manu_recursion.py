def go(candies, people):
    if people == 1:
        return 1
    ans = 0
    for c in range(candies + 1):
        ans += go(candies - c, people - 1)
    return ans

T = int(input())
for _ in range(T):
    d, k = map(int, input().split())
    print(go(d, k))