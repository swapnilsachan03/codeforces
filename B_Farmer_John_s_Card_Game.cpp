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

  vvi cows(n, vi (m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> cows[i][j];
    }

    sort(cows[i].begin(), cows[i].end());
  }

  vi ans(n, 0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m - 1; j++) {
      if (cows[i][j + 1] - cows[i][j] != n) {
        cout << -1 << endl;
        return;
      }
    }

    ans[cows[i][0]] = i + 1;
  }

  for (auto it : ans) {
    cout << it << " ";
  }

  cout << endl;
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
