#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc; cin >> tc;
    while (tc--) {
         int n; cin >> n;
         puts((n % 6) == 0 ? "Sherlock" : "Toby");
    }
    return 0;
}