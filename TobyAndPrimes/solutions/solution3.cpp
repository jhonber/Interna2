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

string reorder(int n) {
  string n2 = to_string(n);
  sort(n2.begin(), n2.end());
  return n2;
}

bool check(vector<string> &r_primes, int n) {
  string n2 = reorder(n);
  for (int i = 0; i < r_primes.size(); ++i) {
    if (r_primes[i] == n2) return true;
  }
  return false;
}

int main() {
  int T, n;
  
  while (cin >> T) {
    vector<int> primes = gen_primes(MX);
    vector<string> r_primes;
    for (int i = 0; i < primes.size(); ++i) {
      r_primes.push_back(reorder(primes[i]));
    }

    while (T --> 0) {
      cin >> n;
      
      cout << (check(r_primes, n) ? "YES" : "NO") << endl;
    }
  }

  return 0;
}
