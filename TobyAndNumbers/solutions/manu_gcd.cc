#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        int ans = 0;
        while (n--) {
            int t; cin >> t;
            ans = __gcd(ans, t);
        }
        cout << ans << endl;
    }
    return 0;
}