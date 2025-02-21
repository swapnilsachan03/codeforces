#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  ll n, k, x;
  cin >> n >> k >> x;

  ll sumTillN = n * (n + 1) / 2;

  if (
    sumTillN < x ||
    (n - k) * (n - k + 1) / 2 > sumTillN - x ||
    k * (k + 1) / 2 > x
  ) {
    cout << "NO" << endl;
    return;
  }

  else cout << "YES" << endl;
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
