
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

int go (int d, int k, int sum) {
  if (k == 0)
    return (sum == d ? 1 : 0);

  int ans = 0;
  for (int i = 0; i <= d; ++i) {
    ans += go(d, k - 1, sum + i);
  }

  return ans;
}

int main() {
  int T, d,k;
  while (cin >> T) {
    while (T --> 0) {
      cin >> d >> k;

      int ans = go(d, k, 0);
      cout << ans << endl;
    }
  }

  return 0;
}
