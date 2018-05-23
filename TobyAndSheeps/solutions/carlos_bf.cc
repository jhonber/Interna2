#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n, q, l, r, x;
  while (cin >> n) {
    vector<int> values(n + 1);
    for (int i = 1; i <= n; ++i) {
      cin >> x;
      values[i] = x;
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
      cin >> l >> r;
      int sheeps = 0;
      int wolves = 0;
      for (int j = l; j <= r; j++) {
        sheeps += values[j];
        wolves += !values[j];
      }
      cout << ((wolves > sheeps) ? "Yes" : "No") << endl;
    }
  }
  return 0;
}
