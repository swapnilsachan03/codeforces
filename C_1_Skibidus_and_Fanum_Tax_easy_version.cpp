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

  a[0] = min(a[0], b[0] - a[0]);

  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) {
      if (b[0] - a[i] < a[i - 1]) {
				cout << "NO" << endl;
				return;
			} else a[i] = b[0] - a[i];
    }

    else if (b[0] - a[i] >= a[i - 1]) {
      a[i] = min(a[i], b[0] - a[i]);
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
