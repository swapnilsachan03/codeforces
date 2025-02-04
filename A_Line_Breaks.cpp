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

  vector<string> strs(n);

  for (int i = 0; i < n; i++) {
    cin >> strs[i];
  }

  int ans = 0;

  for (string s : strs) {
    m -= s.length();
    ans += 1;

    if (m == 0) {
      cout << ans << endl;
      return;
    }

    if (m < 0) {
      cout << ans - 1 << endl;
      return;
    }
  }

  cout << ans << endl;
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
