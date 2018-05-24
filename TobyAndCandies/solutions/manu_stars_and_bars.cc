#include <bits/stdc++.h>

using namespace std;

const int MN = 22;

int main() {
    int coef[MN][MN];
    memset(coef, 0, sizeof coef);
    coef[0][0] = 1;
    for (int i = 1; i < MN; i++) {
        coef[i][0] = 1;
        for (int j = 1; j < MN; j++) {
            coef[i][j] = coef[i - 1][j] + coef[i - 1][j - 1];
        }
    }

    int tc; cin >> tc;
    while (tc--) {
        int d, k;
        cin >> d >> k;
        cout << coef[d + k - 1][k - 1] << endl;
    }
    return 0;
}