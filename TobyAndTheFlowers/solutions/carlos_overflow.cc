#include<bits/stdc++.h>
using namespace std;

const int START = 1e12 * -1;

struct node {
  int value;
  node * left, * right;
  node () : value(0) {}
};

typedef node * pnode;

void update(pnode root) {
    int ans = START;
    if (root-> left != nullptr) ans = root-> left-> value;
    if (root-> right != nullptr) ans = max(ans, root-> right-> value);
    root-> value = ans;
    return;
}

pnode modify(pnode root, int b, int e, int l, int r, int v) {
  if (root == nullptr) root = new node();
  if (b > r || e < l) return root;
  if (b >= l && e <= r) {
    root-> value += v;
    return root;
  }
  int mid = (b + e) >> 1;

  root-> left = modify(root-> left, b, mid, l, r, v);
  root-> right = modify(root-> right, mid + 1, e, l, r, v);
  update(root);
  return root;
}

int query(pnode root, int b, int e, int l, int r) {
  if (root == nullptr || b > r || e < l) return START;
  if (b >= l && e <= r) return root-> value;
  int mid = (b + e) >> 1;
  int left = query(root-> left, b, mid, l, r);
  int right = query(root-> right, mid + 1, e, l, r);
  return max(left, right);
}

int main() {
  int n, q, t, l, r;
  int x;
  while (cin >> n >> q) {
    pnode root = nullptr;
    for (int i = 0; i < n; i++) {
      cin >> x;
      root = modify(root, 0, n - 1, i, i, x);
    }
    for (int i = 0; i < q; i++) {
      cin >> t >> l >> r;
      if (t == 1) {
        root = modify(root, 0, n - 1, l - 1, l - 1, r);
      } else {
        cout << query(root, 0, n - 1, l - 1, r - 1) << "\n";
      }
    }
  }
  return 0;
}
