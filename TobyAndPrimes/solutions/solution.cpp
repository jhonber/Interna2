#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

const int MX = 10000;

vector<int> gen_primes (int M) {
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

vector<int> int_to_vec (int n) {
  vector<int> v;
  while (n > 0) {
    v.push_back(n % 10);
    n /= 10;
  }

  reverse(v.begin(), v.end());
  return v;
}

int vec_to_int (vector<int> &v) {
  int n = v.size();
  int r = 0;
  int p = 1;
  for (int i = n - 1; i >= 0; --i) {
    r += v[i] * p;
    p *= 10;
  }

  return r;
}

bool check(vector<int> &primes, int n) {
  vector<int> v = int_to_vec(n);
  sort(v.begin(), v.end());

  do {
    if (v[0] == 0) continue;
    int cur = vec_to_int(v);
    for (int i = 0; i < primes.size(); ++i) {
      if (cur == primes[i]) {
        return true;
      }
    }
  }
  while (next_permutation(v.begin(), v.end()));

  return false;
}

int main() {
  int T, n;

  while (cin >> T) {
    vector<int> primes = gen_primes(MX);

    while (T --> 0) {
      cin >> n;
      
      if (n < 1 || n > 9999) paila("N exceed limits");
      cout << (check(primes, n) ? "YES" : "NO") << endl;
    }
  }

  return 0;
}
