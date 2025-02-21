#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  ll n;
  cin >> n;

  ll ans = 0;

  for (int i = 1; i <= n; i++) {
    if (n % i != 0) break;
    ans += 1;
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
