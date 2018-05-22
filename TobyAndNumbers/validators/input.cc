#include <iostream>
#include <cassert>

using namespace std;


void check_range(int var, int lo, int hi, string msg) {
    if (var < lo  || var > hi) {
        cerr << msg << endl;
        assert(false);
    }
}

int main() {
    int T; cin >> T;
    check_range(T, 1, 10, "test cases");
    for (int i = 0; i < T; i++) {
        int n; cin >> n;
        check_range(n, 1, 100, "array length");
        for (int j = 0; j < n; j++) {
            int t; cin >> t;
            check_range(t, 1, 100000, "array item");
        }
    }
    return 0;
}