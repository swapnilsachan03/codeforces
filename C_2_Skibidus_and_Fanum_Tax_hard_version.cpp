#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, m;
  cin >> n >> m;

  vi a(n), b(m);

  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  sort(b.begin(), b.end());

  a[0] = min(a[0], b[0] - a[0]);    // we can also make a[0] = 0 as a[i] >= 1

  for (int i = 1; i < n; i++) {
    auto lb = lower_bound(b.begin(), b.end(), a[i] + a[i - 1]);

    if (lb != b.end()) {
      if (a[i] < a[i - 1]) {
        a[i] = *lb - a[i];
      } else {
        a[i] = min(*lb - a[i], a[i]);
      }
    }

    if (a[i] < a[i - 1]) {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
