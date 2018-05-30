
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> primes;
  primes.push_back(2);
  for (int i = 3; i < 10000; i++) {
    int ok = true;
    for (auto p : primes)
      ok &= ((i % p) != 0);
    if (ok)
      primes.push_back(i);
  }

  set<vector<int>> is_prime;
  for (auto p : primes) {
    vector<int> frec(10);
    while (p) {
      frec[p % 10]++;
      p /= 10;
    }
    is_prime.insert(frec);
  }

  int n; cin >> n;
  while (n--) {
    int cur; cin >> cur;
    vector<int> frec(10);
    while (cur) {
      frec[cur % 10]++;
      cur /= 10;
    }
    puts(is_prime.count(frec) ? "YES" : "NO");
  }

  return 0;
}

