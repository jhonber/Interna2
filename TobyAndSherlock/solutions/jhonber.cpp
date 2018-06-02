#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  while (cin >> t) {
    while (t --> 0) {
      int n;
      cin >> n;
      cout << (n <= 5 || n % 6 != 0 ? "Tobby" : "Sherlock") << endl;
      if (t < 0 || t > 1000 || n < 0 || n > 1000) assert(false);
    }
  }
  return 0;
}
