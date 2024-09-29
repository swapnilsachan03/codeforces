#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/* We need to check three conditions:

-> First, we'll check if the intervals are disjoint, if they are we only need to close one door.
-> Else, we'll assume that no ends of the intervals are overlapping.
-> If one interval is overlapping, we'll need to close one more door, if the other end of the interval is also overlapping, then we'll need to close one more door. */

void solve() {
  int l, r, m, n;
  cin >> l >> r >> m >> n;

  if (m > r || l > n) {
    cout << 1 << endl;
    return;
  }

  int ans = min(r, n) - max(l, m);

  ans += (l != m);
  ans += (r != n);

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
