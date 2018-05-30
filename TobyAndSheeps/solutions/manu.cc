#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  while (cin >> N) {
    vector<int> data(N + 1);
    for (int i = 1; i <= N; i++) {
      cin >> data[i];
      data[i] += data[i - 1];
    }

    int q; cin >> q;
    while (q--) {
      int l, r; cin >> l >> r;
      int total = r - l + 1;
      int sheeps = data[r] - data[l - 1];
      int wolves = total - sheeps;
      puts(wolves > sheeps ? "Yes" : "No");
    }
  }
  return 0;
}
