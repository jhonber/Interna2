from random import randint

N, Q = 100000, 100000

print(N, Q)

for i in range(N):
    print(randint(-1e6, 1e6), end=' ')
print()

queries = []

i = 1
while len(queries) < Q:
    queries.append([1, i, randint(-1e6, 1e6)])
    queries.append([1, 1, i])

assert(len(queries) == Q)

for q in queries:
    print(*q)
