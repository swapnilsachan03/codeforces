#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);

  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), greater<int>());

  ll ans = 0;

  for (int i = 0; i < min(m, n) && a[i] < b[i]; i++) {
    ans += b[i] - a[i];
  }

  cout << ans << endl;

  return 0;
}
