#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

const int MX = 10000;

vector<int> gen_primes(int M) {
  vector<int> primes;
  primes.push_back(2);

  for (int p = 3; p <= M; p += 2) {
    int i = 2;
    bool f = true;
    while (i * i <= p) {
      if (p % i == 0) {
        f = false;
        break;
      }
      i ++;
    }

    if (f) primes.push_back(p);
  }

  return primes;
}

vector<int> reorder(int n) {
  vector<int> d(10, 0);
  while (n > 0) {
    d[n % 10] ++;
    n /= 10;
  }

  return d;
}

bool check(vector<int> &primes, int n) {
  vector<int> v = reorder(n);
  for (int i = 0; i < primes.size(); ++i) {
    if (reorder(primes[i]) == v) return true;
  }
  return false;
}

int main() {
  int T, n;
  
  while (cin >> T) {
    vector<int> primes = gen_primes(MX);

    while (T --> 0) {
      cin >> n;
      cout << (check(primes, n) ? "YES" : "NO") << endl;
    }
  }

  return 0;
}
