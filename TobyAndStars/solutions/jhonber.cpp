#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

const int MX = 555;

double dist (double x1, double y1, double x2, double y2) {
  double a = x2 - x1;
  double b = y2 - y1;
  return sqrt(a * a + b * b);
}

int main() {

  vector<double> x(MX), y(MX);

  int n;
  cin >> n;
  if (n < 2 || n > 500) assert("Bad range for N");

  for (int i = 0; i < n; ++i) {
    cin >> x[i] >> y[i];
  }

  double best = 1e100;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j) continue;

      double cur_d = dist(x[i], y[i], x[j], y[j]);
      best = min(best, cur_d);
    }
  }

  cout << fixed << setprecision(16) << best << endl;

  return 0;
}

