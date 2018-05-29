#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}
const int MX = 1111;
vector<int> G[MX];

void count (int i, vector<bool> &visited, int &tot) {
  if (!visited[i]) {
    visited[i] = true;
    tot ++;
    for (int j = 0; j < G[i].size(); ++j) {
      int next = G[i][j];
      count(next, visited, tot);
    }
  }
}

int main() {
  int n, m;
  while (cin >> n >> m) {
    if (m < 0 || m > (n*(n-1)) / 2) paila("Bad range for m");
    for (int i = 0; i < MX; ++i) G[i].clear();

    for (int i = 0; i < m; ++i) {
      int a, b;
      cin >> a >> b;
      G[a].push_back(b);
    }

    int memo[MX];
    memset(memo, -1, sizeof memo);

    int q;
    cin >> q;
    if (n < 1 || n > 1000 || q < 1 || q > 1000) paila("Bad range for N or Q");

    for (int i = 0; i < q; ++i) {
      int s;
      cin >> s;
      if (s < 1 || s > 1000) paila("Bad range for S");

      if (memo[s] == -1) {
        vector<bool> visited(MX, 0);
        int tot = 0;
        count(s, visited, tot);
        memo[s] = tot - 1;
      }
      
      cout << memo[s] << endl;
    }
  }

  return 0;
}
