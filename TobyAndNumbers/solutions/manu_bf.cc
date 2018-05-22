#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &i : a) cin >> i;
        while (a.size() > 1) {
            sort(a.begin(), a.end());
            a.resize(unique(a.begin(), a.end()) - a.begin());
            if (a.size() > 1)
                a[a.size() - 1] -= a[a.size() - 2];
        }
        cout << a[0] << endl;
    }
    return 0;
}