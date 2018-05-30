n, m = map(int, input().split())

g = [[] for i in range(n)]

for i in range(m):
    u, v = map(int, input().split())
    u -= 1
    v -= 1
    g[u].append(v)

q = int(input())

for _ in range(q):
    cur = [int(input()) - 1]
    visited = {}
    visited[cur[0]] = True
    while len(cur) > 0:
        nxt = []
        for node in cur:
            for to in g[node]:
                if to not in visited:
                    visited[to] = True
                    nxt.append(to)
        cur = nxt

    print(len(visited) - 1)
