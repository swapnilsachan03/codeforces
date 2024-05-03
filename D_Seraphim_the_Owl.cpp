#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/* in this solution, we first check which element with index <= m has the lowest cost to reach from m + 1 using the cost function, and we'll intialize our ans with that. after that, we'll have to compute the cost from n to m + 1 (or from m + 1 to n)

to compute the cost, we can traverse all elements from m + 1 to n. if the cost of swapping our position to that index or a[i] is greater than cost skipping that element, i.e. b[i], then we skip it and add b[i] to our ans, else we swap our position with that element and add the cost a[i] to our solution */

ll cost (vi &a, vi &b, int m) {
  if (m == 0) return a[0];
  return min((ll) a[m], (ll) b[m] + cost(a, b, m - 1));
}

void solve() {
  int n, m;
  cin >> n >> m;

  m -= 1;

  vi a(n), b(n);

  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];

  ll res = cost(a, b, m);

  for (int i = m + 1; i < n; i++) {
    if (a[i] >= b[i]) res += b[i];
    else res += a[i];
  }

  cout << res << endl;
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
