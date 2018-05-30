n, m = map(int, input().split())

g = [[] for i in range(n)]

for i in range(m):
    u, v = map(int, input().split())
    u -= 1
    v -= 1
    g[u].append(v)

q = int(input())


def dfs(visited, g, node):
    for to in g[node]:
        if to not in visited:
            visited[to] = True
            dfs(visited, g, to)

for _ in range(q):
    cur = int(input()) - 1
    visited = {}
    visited[cur] = True
    dfs(visited, g, cur)
    print(len(visited) - 1)
