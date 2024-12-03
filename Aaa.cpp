
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
      if (a[i] == a[i + 1] + 1) {
        swap(a[i], a[i + 1]);
      }
    }
    cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << '\n';
  }
  return 0;
}
