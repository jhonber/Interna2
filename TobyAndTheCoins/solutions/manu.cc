#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T; cin >> T;
    vector<int> coins = {20, 10, 5, 2, 1};

    for (int i = 0; i < T; i++) {
        int price; cin >> price;
        int ans = 0;
        for (int c : coins) {
            while (price >= c) {
                ans++;
                price -= c;
            }
        }
        cout << ans << endl;
    }
    return 0;
}