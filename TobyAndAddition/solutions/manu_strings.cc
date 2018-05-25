/**
 *  This solution is to test the time limit. Should be judged as ACC.
 * */

#include <bits/stdc++.h>

std::string convert(long long a) {
  std::string ans;
  while (a) {
    ans += ('0' + (a & 1));
    a >>= 1;
  }
  return ans;
}

int main() {
  int tc;
  std::cin >> tc;
  while (tc--) {
    long long a, b;
    std::cin >> a >> b;
    int ans = 0;
    std::string s1 = convert(a), s2 = convert(b);
    for (auto c : s1)
      ans += c == '1';
    for (auto c : s2)
      ans += c == '1';
    std::cout << ans << std::endl;
  }
  return 0;
}
