#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define D(x) cout << #x << " = " << (x) << endl;
#define paila(x) {cout << (x) << endl; assert(false);}

int love_calc (string s) {
  int cnt = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s.substr(i, 4) == "love") cnt ++;
  }
  return cnt;
}

int main() {
  int n;
  string s;

  while (cin >> n) {
    while (n --> 0) {
      cin >> s;

      if (s.size() == 0 || s.size() > 1000) {
        paila("Bad size");
      }
      for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) paila("There is an upper letter");
        if (!isalpha(s[i])) paila("There is non alphabetic letter");
      }

      cout << love_calc(s) << endl;
    }
  }

  return 0;
}
