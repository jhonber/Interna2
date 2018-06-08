from random import randint

N, Q = 100000, 100000

print(N, Q)

for i in range(N):
    print(randint(-1e6, 1e6), end=' ')
print()

queries = []

i = 1
while len(queries) < Q:
    queries.append([1, randint(0, i), randint(-1e6, 1e6)])
    queries.append([2, 1, i])
    i += 1

assert(len(queries) == Q)

for q in queries:
    print(*q)
