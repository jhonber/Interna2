#include <bits/stdc++.h>

using namespace std;

const int MN = 22;

int go(int p, int c) { // people, candies
    if (p == 1)
        return 1;

    int ans = 0;
    for (int d = 0; d <= c; d++) {
        ans += go(p - 1, c - d);
    }
    return ans;
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int d, k;
        cin >> d >> k;
        cout << go(k, d) << endl;
    }
    return 0;
}