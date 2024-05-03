#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int gcd (int x, int y) {
  if (y == 0) return x;
  return gcd(y, x % y);
}

void solve() {
  int x;
  cin >> x;

  int res = INT_MIN, ans = 1;

  for (int y = 1; y < x; y++) {
    int k = gcd(x, y) + y;

    if (k > res) {
      res = k;
      ans = y;
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
