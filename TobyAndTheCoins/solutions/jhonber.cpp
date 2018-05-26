#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

int main() {
  int T, n;

  vector<int> coins = {20, 10, 5, 2, 1};

  while (cin >> T) {
    while (T --> 0) {
      int n;
      cin >> n;

      if (n <= 1 || n >= 10000) assert("Bad range for cost");

      int ans = 0;
      for (int i = 0; i < 5; ++i) {
        while (n - coins[i] >= 0) {
          n -= coins[i];
          ans ++;
        }
      }

      cout << ans << endl;
    }
  }

  return 0;
}

