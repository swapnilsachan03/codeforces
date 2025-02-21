#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, x;
  cin >> n >> x;

  vi fuel(n);

  for (int i = 0; i < n; i++) {
    cin >> fuel[i];
  }

  int ans = max(fuel[0], 2 * (x - fuel[n - 1]));

  for (int i = 1; i < n; i++) {
    ans = max(ans, fuel[i] - fuel[i - 1]);
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
