#include<bits/stdc++.h>
using namespace std;

#define D(x) cout << #x << " = " << (x) << endl;

struct seg_tree {
  vector<long long> tree;
  seg_tree (int n) {
    tree.assign(4 * n + 10, 0);
  }

  //              node,   0,     n,     a,     b
  long long query(int id, int x, int y, int l, int r) {
    if ( x >= l && y <= r)
      return tree[id];
    if (y < l || x > r ) return -LLONG_MAX;

    int mid = (x + y) / 2;
    long long a = query(id * 2, x, mid, l, r);
    long long b = query(2 * id + 1, mid + 1, y, l, r);

    return  max(a, b);
  }

  void update (int id, int x, int y, int pos, long long val) {
    if (x == y) {
      tree[id] = val;
      return;
    }

    int mid = (x + y) / 2;
    if (mid >= pos) update(2 * id, x, mid, pos, val);
    else update(2 * id + 1, mid + 1, y, pos, val);

    tree[id] = max(tree[2 * id], tree[2 * id + 1]);
  }

};

int main() {
  int n, q;
  while (cin >> n >> q) {
    int m = n + 1;
    seg_tree tree(m);

    for (int i = 1; i <= n; ++i) {
      int x;
      cin >> x;
      tree.update(1, 0, m, i, x);
    }

    while (q --> 0) {
      int t, a, b;
      cin >> t >> a >> b;
      if (t == 1) {
        long long last = tree.query(1, 0, m, a, a);
        last += b;
        tree.update(1, 0, m, a, last);
      }
      else {
        long long ans = tree.query(1, 0, m, a, b);
        cout << ans << endl;
      }
    }

  }
  return 0;
}
