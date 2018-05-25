#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

const long long MX = 1e18;

int count (long long x) {
  long long p = 1;
  int c = 0;
  for (int i = 0; i < 63; ++i) {
    c += (x & p)? 1 : 0;
    p *= 2;
  }

  return c;
}

int main() {
  int n;
  long long a, b;
  while (cin >> n) {
    while (n --> 0) {
      cin >> a >> b;
      if (a < 0 || a > MX && b < 0 || b > MX) {
        paila("Bad range for a and b");
      }

      cout << count(a) + count(b) << endl;
    }
  }

  return 0;
}
