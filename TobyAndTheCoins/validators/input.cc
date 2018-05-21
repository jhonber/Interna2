#include <cassert>
#include <iostream>

using namespace std;

int main() {
    int T; cin >> T;
    assert(T > 0 && T <= 100);
    for (int i = 0; i < T; i++) {
        int C; cin >> C;
        assert(C >= 1 && C <= 10000);
    }
    return 0;
}