import sys

class SegTree:

    def __init__(self, data):
        self.n = len(data)
        self.t = [0 for i in range(2 * self.n)]
        for i in range(self.n):
            self.t[self.n + i] = data[i]
        for i in range(self.n - 1, -1, -1):
            self.t[i] = max(self.t[i << 1], self.t[i << 1 | 1])

    def add(self, p, val):
        p += self.n
        self.t[p] += val
        while p > 1:
            self.t[p >> 1] = max(self.t[p], self.t[p ^ 1])
            p >>= 1

    def query(self, l, r):
        res = 0
        l += self.n
        r += self.n
        while (l < r):
            if (l & 1) != 0:
                res = max(res, self.t[l])
                l += 1
            if (r & 1) != 0:
                r -= 1
                res = max(res, self.t[r])
            l >>= 1
            r >>= 1
        return res


n, q = map(int, input().split())
data = list(map(int, input().split()))
tree = SegTree(data)
for _ in range(q):
    T, A, B = map(int, input().split())
    if T == 1:
        tree.add(A - 1, B)
    else:
        print(tree.query(A - 1, B))