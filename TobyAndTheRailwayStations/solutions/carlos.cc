#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int dfs(int node, vector<vector<int>> &G, vector<bool> &v) {
  int ans = 1;
  v[node] = true;
  for (auto i : G[node]) {
    if (v[i]) continue;
    ans += dfs(i, G, v);
  }
  return ans;
}

int main() {
  int n, m, q, u, v, s;
  while (cin >> n >> m) {
    assert(n <= 1000 && m <= (n * (n - 1)) / 2);

    vector<vector<int>> G(n);
    vector<bool> vis(n);

    for (int i = 0; i < m; i++) {
      cin >> u >> v;
      assert(u <= n && v <= n);
      u--; v--;
      G[u].push_back(v);
    }

    cin >> q;
    assert(q <= 1000);
    for (int i = 0; i < q; i++) {
      cin >> s;
      assert(s <= n);
      s--;
      fill(vis.begin(), vis.end(), 0);
      int ans = dfs(s, G, vis);
      cout << ans - 1 << endl;
    }
  }
}
