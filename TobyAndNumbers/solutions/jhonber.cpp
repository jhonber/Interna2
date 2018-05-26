#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

int main() {
  int T, n;
  while (cin >> T) {
    while (T --> 0) {
      cin >> n;

      vector<int> v(n);
      for (int i = 0; i < n; ++i) cin >> v[i];

      bool ok = true;
      while (ok) {
        ok = false;
        for (int i = 0; i < n; ++i) {
          for (int j = 0; j < n; ++j) {
            if (i == j || v[i] == v[j]) continue;
            int d = abs(v[i] - v[j]);
            if (v[i] >= v[j]) v[i] = d;
            else v[j] = d;
            ok = true;
          }
        }
      }

      cout << v[0] << endl;
    }
  }

  return 0;
}

