#include <bits/stdc++.h>

int main() {
  int tc;
  std::cin >> tc;
  while (tc--) {
    long long a, b;
    std::cin >> a >> b;
    int ans = 0;
    while (a) {
      ans += a & 1;
      a >>= 1;
    }
    while (b) {
      ans += b & 1;
      b >>= 1;
    }
    std::cout << ans << '\n';
  }
  return 0;
}
