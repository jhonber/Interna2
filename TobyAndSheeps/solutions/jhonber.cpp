#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

int main() {
  int T, n;
  while (cin >> n) {
    if (n < 1 || n > 100000) assert("Bad range for N");

    vector<int> sheeps(n + 1, 0);

    for (int i = 0; i < n; ++i) {
      bool x;
      cin >> x;

      sheeps[i + 1] = sheeps[i] + x;
    }


    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
      int l, r;
      cin >> l >> r; l --;

      if (l < n || l > n) assert("Bad range for L or R");

      int cnt_s = sheeps[r] - sheeps[l];
      cout << (cnt_s * 2 < r - l ? "Yes" : "No") << endl; 
    }
  }

  return 0;
}

