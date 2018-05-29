#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

int main() {
  int n, m;
  while (cin >> n >> m) {
    int board[n][m];

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> board[i][j];
      }
    }

    for (int i = 1; i < n; ++i) board[i][0] += board[i - 1][0];
    for (int i = 1; i < m; ++i) board[0][i] += board[0][i - 1];

    for (int i = 1; i < n; ++i) {
      for (int j = 1; j < m; ++j) {
        board[i][j] = min(board[i][j - 1] + board[i][j], board[i - 1][j] + board[i][j]);
      }
    }

    cout << board[n - 1][m - 1] << endl;

  }
  return 0;
}
