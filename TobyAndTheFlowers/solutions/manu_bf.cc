#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<long long> data(n);
  for (auto &i : data)
    cin >> i;

  while (q--) {
    int t; cin >> t;
    if (t == 1) {
      long long pos, val;
      cin >> pos >> val;
      pos--;
      data[pos] += val;
    } else {
      long long l, r;
      cin >> l >> r;
      l--; r--;
      long long best = data[l];
      for (int i = l; i <= r; i++) {
        best = max(best, data[i]);
      }
      cout << best << endl;
    }
  }
  return 0;
}
