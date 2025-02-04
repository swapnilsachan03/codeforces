#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n;
  cin >> n;

  int x;
  map<pii, vi> mp;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x;
      mp[{ i-j, j-i }].push_back(x);
    }
  }

  int ans = 0;

  for (auto it : mp) {
    int depth = *min_element(it.second.begin(), it.second.end());
    if (depth < 0) ans += depth;
  }

  cout << -1 * ans << endl;
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
