#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, k;
  cin >> n >> k;

  vector<ll> cans(n);

  for (int i = 0; i < n; i++) {
    cin >> cans[i];
  }

  sort(cans.begin(), cans.end());

  ll res = cans[0] * n, x = 1;

  if (k <= res) {
    cout << k << endl;
    return;
  }

  for (int i = 1; i < n; i++) {
    res += min((cans[i] - cans[i - 1]) * (n - i), k - res);

    if (res >= k) break;
    else x += 1;
  }

  cout << res + x << endl;
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
