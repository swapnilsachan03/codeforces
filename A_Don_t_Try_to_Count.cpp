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

  string a, b;
  cin >> a >> b;

  int ans = 0;

  while (a.find(b) == -1 && ans < 6) {
    a = a + a;
    ans += 1;
  }

  if (a.find(b) != -1) cout << ans << endl;
  else cout << -1 << endl;
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
