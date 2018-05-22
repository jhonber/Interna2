#include <map>
#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double get_dist(pair<int, int> &a, pair<int, int> &b) {
    double x = a.first - b.first;
    double y = a.second - b.second;
    return sqrt(x * x + y * y);
}

int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    double best = 1e100;
    for (auto &i : a) {
        cin >> i.first >> i.second;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            best = min(best, get_dist(a[i], a[j]));
        }
    }
    cout << fixed << setprecision(9) << best << endl;
    return 0;
}