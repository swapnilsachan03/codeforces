#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int a, b, n;
  cin >> a >> b >> n;

  vi tools(n);
  ll ans = b;

  for (int i = 0; i < n; i++) {
    cin >> tools[i];
    ans += min(a - 1, tools[i]);
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
