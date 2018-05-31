#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  while (cin >> n >> m) {
    assert(n <= 200 && m <= 200);
    vector<vector<int>> dp(n, vector<int>(m));
    for (auto &i : dp)
      for (auto &j : i) {
        cin >> j;
        assert(j <= 1000);
      }

    for (int i = 1; i < m; i++) dp[0][i] += dp[0][i - 1];
    for (int i = 1; i < n; i++) dp[i][0] += dp[i - 1][0];
    for (int i = 1; i < n; i++)
      for (int j = 1; j < m; j++)
        dp[i][j] = min(dp[i][j - 1] , dp[i - 1][j]) + dp[i][j];
    cout << dp[n - 1][m - 1] << endl;
  }
}
