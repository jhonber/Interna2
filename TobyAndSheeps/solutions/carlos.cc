#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

const int MAXN = 100000;

int main() {
  int n, q, l, r, x;
  while (cin >> n) {
    assert(n <= MAXN);
    vector<int> values(n + 1);
    for (int i = 1; i <= n; ++i) {
      cin >> x;
      assert(x < 2);
      values[i] = values[i - 1] + x;
    }
    cin >> q;
    assert(q <= MAXN);
    for (int i = 0; i < q; ++i) {
      cin >> l >> r;
      assert(l <= n);
      assert(r <= n);
      assert(l <= r);
      int size_interval = r - l + 1;
      int sheeps = values[r] - values[l - 1];
      int wolves = size_interval - sheeps;
      cout << ((wolves > sheeps) ? "Yes" : "No") << endl;
    }
  }
  return 0;
}
